#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){

    int i = 1;
    int tmp = 0;
    do{
        tmp = tmp + i;
        i++;
    } while (i <= 10);
    cout << "sum 1 to 10 is " << tmp << endl;
};