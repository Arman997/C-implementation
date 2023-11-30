#include <iostream>

char* strmove(char* string, int n, int size){
    
    char buff[size - n];
    for(int i = 0; i < size - n; ++i)
        buff[i] = string[i];
    int j = size - n;
    for(int i = 0; i < size - n; ++i)
    {
        string[i] = string[j];
        ++j;
    }
    j = -1;
    for(int i = size - n - 1; i < size; ++i)
        string[i] = buff[++j];
    return string;
}

int main() {
    
    char arr[] = "Hello";
    char* word = arr;
    int x = 2;
    int size = sizeof(arr) - 1;
    char* res = strmove(word, x, size);
    std::cout << res <<std::endl;
}

