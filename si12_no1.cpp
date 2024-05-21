#include <iostream>

using namespace std;

int power(int  a , int b)
{
    int p = 1;
    for(int i = 1 ; i <= b ; i++)
        p = a * p;
    return p;
}
int main()
{
    int x , y;
    for(int j = 1 ; j <= 10 ; j++){
        cin >> x >> y;
        if(x >= y)
            cout << power(x , y);
        else
            cout << power(y , x);
    }
}
