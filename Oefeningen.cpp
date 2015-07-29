#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double low=0;
    double high=50000;
    
    double lowlim;
    cout << "Please enter a lower limit: ";
    cin >> lowlim;
    while (lowlim<low){
        cout << "Lower limit should be higher than " << low << ", give a new one: ";
        cin >> lowlim;
    }
    
    double highlim;
    cout << "Please enter a higher limit: ";
    cin >> highlim;
    while (highlim>high){
        cout << "Higher limit should be lower than " << high << ", give a new one: ";
        cin >> highlim;
    }
    while (highlim<lowlim){
        cout << "Higher limit should be higher than " << lowlim << ", give a new one: ";
        cin >> highlim;
    }
    
    double step;
    cout << "Please enter a step size: ";
    cin >> step;
    while (step<=0){
        cout << "Step size should be greater than 0, give a new one: ";
        cin >> step;
    }
    while (step>(highlim-lowlim)){
        cout << "Step size should be smaller than difference in temperature, " << highlim-lowlim << ", give a new one: ";
        cin >> step;
    }
    
    cout << "Celsius    |Fahrenheit \n---------------------- \n";
    int n=0;
    while (lowlim + n*step < highlim) {
        cout << lowlim + n*step << "         |" << (lowlim + n*step)*1.8 + 32 << "\n";
        ++n;
    }
    return 0;
}