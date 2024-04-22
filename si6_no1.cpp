#include <iostream>
using namespace std;

int main()
{
    float max1 = 0, max2 = 0, avg;
    int n1 = 0, n2 = 0;
    int number = 30;
    for (int i = 1 , i <= number ;i++)
    {
        cout << "Enter average: " << i <<endl;
        cin >> avg;

        if (avg > max1)
        {
            max2 = max1;
            n2 = n1;
            n1 = 1;
            max1 = avg;
        }
        else if (avg == max1)
        {
            n1++;
        }
        else if (avg > max2)
        {
            max2 = avg;
            n2 = 1;
        }
        else if (avg == max2)
        {
            n2++;
        }
    }

    cout << "max1 = " << max1 << ", n1 = " << n1 << endl;
    cout << "max2 = " << max2 << ", n2 = " << n2 << endl;

    return 0;
}
