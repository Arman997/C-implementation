#include <iostream>

int main() {
   
   int inp; 
   std:: cout << "write the number" << "\n";
   std:: cin >> inp;
    int result;
    
   
   for(int i = 1; i < inp; i++){
        
       if(i % 3 == 0){
           result = result + i;
           std:: cout << "i % 3 result: " << result << "\n";
       }
      if(i % 5 == 0){
           
          result = result + i;
            std:: cout << "i % 5 result: " <<result << "\n";

      }
        
   }
  
    std::cout << result;
   
}