#include <iostream>
#include <cstdlib>

using namespace std;

int whileloop(){

    int i = 1;
    int tmp = 0;
    do{
        tmp = tmp + i;
        i++;
    } while (i <= 10);
    cout << "sum 1 to 10 is " << tmp << endl;
};

int whileloop_(){
    int value = 1;
    int sum = 0;
    while(value <= 10){
        sum += value;
        ++value;
    }
    cout << "sum 1 to 10 is " << sum << endl;

}

int main(){
    whileloop();
    whileloop_();
}