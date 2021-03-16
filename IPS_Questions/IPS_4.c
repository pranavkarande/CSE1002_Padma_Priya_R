#include <stdio.h>

struct Item {
  char Name[50];
  int ID;
  float price;
};

int main(void) {
  float total_price = 0;
  int no_of_bills;
  printf("Enter number of bills: ");
  scanf("%d", &no_of_bills);
  getchar();
  printf("\n");

  int i;
  for (i = 0; i < no_of_bills; ++i) {
    int no_of_items;
    printf("Enter number of items in bill %d: ", i + 1);
    scanf("%d", &no_of_items);
    getchar();

    int j;
    for (j = 0; j < no_of_items; ++j) {
      struct Item new;
      printf("Enter name of item %d: ", j + 1);
      scanf("%[^\n]s", new.Name);
      getchar();

      printf("Enter ID of item %d: ", j + 1);
      scanf("%d", &new.ID);
      getchar();

      printf("Enter price of item %d: ", j + 1);
      scanf("%f", &new.price);
      getchar();
      printf("\n");

      total_price+=new.price;
    }
  }
  printf("Today's total income is %f.\n", total_price);
}
