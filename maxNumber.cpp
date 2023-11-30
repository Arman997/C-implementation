#include <iostream>

    void static maxNumber(int num1, int num2, int num3){
        int result = num1;
        if(result < num2){
            result = num2;
        }
        if (result < num3){
            result = num3;
        }
        std::cout << result;
    }

int main() {
    int num1;
    int num2;
    int num3;
    std::cout << "write your first number" << "\n";
    std::cin >> num1;
    std::cout << "write your second number" << "\n";
    std::cin >> num2;
    std::cout << "write your third number" << "\n";
    std::cin >> num3;
    
     maxNumber(num1, num2, num3);
    
    return 0;
}