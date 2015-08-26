#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int number = 2519;
    int check = 0;
    while (check != 19) {
        check = 0;
        number++;
        for (int k = 2; k <= 20; k++) {
            if (number % k == 0) {
                check++;
            }
            else {
                break;
            }
        }
    }
    cout << number << endl;
}