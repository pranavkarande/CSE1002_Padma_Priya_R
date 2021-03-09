/* Q4. Write a program to take 3 dates of the format dd-MM-yyyy
   (eg. 23-March-2021), dd/MM/yyyy(eg. 23/Mar/2021) and
   mm/dd/yyyy(eg. 5/23/2021) as input and print them in
   the format dd/mm/yyyy(eg. 23/3/2021).
*/
#include <stdio.h>
#include <string.h>

// Function to check if a char is in a string
int char_in(char string[20], char *x) {
  int n = strlen(string);
  int bool = 0;
  // Traverse through string to check if given char is equal to an element
  for(int i = 0; i < n; ++i) {
    if(string[i] == *x) {
      bool = 1;
    }
  }
  return bool;
}

// Function to return index of string element in 2D array
int ind(char str1[12][10], char str2[10]) {
  int return_value = 0;
  for(int k = 0; k < 12; ++k) {
    if(!strcmp(str2, str1[k])) {
      return_value = k;
      break;
    }
  }
  return return_value;
}

// Main program starts
int main(void) {

  // Taking 3 inputs
  char input[3][20];
  for(int j = 0; j < 3; ++j){
    printf("Enter date %d: ", j+1);
    scanf("%s", input[j]);
    getchar();
  }

  // Converting first date
  char months[12][10] = {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December"};
  char *ptr = strtok(input[0], "-");
  char *temp = strtok(NULL, "-");

  printf("Date 1 converted to dd/mm/yyyy is: %s/%d/%s\n", ptr, ind(months, temp) + 1, strtok(NULL, "-"));

  // Converting second date
  char months2[12][10] = {"Jan", "Feb", "Mar", "Apr",
                          "May", "Jun", "Jul", "Aug",
                          "Sep", "Oct", "Nov", "Dec"};
  char *ptr2 = strtok(input[1], "/");
  char *temp2 = strtok(NULL, "/");
  printf("Date 2 converted to dd/mm/yyyy is: %s/%d/%s\n", ptr2, ind(months2, temp2) + 1, strtok(NULL, "/"));

  // Converting third date
  char *ptr3 = strtok(input[2], "/");
  char *m = ptr3;
  char *d = strtok(NULL, "/");
  printf("Date 3 converted to dd/mm/yyyy is: %s/%s/%s\n", d, m, strtok(NULL, "/"));
}
