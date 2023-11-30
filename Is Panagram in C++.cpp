#include <iostream>
#include <string>
#include <cstring>


bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z');
}

    std::string toLoverCase (std::string inpu, int size){
        
        for(int i = 0; i < size; i++){
            if(inpu[i] >= 'A' && inpu[i] <= 'Z'){
                
                inpu[i]+=32;

            }
        }
        return inpu;
        
    }

int main() {
    
    const std::string inp = "The quick brown fox jumps over the lazy dog";
    int counter = 0;
    char arr[256] = {0};
    int size = inp.length();
    std::string res = toLoverCase(inp, size);
        for(int i = 0; i < size; i++){
           
           if (!arr[res[i]]  && isAlpha(res[i]))
           {
               counter++;
               arr[res[i]] = 1;
           }
       }  
    
       if(counter == 26)
           std::cout << "it is Panagram" << "\n";
             else{
                 std::cout << "it is not Panagram" << "\n";
             }

    
}
