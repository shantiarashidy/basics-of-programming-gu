#include <iostream>

using namespace std;

int Reverse(int x)
{
    int sum = 0 , r;

    while(x > 0){
        r = x % 10;
        sum = 10 * sum + r;
        x = x / 10;

    }
    return sum;
}

void prepare( int a , int b)
{
    int k;
    for(int i = a ; i <= b ; i++){
        k = Reverse(i);

        if (i == k)
            cout << i <<"\t";
    }
}

void Swap(int &x , int &y)
{
    int z;
    z = x;
    x = y;
    y = z;

}

int main()
{
    int a , b;

    cin >> a >> b;
    if (a > b)
        Swap(a , b);
     prepare(a , b);
}
