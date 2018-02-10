// CIS22A Assignment Lab1b
// Program: Display my height in inches and centimeters
// Name <Siddharth Buddharaju>

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int feet;
    int inches;
    int heightInches;
    cout << "What is your name: ";
    cin >> name;
    cout << "Tell me your height in feet and inches\n";
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    printf("%s, you are %d'%d\" tall\n", name.c_str(), feet, inches);
    printf("Your height in inches is %d inches\n", heightInches = 12*feet+inches);
    printf("Your height in centimers is %.2f\n",heightInches*2.54);
}