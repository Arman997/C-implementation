#include <iostream>

int main() {
    
   int arr[] = {100, 1, 500, -5, 12, 555, 1997, 2022, 1861, -3000, 111};
   int result = arr[0];
   int size = sizeof(arr) / sizeof(arr[0]);
   for(int i = 0; i <= size; i++){
        
        if(result < arr[i]){
            result = arr[i];
        }
        
   }
   
    std::cout << result;
   
}