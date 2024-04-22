#include <iostream>
using namespace std;

int main() {
    int number[10];


    for (int i = 0; i < 10; i++) {
        cin >> number[i];
    }

    cout << "The items in the list:" << endl;


    for (int j = 0; j < 10; j++) {
        cout << number[j] << "\n";
    }


}
