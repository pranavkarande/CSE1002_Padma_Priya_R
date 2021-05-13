#include <iostream>
#include <cstring>

using namespace std;

class CoWin {
  int no_of_vaccines;
  int batch_nos[50];
  char names[50][50];
  char laboratory[50][50];
  char company_names[50][50];
  double prices[50];
  int availability[50];
  char camp_names[50][50];
public:
  CoWin();
  void search(int);
  void search(char [50]);
  void search(double);
};

CoWin::CoWin() {
  cin >> no_of_vaccines;
  int i;
  for (i = 0; i < no_of_vaccines; ++i) {
    cin >> batch_nos[i] >> names[i]
        >> laboratory[i] >> prices[i]
        >> availability[i] >> camp_names[i];
  }
}

void CoWin::search(int given_batch_no) {
  bool found = false;
  int i;
  for (i = 0; i < no_of_vaccines; ++i) {
    if (batch_nos[i] == given_batch_no) {
      // Print details of vaccine
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "No Vaccine Available" << endl;
  }
}

void CoWin::search(char given_name[50]) {
  bool found = false;
  int i;
  for (i = 0; i < no_of_vaccines; ++i) {
    if (!strcmp(given_name, names[i])) {
      // Print details of vaccine
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "No Vaccine Available" << endl;
  }
}

void CoWin::search(double given_price) {
  bool found = false;
  int i;
  for (i = 0; i < no_of_vaccines; ++i) {
    if (prices[i] < given_price) {
      // Print details of vaccine
      found = true;
    }
  }
  if (!found) {
    cout << "No Vaccine Available" << endl;
  }
}

int main() {
  CoWin data;

  int criteria;
  cin >> criteria;

  if (criteria == 1) {
    int x;
    cin >> x;
    data.search(x);
  } else if (criteria == 2) {
    char str[50];
    cin >> str;
    data.search(str);
  } else if (criteria == 3) {
    double x;
    cin >> x;
    data.search(x);
  }
}
