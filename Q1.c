#include <stdio.h>

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

int main(void) {
  struct Employee e1;

  printf("Enter employee Name: ");
  scanf("%[^\n]s", e1.Name);
  getchar();

  printf("Enter employee ID: ");
  scanf("%d", &e1.ID);
  getchar();

  printf("Enter employee Gender(F/M): ");
  scanf("%c", &e1.Gender);
  getchar();

  printf("Enter employee Designation: ");
  scanf("%[^\n]s", e1.Designation);
  getchar();

  printf("Enter basic value: ");
  scanf("%f", &e1.basic);
  getchar();

  printf("Enter hra value: ");
  scanf("%f", &e1.hra);
  getchar();

  printf("Enter da value: ");
  scanf("%f", &e1.da);
  getchar();

  printf("Enter pf value: ");
  scanf("%f", &e1.pf);
  getchar();

  e1.Sallary = e1.basic + e1.hra + e1.da - e1.pf;

  printf("Sallary of %s %s is %f.\n", e1.Designation, e1.Name, e1.Sallary);
}
