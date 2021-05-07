#include <iostream>
using namespace std;

class Blood {
  char blood_group[4];
  int cost;

public:
  void display(Blood obj[], int n);
  Blood();
};

Blood::Blood() {
  cout << "Enter the Blood group:" << endl;
  cin >> blood_group;
  cout << "Enter cost per unit:" << endl;
  cin >> cost;
}

void Blood::display(Blood obj[], int n) {
  Blood min_cost_ele = obj[0];

  int i;
  for (i = 1; i < n; ++i) {
    if (obj[i].cost < min_cost_ele.cost) {
      min_cost_ele = obj[i];
    }
  }

  cout << "Blood group details:\n"
       << "Blood group with lowest cost: " << min_cost_ele.blood_group << endl;
}

int main() {
  int no_of_groups;
  cout << "Enter number of Blood groups:" << endl;
  cin >> no_of_groups;

  Blood groups[no_of_groups];

  groups[0].display(groups, no_of_groups);
}
