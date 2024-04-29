#include <iostream>
using namespace std;

/* write a code that gets a family`s monthly spendings
and prints minimum number and compare it with each month and print the difference
and difference between monthly spending and maximum cost */

int main() {
    int monthly_spendings[12], i;


    cout << "Enter monthly cost of your family in USD for month 1: ";
    cin >> monthly_spendings[0];
    int Min = monthly_spendings[0];
    int Max = monthly_spendings[0];


    for (i = 1; i < 12; i++) {
        cout << "Enter monthly cost of your family in USD for month " << i + 1 << ": ";
        cin >> monthly_spendings[i];

        if (monthly_spendings[i] < Min) {
            Min = monthly_spendings[i];
        }

        if (monthly_spendings[i] > Max) {
            Max = monthly_spendings[i];
        }
    }


    cout << "The minimum monthly cost of the year is: $" << Min << endl;
    cout << "The maximum monthly cost of the year is: $" << Max << endl;


    cout << "Differences between minimum cost and each monthly spending:" << endl;
    for (i = 0; i < 12; i++) {
        int differenceWithMin = monthly_spendings[i] - Min;
        cout << "Month " << i + 1 << ": $" << differenceWithMin << endl;
    }

    cout << "Differences between maximum cost and each monthly spending:" << endl;
    for (i = 0; i < 12; i++) {
        int differenceWithMax = Max - monthly_spendings[i];
        cout << "Month " << i + 1 << ": $" << differenceWithMax << endl;
    }

    return 0;
}
