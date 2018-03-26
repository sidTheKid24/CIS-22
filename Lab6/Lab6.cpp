#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <array>

using namespace std;

int main(){
    // cout << "Enter the name of the file you want to write to: " << endl;
    // string filename;
    // cin >> filename;
    // ofstream output;
    string names[] = {"John", "Jane", "Bill", "Susan"};
    cout << sizeof(names)/sizeof((*names)) << endl;
    int examS[3][sizeof(names)/sizeof(*names)];  
    //for(int i = 0; i < sizeof(examS)/sizeof(examS))
    //cout << sizeof(examS)/sizeof(examS);
    cout << sizeof(*examS) << endl;
    cout << sizeof(**examS) << endl;
    cout << sizeof(examS) << endl;
    // output.open(filename);
    // if(output){

    // }
    // else{
    // 	cout << "Error opening the file" << endl;
    // }
}

/*
Name    Exam1   Exam2   Exam3

John      90.9        69.9        60.0

Jane       87.0        71.0        91.0

Bill          95.5        80.7        88.0

Susan    75.0        75.1        80.0

*/