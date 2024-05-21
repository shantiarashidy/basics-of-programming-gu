#include <iostream>

using namespace std;

int main()
{
    int num_month;

    cout <<"Enter number of the months : " <<endl;
    cin >> num_month;

    double Akbarys_Expenses[num_month];
    double Hosseiny_Expenses[num_month];

    cout <<"Enter monthly Expenses of Akbarys Family: " <<endl;
    for(int i = 0 ; i < num_month ; i++){
        system("cls");
        cout << "Month " << i + 1 << ": ";
        cin >> Akbarys_Expenses[i];
    }
    cout <<"Enter monthly Expenses of Hosseinys Family: "<<endl;
    for(int i = 0 ; i < num_month ; i++){
         system("cls");
        cout << "Month " << i + 1 << ": ";
        cin >> Hosseiny_Expenses[i];
    }
    double Akbary_Avrage = 0;
    double Hosseiny_Avrage = 0;
     for (int i = 0; i < num_month; i++) {
        Akbary_Avrage += Akbarys_Expenses[i];
        Hosseiny_Avrage += Hosseiny_Expenses[i];
    }
    cout << "Average expense for Akbary family: "   << Akbary_Avrage << endl;
    cout << "Average expense for Hosseiny family: " << Hosseiny_Avrage << endl;

     cout << "\nMonthly expense differences:\n";
    for (int i = 0; i < num_month; i++) {
        double difference = Akbarys_Expenses[i] - Hosseiny_Expenses[i];
        cout << "Month " << i + 1 << ": " << difference << " ";

        if (difference > 0) {
            cout << "(Akbary spent more)";
        } else if (difference < 0) {
            cout << "(Hosseiny spent more)";
        } else {
            cout << "(Both spent the same)";
        }

        cout << endl;
    }
}

