#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
}Student;

Student *createStudent(const char *name,int age);
void printStudent(Student *student);


int main()
{
    Student **array = (Student **) calloc(3,sizeof(Student*));
    array[0] = createStudent("Murilo",18);
    array[1] = createStudent("Vitor",27);
    array[2] = createStudent("Rosana",52);

    for(int i = 0; i<3; i++)
    {
        printStudent(array[i]);
    }

      for(int i = 0; i<3; i++)
    {
        free(array[i]);
    }

    free(array);
}

Student *createStudent(const char *name,int age)
{
   Student *student = (Student *)calloc(1,sizeof(Student));
   strcpy(student->name,name);
   student->age = age;

   return student;

}

void printStudent(Student *student){
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
}