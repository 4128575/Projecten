#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int palindrome = 1;
    for (int k = 100; k < 1000; k++) {
        for (int j = k; j < 1000; j++) {
			int prod = k*j;
			stringstream ss;
			ss << prod;
			string string = ss.str();
			int len = string.length();
			bool check = true;
			for (int h = 0; h < len/2.0; h++) {
			    if (string[h] != string[len-1-h]) {
			        check = false;
			        break;
			    }
			}
			if (palindrome <= prod && check) {
			    palindrome = prod;
			}
        }
    }
    cout << palindrome << endl;
}