#include <iostream>

using namespace std;

int prime(int x)
{
    for(int i = 2 ; i <= x/2 ; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    for(int i = 1000 ; i < 10000 ; i++){
        int temp = prime(i);
        if(temp)
            cout << i <<"\t";
    }

}
