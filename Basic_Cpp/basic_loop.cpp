#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    int sum = 0;
    for(int i = 1; i <= 9; i++){

        for (int j = 1; j <= 9; j++){
            cout << i << " * " << j << "=" << i*j << endl;
            sum = sum + 1;
        };
    };
    cout << sum << endl;

};