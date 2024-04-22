#include <iostream>
using namespace std;
int main ()
{
    int num1 , num2 ;
    char Op;
    cout <<"Enter two numbers : " << endl;
    cin >> num1 >> num2 ;
    cout <<"Enter a character (*. +@ -$ /\\ ) " <<endl;
    cin >> Op;
    switch (Op)
    {
    case '.':
    case '*':
        cout <<"num1 * num2 = " << num1 * num2 ;
        break;
    case'+':
    case'@':
        cout <<"num1 + num2 = " << num1 + num2 ;
        break;
    case '-':
    case '$':
        cout <<"num1 - num2 = " << num1 - num2 ;
        break ;
    case '/':
    case '\\':
        if(num2 != 0)
        cout <<"num1 / num2 = " << num1 / num2;
        else
            cout <<"Error cannot devide by zero" << endl;
        break;
    default:
        cout <<"Error enter a correct operator" <<endl;

    }

}
