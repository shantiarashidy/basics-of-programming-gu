#include <iostream>
using namespace std;

int main() {
    int number[10];


    for (int i = 0; i < 10; i++) {
        cin >> number[i];
    }

    cout << "The items in the list in reverse: " << endl;


    for (int j = 9; j >= 0; j--) {
        cout << number[j] << "\n";
    }

}
