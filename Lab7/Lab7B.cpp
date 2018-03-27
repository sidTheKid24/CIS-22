#include <iostream>

using namespace std;

int main(){
    int lottaryno[]= {13579, 26791,26792,33445,55555,62483,77777 ,79422, 85647,93121};
    int len = 10;
    cout << "Enter this weeks winning 5-digit number: ";
    int numW;
    cin >> numW;
    bool won = false;
    for(int i = 0; i < len; i++){
        if(numW == lottaryno[i]){
            cout << "Congrats " << lottaryno[i] << " is the winning number and you won this week!";
            won = true;
        }
    }
    if(!won){
        cout << "You did not win this week :(";
    }
}

