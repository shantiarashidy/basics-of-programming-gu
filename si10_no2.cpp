#include <iostream>

using namespace std;
/*A professor gives five quizzes to a class of 30 students during the semester.
 A program needs to print the average scores of each student and each quiz. */

int main() {
    int NUM_STUDENTS = 5;
    int NUM_QUIZZES = 3;

    double scores[NUM_STUDENTS][NUM_QUIZZES];

    cout << "Enter the scores for each student and each quiz:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ": " <<endl;
        for (int j = 0; j < NUM_QUIZZES; j++) {
            cin >> scores[i][j];
        }
    }

    cout << "\nAverage scores for each student:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        double sum = 0;
        for (int j = 0; j < NUM_QUIZZES; j++) {
            sum += scores[i][j];
        }
        double average = sum / NUM_QUIZZES;
        cout << "Student " << i + 1 << ": " << average << endl;
    }


    cout << "\nAverage scores for each quiz:" << endl;
    for (int j = 0; j < NUM_QUIZZES; j++) {
        double sum = 0;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            sum += scores[i][j];
        }
        double average = sum / NUM_STUDENTS;
        cout << "Quiz " << j + 1 << ": " << average << endl;
    }

    return 0;
}
