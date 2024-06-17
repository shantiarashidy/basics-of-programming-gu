#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("color 5b");
    string s1 , s2 ;
    getline ( cin , s1);
    getline ( cin , s2);

    s1 = s1 + s2;
    cout << s1;
}
