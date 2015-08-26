#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int totalscore = 0;
    for (int i = 1; i < 334; i++){
        totalscore += 3*i;
    }
    for (int i = 1; i < 200; i++){
        if (5*i % 3 == 0)
            continue;
        totalscore += 5*i;
    }
    cout << totalscore;
    return 0;
}