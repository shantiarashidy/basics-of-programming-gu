#include <iostream>

using namespace std;

//write a function that gets a two dementional array and set below treeangle part to zero

void Matrix(int matrix[][3] , int R )
{
    for ( int r = 0 ; r < R ; r++)
        for (int c ; c < r ; c++)
            matrix[r][c] = 0 ;
}

int main()
{
    int MyData[3][3];

    for( int i = 0 ; i < 3 ; i++)
        for (int j = 0 ; j < 3 ; j++)
        cin >> MyData[i][j];

    Matrix(MyData , 3);
    for (int i = 0 ; i < 3 ; i++)
        for ( int j = 0 ; j < 3 ; j++){
        cout << MyData[i][j] <<"\t";

    }
    cout <<"\n";
}
