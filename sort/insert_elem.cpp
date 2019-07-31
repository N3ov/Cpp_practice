#include <stdio.h>
#include <iostream>


using namespace std;

int insert(int a[], int length, int value){
    int j;
    // cout << length << endl;
    for (j = length - 1; j >= 0 && value < a[j]; j--){
        a[j + 1] = a[j];
        // cout << value << endl;
    }
    a[j + 1] = value;

    for (int k = 0; k <= length; k++){
        cout << a[k] << endl;
    }
    return 0;
}

int main(int argc, char** argv){
    
    int a[4] = {3, 6, 9, 14};
    insert(a, sizeof(a)/sizeof(int), 16);
}
