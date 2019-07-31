#include <iostream>

using namespace std;

int sum(){
    /* ++i -> 1+ val
       i++ -> val = val +1 
    1.12
     */
    int sum = 0;
    for (int i =-100; i <= 100; ++i){
        sum += i;
    } 
    cout << sum << endl;

    int sum1 = 0;
    for (int i =-100; i <= 100; i++){
        sum1 += i;
    } 
    cout << sum1 << endl;
    return 0;
}

int _add(){
    /*1-13 */
    int sum = 0;
    for (int i = 50; i <= 100; i++)
        sum += i;     
    cout << sum << endl;

    for (int j = 10; j >= 0; j--)
        cout << j;
    return 0;
}

int main(){

    sum();
    _add();
    return 0;
}