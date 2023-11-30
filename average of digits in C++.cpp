#include <iostream>

int main() {
    
   int arr[] = {10,20,30,40,50};
   float result;
   int size = sizeof(arr) / sizeof(int);
   
   for(int i = 0; i < size; i++){
        
        result = result + arr[i];
        
   }
    result = result / size;
    std::cout << result;
   
}