#include <stdio.h>
#include <time.h>

int linearSearch(int array[], int target,int n);
int binarySearch(int array[], int target, int n);


int main()
{
    int array[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = 20;
    int target = 1;
    clock_t start, end;
    double cpu_time_used;
    // Busca Linear
    start = clock();
    int result = linearSearch(array, target, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Linear Search: índice %d, tempo %.8f segundos\n", result, cpu_time_used);

    // Busca Binária
    start = clock();
    int result2 = binarySearch(array, target, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Binary Search: índice %d, tempo %.8f segundos\n", result2, cpu_time_used);

    return 0;


}

int linearSearch(int array[], int target, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(array[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int binarySearch(int array[], int target,int n)
{
    int low = 0;
    int height = n - 1; 

    while(low <= height)
    {
        int middle = (height + low)/2;

        if(array[middle] == target)
        {
            return middle;
        }else if(array[middle] > target){
            height = middle - 1;
        }else{          
            low = middle + 1;
        }
    }

    return -1;
}