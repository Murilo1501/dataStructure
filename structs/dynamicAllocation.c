#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char name[100];
    int age;
}Student;

int main()
{


    Student * student  = (Student *) calloc(1,sizeof(Student));
    strcpy(student->name,"Murilo");
    student->age = 10;

    printf("%s",student->name);
     printf("%d",student->age);

}