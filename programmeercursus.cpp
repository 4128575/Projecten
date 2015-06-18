#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Hoe oud ben je?" << endl;
    int leeftijd;
    cin >> leeftijd;
    if(leeftijd==20){
        cout << "Je bent " << leeftijd << endl;
    } else {
        cout << "Je bent niet 20." << endl;
    }
}