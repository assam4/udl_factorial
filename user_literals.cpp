#include <iostream>

constexpr unsigned long long arithmetic(unsigned long long n)     // calculation
{            if(n<0) throw "Wrong parametr" ;
      return (n <= 1) ? 1 : n * arithmetic(n - 1);   }

constexpr unsigned long long operator""_factorial(unsigned long long n)   // User defined Literal 
 {   return arithmetic(n);   }

int main() {
    int number = 10 ;

    constexpr unsigned long long result = 5_factorial;                 // equal to 120 
    std::cout << "Factorial :" << result << std::endl;
    

    return 0;
}
