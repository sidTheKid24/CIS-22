#include<iostream>
#include<string>

using namespace std;

int main()
{
    int num;
    string range;
    cout << "Enter a range of years(ex: 2002-2003): ";
    cin >> range;
    int yearS = stoi(range.substr(0,4));
    int yearE = stoi(range.substr(5,9));
    if(yearS >= 1900 && yearE <= 2099 && yearS < yearE){
       for(int year = yearS; year <= yearE; year++){
           if (year % 4 == 0){
               if (year % 100 == 0){
                    if (year % 400 == 0){
                       num++;
                    }
                    else{
                        //cout << year << " is not a leap year.";
                    }     
                }
                else{
                    //cout << year << " is a leap year.";
                    num++;
                } 
            }
            else{
                //cout << year << " is not a leap year.";
            }
        }
        cout << num << endl; 
    }
    else{
        cout << "Enter a range of any two years from 1900 to 2099" << endl;
    }
    return 0;
}