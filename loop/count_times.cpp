#include <iostream>

int cout_num(){
    int currVal = 0, val = 0;
    // read the first number
    if (std::cin >> currVal){
        int count = 1;
        while (std::cin >> val){
            if (val == currVal){
                ++count;
            }
            else{
                std::cout << currVal << "occurs" << count << std::endl;
                currVal = val;
                count = 1;
            }
        }

        std::cout << currVal << "occurs" << count << std::endl;
    }
    return 0;
}

int main(){
    cout_num();
}