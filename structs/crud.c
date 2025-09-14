#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char title[100];
    unsigned int numPages;
    float price;    
}Book;

typedef struct{
    char name[100];
    int age;
    Book *favoriteBook;
}Student;




Book *createBook(const char *title, unsigned int numPages, float price);
Book *copyBook(const Book *book);

Student *createStudent(const char *name,int age,Book *favoriteBook);
void printBook(Book * book);
void destroyBook(Book **book);
void printStudent(Student *student);
void destroyStudent(Student **student);





int main()
{
    Book *book1 = createBook("livro1",450,100.00);
    printBook(book1);
    Student *student = createStudent("Murilo",18,book1);
    printStudent(student);
    destroyBook(&book1);
    destroyStudent(&student);

}

Student *createStudent(const char *name,int age,Book *favoriteBook)
{
   Student *student = (Student *)calloc(1,sizeof(Student));
   strcpy(student->name,name);
   student->age = age;
   student->favoriteBook = copyBook(favoriteBook);

   return student;

}

void printStudent(Student *student){
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Favorite Book:\n" );
    printBook(student->favoriteBook);
}

Book *copyBook(const Book *book)
{
    return createBook(book->title,book->price, book->numPages);
}

Book *createBook(const char *title, unsigned int numPages, float price)
{ 
   Book * book = (Book *)calloc(1,sizeof(Book));
   strcpy(book->title,title);
   book->numPages = numPages;
   book->price = price;

   return book;
}

void destroyBook(Book **book){
    free(*book);
    *book = NULL;
}

void destroyStudent(Student **student){
   
    destroyBook(&(*student)->favoriteBook);
    free(*student);
    *student = NULL;    
}

void printBook(Book *book){
    printf("Title: %s\n", book->title);
    printf("Pages: %d\n", book->numPages);
    printf("Price: %f\n", book->price);
}

