
#include <iostream>

using namespace std;

int sum(int n);

int main() {
  int n = 0;
  std::cout << "Give a number: ";
  std::cin >> n;
  cout << sum(n);
  return 0;
}

int sum(int n){

  int total = 0;
  for(int i =1; i <= n; i++)
    {
      total +=i;
    }
  return total;
}

