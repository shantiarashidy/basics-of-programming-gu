#include <iostream>
using namespace std;
/*r input a students scores plus numbers of courses they have passed
this code should print:
1. students avg
2. number of courses above avg
3. max and min courses */
int main()
{
    float g[30] , sum = 0 , Avg , Max = 0 , Min = 100;
    int k , sumk = 0 , n , i , x = 0;

    cout<<"Enter number of courses: " <<endl;
    cin >> n ;

    for(i = 0 ; i < n ; i++){
        cout<<"Enter your grades and number of each course : " <<endl;
        cin >> g[i] >> k;

        sum  += g[i]*k;
        sumk += k;

        if(Max < g[i]) Max = g[i];
        if(Min > g[i]) Min = g[i];

    }

    Avg = sum/sumk;
    for(i = 0 ; i < n ; i++)
        if(Avg <= g[i]) x++;
    cout<<"Max : " <<Max <<"\t" <<"Min : " <<Min;
    cout<<endl <<x;
    cout<<endl <<Avg;
}
