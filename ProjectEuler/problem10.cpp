#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    long long int sum = 0;
    const int limiet = 2000000;
    vector<int>templist(limiet ,0);
    vector<int>primelist(limiet/4 ,0);
    for (int i = 2; i <= (limiet + 1)/2; i++) {
        for (int k = 2; k <= (limiet/i); k++) {
            templist[k*i-1] = 1;
        }
    }
    int counter = 0;
    for (int j = 2; j < limiet; j++) {
        if (templist[j-1] == 0) {
            primelist[counter] = j;
            counter++;
        }
    }
    for (int k = 0; k < (limiet/4); k++) {
        sum = sum + primelist[k];
        }
    cout << sum << endl;
    return 0;
}