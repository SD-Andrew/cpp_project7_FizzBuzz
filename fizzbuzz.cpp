//A program that outputs numbers from 1 to 100. 
//But for multiples of 3, print Fizz instead of the number
//For the multiples of 5, print Buzz
//For numbers which are multiples of both 3 and 5 print, FizzBuzz

#include <iostream>

int main () {

  for (int i = 1;i<=100;i++){
    
      int D3 = i % 3;
      int D5 = i % 5;
      
      if(D3 == 0 and D5 == 0){
        std::cout << "FizzBuzz\n";
      }
      else if(D3 == 0){
        std::cout << "Fizz\n";
      }
      else if(D5 == 0){
        std::cout << "Buzz\n";
      }
      else {
        std::cout << i << "\n";
      }
  }
}