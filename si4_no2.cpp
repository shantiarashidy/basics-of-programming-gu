#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    double sum = 0.0;

    while (i <= 1000)
    {
        sum += 1.0 / i;
        i++;
    }

    cout << "sum = " << sum << endl;
}
