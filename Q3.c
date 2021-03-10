/*
 * Q3. Write a program to obtain the details of n students (Name, Gender, age, CGPA, languages spoken, residence, Bday)
 * using structures and print all the male students more than 18 years old
 * born on 18th March with CGPA > 8.5 who speak Tamil and reside in Vellore.
 */

#include <stdio.h>
#include <string.h>

// Creating struct student with various attributes
struct student {
  char name[50];
  char gender;
  int age;
  float CGPA;
  char languages[5][20];
  char residence[50];
  char Bday[5];  // In dd/mm format
};


// Main loop starts
int main(void) {

  // Asking for number of students
  int no_of_students;
  printf("Enter number of students: ");
  scanf("%d", &no_of_students);
  getchar();
  printf("\n");

  // Creating array of type student
  struct student students[no_of_students];

  // Creating array of students who pass tests
  char passed[no_of_students][50];

  // Keeping track of number of passed students for above array
  int no_of_passed = 0;

  // Starting loop for entering details of each student
  int i;
  for(i = 0; i < no_of_students; ++i) {

    // Asking for name of student
    printf("Enter name of student %d: ", i + 1);
    scanf("%[^\n]s", students[i].name);
    getchar();

    // Asking for age of student
    printf("Enter age of student %d: ", i + 1);
    scanf("%d", &students[i].age);
    getchar();

    // Asking for gender of student
    printf("Enter gender of student %d (M/F): ", i + 1);
    scanf("%c", &students[i].gender);
    getchar();

    // Asking for CGPA of student
    printf("Enter CGPA of student %d: ", i + 1);
    scanf("%f", &students[i].CGPA);
    getchar();

    // Asking for languages spoken by the student
    char languages_temp[100];
    printf("Enter languages spoken by the student seperated by space: ");
    scanf("%[^\n]s", languages_temp);
    getchar();

    // Splitting the input to obtain each language as element of array
    char *ptr = strtok(languages_temp, " ");

    int j;
    for(j = 0; ptr != NULL; ++j) {
      strcpy(students[i].languages[j], ptr);
      ptr = strtok(NULL, " ");
    }

    // Asking for residence of student
    printf("Enter city of residence of student %d: ", i + 1);
    scanf("%[^\n]s", students[i].residence);
    getchar();

    // Asking for Birth date of student
    printf("Enter date of birth of student %d (dd/mm): ", i + 1);
    scanf("%s", students[i].Bday);
    getchar();
    printf("\n");

    // Checking if student passes test case
    int passed_bool = 0;
    if ((students[i].gender == 'M') &&
        (students[i].age > 18) &&
        !(strcmp(students[i].Bday, "18/03")) &&
        (students[i].CGPA > 8.5) &&
        !(strcmp(students[i].residence, "Vellore"))) {

      int k;
      for(k = 0; k < 5; ++k) {
        if(!strcmp(students[i].languages[k], "Tamil")) {
          passed_bool = 1;
        }
      }

    }

    // If student passses test cases
    if(passed_bool == 1) {
      printf("%s has passed all test conditions.\n", students[i].name);
      printf("\n");
      strcpy(passed[no_of_passed], students[i].name);
      no_of_passed++;
    }
    else {
      printf("%s has not passed all test conditions.\n", students[i].name);
      printf("\n");
    }

  }

  // Printing final details of all studens who passed test cases
  printf("%d student(s) passed the test conditions.\n", no_of_passed);
  if(no_of_passed > 0) {
    printf("Their name(s) is/are:\n");
    int h;
    for(h = 0; h < no_of_passed; ++h) {
      printf("%s\n", passed[h]);
    }
  }

}
