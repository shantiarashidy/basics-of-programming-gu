#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num = 3;
  string S[num];

  for ( int i = 0 ; i < num ; i++)
    getline(cin , S[i]);
  for ( int i = 0 ; i < num ; i++)
    cout << S[i] << " : " << S[i].size();
}
