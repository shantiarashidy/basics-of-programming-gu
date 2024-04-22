#include <iostream>

using namespace std;

int main()
{
    for(int i = 1 ; i <= 5 ; i++)
    for(int j = 1 ; j <= 3 ; j++){
        for(int k = 1 ; k <= 2 ; k++)
            cout << i * j * k <<"\t";
            cout <<endl;
    }
    cout <<endl;
}
