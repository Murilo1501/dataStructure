#include <stdio.h>
#include <string.h>

typedef struct{
    char name[100];
    int age;
} Student;

int main()
{
    Student student;

    strcpy(student.name, "Murilo");
    student.age = 18;

    printf("%s",student.name);
    printf("%d",student.age);
}