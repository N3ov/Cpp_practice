#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(void){

    int dec = 10;
    double flo = 1.96789;
    double do1 = 3.14159, do2 = 10e-10;

    cout << setw(6) << dec << endl; //空4格 10
    cout << setprecision(1) << flo << endl; //2
    cout << setprecision(9) << flo << endl; //1.96789
    cout << oct << dec << endl; // 12
    cout << hex << dec << endl; // a
    cout << scientific << do1 << endl; // 3.141590000e+00
    cout << scientific << do2 << endl; // 1.000000000e-09

system("pause");


}
