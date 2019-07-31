#include <iostream>

using namespace std;

int add(){
    /* 50 plus to 100 = 3825 */
    int i = 50;
    int sum = 0;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    cout << sum << endl; // 3825
}

int inus(){
    /* print 10 to 0 */
    int i = 10;
    while (i >= 0)
    {
        cout << i;
        i--;
    }
}

int command(){
    /* cout all number in input two number */
    int a,b;
    cout << "input two integer" << endl;
    cin >> a >> b;

    if (a > b){
        a ^ b;
        b ^ a;
        a ^ b;
    }

    for (int i = a ; i <= b; i++){
        cout << i;
    }
}


int main(){
    add();
    inus();
    command();
}