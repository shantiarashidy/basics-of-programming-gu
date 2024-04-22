#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c;

    cout << a << "\n" <<b;
    int i = 3 ;
    while(i <= 10)
    {
        c = a + b ;
        cout<< "\n" <<c;
        a = b;
        b = c;
        i++;
    }

}
