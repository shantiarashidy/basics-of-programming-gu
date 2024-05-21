#include <iostream>

using namespace std;

void MySquare( int a[] , int L )
{
    for (int i = 0 ; i < L ; i++)
       a[i] = a[i] * a[i];

}
int main()
{
    int MyArray[10];

    for( int i = 0 ; i < 10 ; i++)
        cin >> MyArray[i];

    MySquare(MyArray , 10);

    for(int i = 0 ; i < 10 ; i++)
        cout <<MyArray[i] << "\t";
}
