// CIS22A
// Siddharth Buddharaju
// Lab 2
//

#include<iostream>
#include<cmath>
#include <math.h>
using namespace std;

int main(){
    int diameter;
    cout << "What is the diameter of the pizza? ";
    cin >> diameter;
    double area = pow((diameter/2), 2) * M_PI;
    int slices = area/14.8;
    printf("There are %d whole slices in this pizza\n", slices);
}