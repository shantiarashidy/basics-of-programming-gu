#include <iostream>

using namespace std;
/* write a function that inputs a number and if its divided by two
return 0 and else return 1 */
int Mydigit(int x)
{
    if(x % 2 == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int D , a , sum = 0;
    cout <<"Enter a positive number(enter negetive to end the program) " <<endl;
    cin >> a;

    while(a >= 0){
        D = Mydigit(a);
        if(D == 0)
            sum ++;
    cout <<"Enter another number " <<endl;
    cin >> a;
    }
    cout <<"Number of numbers that can be divided by two are: " <<sum;
}
