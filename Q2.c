/* Q2. Write a program to obtain detail of m books (Name, ID, Author, price, publication year)
   being purchased by n customers using structures
   and apply a discount on all books published before 2004 if the total bill
   amount of customer is more than 5000 and print discount and final price.
 */

#include <stdio.h>

// Creating struct book with various attributes
struct book {
  int pub_year;
  float price;
  char book_name[50];
  char book_ID[50];
  char book_author[50];
};

// Main program starts
int main(void) {

  // Input number of customers
  int no_of_customers;
  printf("Enter number of customers: ");
  scanf("%d", &no_of_customers);
  getchar();
  printf("\n");

  // Loop for each customer starts
  for(int i; i < no_of_customers; ++i) {

    // Input number of books the customer wants
    int no_of_books;
    printf("Enter number of books customer %d is buying: ", i + 1);
    scanf("%d", &no_of_books);
    getchar();
    printf("\n");

    // Creating array of books
    struct book books[no_of_books];

    // Creating float to store total bill amount
    float total = 0;

    // Creating loop for taking inputs for each book
    for(int j; j < no_of_books; ++j) {
      // Input name of book
      printf("Enter name of book %d: ", j + 1);
      scanf("%[^\n]s", books[j].book_name);
      getchar();

      // Input ID of book
      printf("Enter ISBN of book %d: ", j + 1);
      scanf("%s", books[j].book_ID);
      getchar();

      // Input author of book
      printf("Enter author of book %d: ", j + 1);
      scanf("%[^\n]s", books[j].book_author);
      getchar();

      // Input publication year of book
      printf("Enter publication year of book %d: ", j + 1);
      scanf("%d", &books[j].pub_year);
      getchar();

      // Input price of book
      printf("Enter price of book %d: ", j + 1);
      scanf("%f", &books[j].price);
      getchar();

      total+=books[j].price;
      printf("\n");
    }

    // Applying the discount on books eligible and printing
    if(total >= 5000) {
      for(int k; k < no_of_books; ++k) {
        if(books[k].pub_year < 2004) {
          books[k].price /= 2;
          total -= books[k].price;
          printf("Congratulations! You are eligible for a discount on the book %s. The price is now %f.\n", books[k].book_name, books[k].price);
        }
      }
    }

    printf("Total bill amount after discounts is %f.\n", total);
    printf("\n");
  }

}
