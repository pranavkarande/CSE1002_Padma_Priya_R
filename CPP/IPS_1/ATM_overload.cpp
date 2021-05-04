#include <iostream>
using namespace std;


class ATM {
public:
    void display_Combination();
    void display_Combination(int);
};

void ATM::display_Combination() {
    int amount;
    cin >> amount;
    
    int no_10, no_5, no_2, no_1;
    
    no_10 = amount / 10;
    amount %= 10;
        
    no_5 = amount / 5;
    amount %= 5;
        
    no_2 = amount / 2;
    amount %= 2;
    
    no_1 = amount;
    
    int tot = no_10 + no_5 + no_2 + no_1;
    
    int out[tot];
    int p = 0;
    
    int i;
    for (i = 0; i < no_10; ++i) {
        out[p] = 10;
        ++p;
    }
    for (i = 0; i < no_5; ++i) {
        out[p] = 5;
        ++p;
    }
    for (i = 0; i < no_2; ++i) {
        out[p] = 2;
        ++p;
    }
    for (i = 0; i < no_1; ++i) {
        out[p] = 1;
        ++p;
    }
    
    for (i = 0; i < tot - 1; ++i) {
        cout << out[i] << ", ";
    }
    cout << out[tot - 1];
}

void ATM::display_Combination(int amount) {
    int no_10, no_5, no_2, no_1;
    
    no_10 = amount / 10;
    amount %= 10;
    
    no_5 = amount / 5;
    amount %= 5;
    
    no_2 = amount / 2;
    amount %= 2;
    
    no_1 = amount;
    
    int tot = no_10 + no_5 + no_2 + no_1;
    
    int out[tot];
    int p = 0;
    
    int i;
    for (i = 0; i < no_10; ++i) {
        out[p] = 10;
        ++p;
    }
    for (i = 0; i < no_5; ++i) {
        out[p] = 5;
        ++p;
    }
    for (i = 0; i < no_2; ++i) {
        out[p] = 2;
        ++p;
    }
    for (i = 0; i < no_1; ++i) {
        out[p] = 1;
        ++p;
    }
    
    for (i = 0; i < tot - 1; ++i) {
        cout << out[i] << ", ";
    }
    cout << out[tot - 1];
}

int main(void) {
    ATM x;
    
    int choice;
    cin >> choice;
    
    if (choice == 1) {
        x.display_Combination();
    } else {
        int amm;
        cin >> amm;
        x.display_Combination(amm);
    }
}
