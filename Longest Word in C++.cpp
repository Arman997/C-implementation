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
    const int MAX_SIZE = 20;    
    int num[MAX_SIZE] = {};
    int j = 0;
    int counter = 0;
    
    for(int i = 0; i <= size; i++)
    {
        
        if(res[i] >= 'a' && res[i]<= 'z'){
                
                counter++;
                //  std::cout << "counter in if(1) cikle: "<< counter <<  "\n";
        }
        else if(res[i] == ' '){
        //   std::cout << "counter in if(2) cikle: "<< counter <<  "\n";
            num[j] = counter;
            j++;
            counter=0;
        }
        else if(i == size){
        //   std::cout << "counter in if(3) cikle: "<< counter <<  "\n";
            num[j] = counter;
            j++;
        }
        
        
    }   
        int max = 0;
        int size1 = sizeof(num) / sizeof(num[0]);
        for (int i = 0; i < size1; i++){
            
                if(num[i] > max){
                    max = num[i];
                }
                std::cout << "num in max cikle: " << num[i] << "\n";

        }
        
        std::cout << "your Long Word: " << max << "\n";
}