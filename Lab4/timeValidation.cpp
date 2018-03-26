#include<fstream>
#include<iostream>
#include<string>
using namespace std;

bool validateHour(int h){
    if(h <= 24){
        return true;
    }
    else{
        return false;
    }
}

bool validateMinutes(int m){
    if(m <= 60){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    ifstream timeData;
    ofstream validate;
    timeData.open("timeData.txt");
    validate.open("timeValidation.txt");
    string line;
    bool hr;
    bool min;
    while(getline(timeData, line)){
        hr = validateHour(stoi(line.substr(0,2)));
        min = validateMinutes(stoi(line.substr(3,5)));
        validate << line << " ";
        if(hr){
            validate << "hours is valid and ";
        }
        else{
            validate << "hours is invalid and ";
        }
        if(min){
            validate << "minutes is valid" << endl;
        }
        else{
            validate << "minutes is invalid" << endl;
        }
    }
    return EXIT_SUCCESS;
}