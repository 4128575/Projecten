#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int total = 0;
    int a = 1;
    int b = 2;
    int limit = 4000000;
    while (a <= limit && b <= limit) {
        if (a > b) {
            b = a + b;
            if (a % 2 ==0)
                total += a;
            }
        else {
            a = b + a;
            if (b % 2 == 0)
                total += b;}
    }
    cout << total;
    return 0;
}