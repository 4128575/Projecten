#include <iostream>
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

int main()
{
    long long int number = 600851475143;
    int mylist[4] = {};
    int itera = 0;
    for (int i = 2; i < number; i++) {
        if (isprime (number) == 1) {
            mylist[itera] = number;
            itera++;
            break;
        }
        if (number % i == 0) {
            number = number / i;
            mylist[itera] = i;
            itera++;
        }
    }
    for (int k = 0; k < 4; k++) {
        cout << mylist[k] << endl;
    }
    return 0;
}