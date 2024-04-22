#include <iostream>
using namespace std;

int main() {
    int List[10];

    for (int i = 0; i < 10; i++) {
        cin >> List[i];
    }

    cout << "The index of numbers that cannot be divided by 2: " << endl;

    for (int j = 0; j < 10; j++) {
        if (List[j] % 2 != 0) {
            cout << "Index " << j << ": " << List[j] << endl;
        }
    }

}
