#include<fstream>
#include<iostream>

using namespace std;

int main(){
    ofstream amounts;
    double amount = .01;
    amounts.open("moneyDouble.txt");
    for(int i = 1; i <= 30; i++){
        amount *= 2;
        amounts << "Day " << i << " = $" << amount << endl;
    }
}