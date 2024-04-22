#include <iostream>
using namespace std;
int main()
{
    int counter  = 0 ;
    int number = 0 ;
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout <<"Enter number: " << i << endl;
        cin >> number;
        if(number % 2)
            continue;
            counter ++;

    }
    cout <<counter <<"  numbers can be divided dy two.";
}
