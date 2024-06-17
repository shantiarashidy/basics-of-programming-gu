#include <iostream>
#include <string>

using namespace std;

int main() {
    system("color 3");
    int num = 10;
    string names[num];
    int scores[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter name of student " << i + 1 << ": ";

        getline(cin >> ws ,  names[i]);

        cout << "Enter score of student " << i + 1 << ": ";
        cin >> scores[i];
    }

    int maxscore = scores[0];
    int maxindex = 0;

    for (int i = 1; i < num; i++) {
        if (scores[i] > maxscore) {
            maxscore = scores[i];
            maxindex = i;
        }
    }

    cout << "Maximum score: " << maxscore << " by " << names[maxindex] << endl;

    return 0;
}
