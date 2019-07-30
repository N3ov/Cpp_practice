#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    float a;
    float IntFix[7];
    a = 0.01;
    IntFix[0] = a;
    IntFix[1] = a + IntFix[0];
    
    cin >> IntFix[2];
    cout << IntFix[1] << endl; // 0.02
    cout << IntFix[2] << endl; // memory data is empty
}