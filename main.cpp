
#include <iostream>

using namespace std;

int sum(int n);
int multiply(int n);

int main() {
  int n = 0;
  std::cout << "Give a number: ";
  std::cin >> n;
  std::cout << sum(n);
  std::cout << multiply(n) << std::endl; 
  return 0;
}

int multiply(int n){

  int total = 0;
  for(int i = 1; i <n; i++){
    total+= (i*(i+1));
  }
      return total; 
}

int sum(int n){

  int total = 0;
  for(int i =1; i <= n; i++)
    {
      total +=i;
    }
  return total;
}

