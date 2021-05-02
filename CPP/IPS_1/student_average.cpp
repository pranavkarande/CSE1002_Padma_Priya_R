#include <iostream>
using namespace std;

class student {
public:
  int roll_no;
  char name[50];
  int mark1;
  int mark2;
  int mark3;
  int attendence;

  bool tbi() {
    float average = (mark1 + mark2 + mark3) / 3;
    if (average < 40 && attendence < 75) {
      return true;
    } else {
      return false;
    }
  }
};

int main(void) {
  int n;
  cin >> n;

  student students[n];
  int i;
  for (i = 0; i < n; ++i) {
    cin >> students[i].roll_no >> students[i].name >> students[i].mark1 >>
        students[i].mark2 >> students[i].mark3 >> students[i].attendence;
  }

  bool NA = true;

  for (i = 0; i < n; ++i) {
    if (students[i].tbi()) {
      cout << students[i].roll_no << "\n"
           << students[i].name << "\n"
           << (students[i].mark1 + students[i].mark2 + students[i].mark3) / 3
           << "\n";
      NA = false;
    }
  }

  if (NA) {
    cout << "NA" << endl;
  }
}
