#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int somvan (int a)
{
    int som = 1;
    for (int j = 2; j <= a; j++) {
        som = som + j;
    }
    return som;
}

int main(){
    const int limiet = 12400;
    vector<int>trianglelist(limiet ,0);
    for (int k = 0; k < limiet; k++) {
        trianglelist[k] = somvan (k + 1);
    }
    for (int k = 0; k < limiet; k++) {
        int track = 0;
        for (int j = 1; j < sqrt(trianglelist[k]); j++) {
            if (trianglelist[k] % j == 0) {
                track++;
            }
        }
        if (track > 250) {
            cout << trianglelist[k] << endl;
            break;
        }
    }
    return 0;
}