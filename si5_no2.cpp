#include <iostream>
using namespace std;
int main()
{
    int Cost , Max = 0 , month , j ;
    for(month = 1 ; month < 12 ; month++ )
    {
        cout <<"Enter monthly cost of your household" <<endl;
        cin >> Cost ;
        if(Cost > Max)
        {
            j = month;
            Max = Cost ;
        }
    }
    cout <<"Max = "  << Max  <<"  " << j <<endl;

}
