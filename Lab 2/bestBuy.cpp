// CIS22A
// Siddharth Buddharaju
// Lab 2
//

#include<iostream>
#include<cmath>
#include <math.h>

using namespace std;
int main(){
    double costs [4] = {15.99, 19.99, 21.99, 24.99};
    int diameters[4] = {10, 12, 14, 16};
    // double perUnit[4];
    double min;
    int minP;
    for(int i = 0; i < 4; i++){
        if(i == 0){
            min = costs[i]/(pow((diameters[i]/2),2)*M_PI);
            minP = diameters[i];
        }
        else if(costs[i]/(pow((diameters[i]/2),2)*M_PI) < min){
           min = costs[i]/(pow((diameters[i]/2),2)*M_PI);
           minP = diameters[i];
        }   
    }
    printf("The pizza with the lowest price per square inch is the %d inch pizza\nit costs %f per square inch\n", minP, min);
}