#include <iostream>

using namespace std;

int add_list(){
    int sum = 0, value = 0;
    /* continues read to end of file 
        ctrl + z for win or input a wrong char
        ctrl + d for linux
    */
    while (cin >> value){
        sum += value;
    }
    cout << sum << endl;
    return 0;
}

int main(){

    add_list();
    return 0;
}
