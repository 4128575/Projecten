#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int isprime (int a)
{
    for (int j = 2; j <= a; j++) {
        if (a % j == 0) {
            if (j != a) {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
}

int main(){
    int counter = 0;
    int number = 1;
    while (counter < 10001) {
        number++;
        if (isprime (number) == 1) {
            counter++;
        }
    }
    cout << number << endl;
}