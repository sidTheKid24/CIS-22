#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <array>
#include<iomanip>

using namespace std;

int main(){
    cout << "Enter the name of the file you want to write to: " << endl;
    string filename;
    cin >> filename;
    ofstream output;
    output.open(filename);
    cout << "Enter the number of students: ";
    int numStudents;
    cin >> numStudents;
    int numTests;
    cout << "Enter the number of tests: ";
    cin >> numTests;
    string names[numStudents];
    double scores[numStudents][numTests];
    
    for(int i = 0; i < numStudents; i++){
        cout << "Enter the name of a student: ";
        cin >> names[i];
        cout << "Now enter the test scores of this student for each exam:" << endl;
        for(int j = 0; j < numTests; j++){
            cin >> scores[i][j];
        }
    }
    
    cout << "Do you want to change an exam score?(Y/N): ";
    char option;
    cin >> option;
    if(option == 'Y'){
        int num;
        cout << "Enter the number of the exam you want to change: ";
        cin >> num;
        if(num <= numTests){
            double increase;
            cout << "Enter the percent increase you want(ex: .12): ";
            cin >> increase;
            for(int i = 0; i < numStudents; i++){
                scores[i][num - 1] += scores[i][num - 1]*increase;
            }
        }
        else{
            cout << "Test number entered is not valid, no changes made";
        }
    }

    output << left << fixed << setprecision(1)
         << setw(16) << "Name"
         << setw(8) << "Exam1"
         << setw(8) << "Exam2"
         << setw(8) << "Exam3" 
         << setw(16) << "Total of Scores" 
         << setw(16) << "Average of Scores" << endl << endl;
    for(int i = 0; i < numStudents; i++){
        double total = 0;
        output << setw(16) << names[i];
        for(int j = 0; j < numTests; j++){
            output << setw(8) << scores[i][j];
            total += scores[i][j];
        }
        output << setw(16) << total
             << setw(16) << total/numTests
             << endl << endl;
    }
}