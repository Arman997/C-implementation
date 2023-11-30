#include <iostream>

int main() {
   
   int inp; 
   std:: cout << "write the number" << "\n";
   std:: cin >> inp;
    int result;
    
   
   for(int i = 1; i <= inp; i++){
        
     result = result + i;
        
   }
  
    std::cout << result;
   
}