// CIS22A
// Siddharth Buddharaju
// Lab 2
//

#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
const double sliceArea = 14.8;

int main(){
    int diameter;
    int numPeople;

    cout << "What is the diameter of the pizza? ";
    cin >> diameter;
    if(cin.fail()){
        cout << "Please enter an a postive number\n";
        return 0;
    }
    cout << "How many people are there at the party? ";
    cin >> numPeople;
     if(cin.fail()){
        cout << "Please enter a postive integer\n";
        return 0;
    }
    double area = pow((diameter/2), 2) * M_PI;
    int numPizzas = ceil(numPeople*4*sliceArea/area);
    printf("You need at least %d pizzas\n", numPizzas);
    int leftOver = floor((numPizzas*area - numPeople*4*sliceArea)/sliceArea);
    printf("There are %d left over slices\n", leftOver);
    if(diameter == 16.0){
        printf("The cost of the pizza party is $%d\n", numPizzas*22);
    }
}