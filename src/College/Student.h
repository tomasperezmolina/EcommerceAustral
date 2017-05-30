#ifndef ECOMMERCEAUSTRAL_STUDENT_H
#define ECOMMERCEAUSTRAL_STUDENT_H

#include "../Ecommerce/Payment.h"
#include "../Ecommerce/ProductBook.h"

typedef struct Student{
    char* name;
    int userID;
    int password;
    int phoneNumber;
    char* career;

    Payment** purchaseHistory;
    int amountOfPayments;
    int maxCapacityOfPayments;

    ProductBook** books;
    int amountOfBooks;
    int maxCapacityOfBooks;

}Student;

Student* createStudent(char* name, int password, int phoneNumber, char* career,int initialCapacity);

void studentAddBook(Student* student, ProductBook* book);
void addPayment(Student* student, Payment* payment);

void studentRemoveBook(Student* student, int bookISBN);
void removePayment(Student* student, int paymentID);

void destroyStudent(Student* student);

#endif //ECOMMERCEAUSTRAL_STUDENT_H
