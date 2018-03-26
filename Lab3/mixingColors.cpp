/*
CIS22A
Siddharth Buddharaju
Lab 3
Asks the user to enter in two primary colors
and displays the resulting secondary color
*/

#include<iostream>

using namespace std;
int main(){
    cout<<"Enter two primary colors: ";
    string primary;
    getline(cin, primary);
    transform(primary.begin(), primary.end(), primary.begin(), ::tolower);
    if(primary.find("red") != string::npos && primary.find("blue") != string::npos){
        cout << "purple" << endl;
    }
    else if(primary.find("red") != string::npos && primary.find("yellow") != string::npos){
        cout << "orange" << endl;
    }
    else if(primary.find("yellow") != string::npos && primary.find("blue") != string::npos){
        cout << "green" << endl;
    }
    else{
        cout << "Please enter 2 primary colors: red, blue, or yellow" << endl;
    }
}