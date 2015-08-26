#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int squaresum = (101 * 50) * (101 * 50);
    int sumsquare = (100 * 101 * 201)/6;
    cout << squaresum - sumsquare << endl;
    return 0;
}