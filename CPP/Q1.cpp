#include <iostream>
using namespace std;
#include <cstring>

class Employee {
  int ID;
  char Name[50];
  int Age;
  float Sal;
  char Design[50];
  char Gender;
  int YoJ;

  public:
    void store();
    void display ();
    void calSalary();
    void updateSalary();
};

void Employee::store() {
  cout << "Enter ID: ";
  cin >> ID;
  cout << "Enter Name: ";
  cin >> Name;
  cout << "Enter Age: ";
  cin >> Age;
  cout << "Enter Designation: ";
  cin >> Design;
  cout << "Enter Gender: ";
  cin >> Gender;
  cout << "Enter Year of Joining: ";
  cin >> YoJ;
}

void Employee::display() {
  cout << ID << endl;
  cout << Name << endl;
  cout << Age << endl;
  cout << Sal << endl;
  cout << Design << endl;
  cout << Gender << endl;
  cout << YoJ << endl;
}

void Employee::calSalary() {
  float basic;
  cout << "Enter the basic value: ";
  cin >> basic;
  Sal = ((basic + 0.2 * basic + 0.2 * basic) - (0.2 * basic));
}

void Employee::updateSalary() {
  if (Gender == 'M' &&
      Age > 45 &&
      YoJ < 2004 &&
      !strcmp(Design, "Manager")) {
    Sal += 0.05 * Sal;
  }
}

int main(void) {
  Employee e;

  e.store();
  cout << "------Before-------" << endl;
  e.display();
  e.calSalary();
  cout << "------After-------" << endl;
  e.display();
}
