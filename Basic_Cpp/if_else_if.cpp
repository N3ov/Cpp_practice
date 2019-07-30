#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
    int score;
    cout << "score input" << endl;
    cin >> score;

if(score >= 80)
    cout << score << " is A \n";

else if (score >= 70)
    cout << score << " is B \n";

else if (score >= 60)
    cout << score << "is C \n";    

else
    cout << "failed \n";
}