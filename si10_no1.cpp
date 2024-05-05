#include <iostream>

using namespace std;
/*write a program that inputs a 4*4 matrix from user and
prints main diagonal and then prints sub-diagonal*/
int main()
{
    int Size = 4;
    int Matrix[Size][Size];

    cout <<"Enter " <<Size * Size <<" numbers for your matrix: "  <<endl;
    for(int i = 0 ; i < Size ; i++){
       for (int j = 0 ; j < Size ; j++)
            cin >> Matrix[i][j];
    }
     cout << "Main diagonal: ";
    for (int i = 0; i < Size; i++) {
        cout << Matrix[i][i] << " ";
    }
    cout << endl;


    cout << "Sub-diagonal: ";
    for (int i = 0; i < Size; i++) {
        cout << Matrix[i][Size - 1 - i] << " ";
    }
    cout << endl;
}
