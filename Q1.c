/* Q1. Write a program to obtain the detail of an employee
   (Name, ID, Gender, Designation, basic value, hra value, da value, pf value)
   using a structures and find out his sallary given
   sallary = (basic + hra + da) - pf.
*/
#include <stdio.h>

// Creating struct employee
struct Employee {
  char Name[50];
  int ID;
  char Designation[50];
  char Gender;
  float hra;
  float basic;
  float da;
  float pf;
  float Sallary;
};

// Main program starts
int main(void) {

  // Creating e1 of type Employee
  struct Employee e1;

  // Asking user for Employee Name
  printf("Enter employee Name: ");
  scanf("%[^\n]s", e1.Name);
  getchar();

  // Asking user for Employee ID
  printf("Enter employee ID: ");
  scanf("%d", &e1.ID);
  getchar();

  // Asking user for Employee Gender
  printf("Enter employee Gender(F/M): ");
  scanf("%c", &e1.Gender);
  getchar();

  // Asking user for Employee Designation
  printf("Enter employee Designation: ");
  scanf("%[^\n]s", e1.Designation);
  getchar();

  // Asking user for Employee basic value
  printf("Enter basic value: ");
  scanf("%f", &e1.basic);
  getchar();

  // Asking user for Employee hra value
  printf("Enter hra value: ");
  scanf("%f", &e1.hra);
  getchar();

  // Asking user for Employee da value
  printf("Enter da value: ");
  scanf("%f", &e1.da);
  getchar();

  // Asking user for Employee pf value
  printf("Enter pf value: ");
  scanf("%f", &e1.pf);
  getchar();

  // Calculating Sallary
  e1.Sallary = e1.basic + e1.hra + e1.da - e1.pf;

  // Printing calculated sallary
  printf("Sallary of %s %s is %f.\n", e1.Designation, e1.Name, e1.Sallary);
}
