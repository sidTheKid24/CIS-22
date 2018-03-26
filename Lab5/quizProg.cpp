#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ifstream questions;
    ifstream answers;
    ofstream results;

    questions.open("questions.txt");
    answers.open("answers.txt");
    results.open("results.txt");

    char correct;
    int numCorrect = 0;
    int numWrong = 0;

    bool finished = false;
    while(!finished){
        string q;
        char a;
        bool valid = false;
        getline(questions, q);
        cout << q << endl;
        while(!valid){
            cin >> a;
            a = toupper(a);
            if(a == 'A' || a == 'B' || a == 'C' || a == 'D'){
                valid = true;
                results << a << endl;
                answers >> correct;
                if(a == correct){
                    numCorrect++;
                }
                else{
                    numWrong++;
                }
            }
            else{
                cout << "Enter a valid option(A, B, C, D)" << endl;
            }
        }
        if (questions.eof()){
            finished = true;
        }
    }
    results << numWrong << " wrong answers" << endl; 
}