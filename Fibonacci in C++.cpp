#include <iostream>

int main() {
    int inp;
    std::cout << "write your number to create fibonacci" << "\n"; 
    std::cin >> inp;
    int first = 0;
    int second = 1;
    int res;
    if(!inp || inp == 1)
        res = inp;
    else
        res = first + second;
    for(int i = 1; i < inp; ++i)
    {
        res = first + second;
        first = second;
        second = res;
    }
    std::cout << "res: " << res << "\n";
    
}