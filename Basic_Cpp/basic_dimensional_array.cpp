#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    int arr[3][5];
    int n, m;
    for (n =0; n < 3; n++){
        for (m = 0; m < 5; m++){
            arr[n][m] = (n + 1) * (m + 1);
            cout << arr[n][m] << endl;
        };
    };
};