#include <iostream>

    void static celsiusInFahrenheit(float cel){
        
        float fahrenheit = (cel * 9/5)+32;    
        std:: cout <<  fahrenheit;
            
    }

int main() {
    float* cel = new float;
    std::cout << "write degrees Celsius to convert to Fahrenheit" << "\n";
    std::cin >> *cel;
    
    celsiusInFahrenheit(*cel);
    
    return 0;
}