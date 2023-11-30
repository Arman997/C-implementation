#include <iostream>
#include <cstring>

    std::string toLoverCase(std::string inp, int size){
        for(int i = 0; i < size; i++){
                
                if(inp[i] >= 'A' && inp[i] <= 'Z'){
                        
                        inp[i]+= 32;
                }
                
        }
        return inp;
    }

int main() {
    
        std::string arr;
        std::cout << "write your suggestions" << "\n";
        std::getline(std::cin, arr);
        int size = arr.length();
        std::string res = toLoverCase(arr, size);
        
        char vowel[] = {'a','e','i','o','u'};
        int size1 = sizeof(vowel) / sizeof(vowel[0]);
        int counter = 0;
        
        for(int i = 0; i < size; i++){
            
            for(int j = 0; j < size1; j++){
                    if(res[i] == vowel[j]){
                        counter++;
                    }   
            }
            
        }
        
        
        std::cout << counter << "\n";
        
    
}