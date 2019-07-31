#include <stdio.h>
#include <iostream>

using namespace std;
// int func before main()
int add(int num1, int num2){
    int a;
    a = num1 +num2;
    return a; 
}

void add(){

    cout << "a test func" << endl;

}

int main(int argc, char** argv){

    int a = 6;
    int b = 5;

    cout << add(a, b) << endl;
}

