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
  cout << "Eter Gender: ";
  cin >> Gender;
  cout << "Enter Year of Joining: ";
  cin >> YoJ;
  Sal = 0;
}

void Employee::display() {
  cout << "ID: " << ID << endl;
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "Salary: " << Sal << endl;
  cout << "Designation: " << Design << endl;
  cout << "Gender: " << Gender << endl;
  cout << "Year of joining: " << YoJ << endl;
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
  int n;
  cout << "Enter number of employees: " ;
  cin  >> n;
  Employee *e[n];

  int i;
  for (i = 0; i < n; ++i) {
    e[i] = new Employee;
  }
  for (i = 0; i < n; ++i) {
    cout << "Enter details of employee "
         << i + 1 << " : " << endl;
    e[i]->store();
  }

  for (i = 0; i < n; ++i) {
    cout << "Details of employee "
         << i + 1 << " are:" << endl;
    e[i]->display();
  }

}
