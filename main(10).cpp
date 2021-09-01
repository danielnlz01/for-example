#include <iostream>

using namespace std;

double balance, interestRate;
int years;

int main() 
{
  
  cout << "balance? ";
  cin >> balance;
  
  cout << "interest rate? ";
  cin >> interestRate;
  
  cout << "years? ";
  cin >> years;
  
  for (int i = 0; i < years; i++)
  {
  	balance *= (1 + interestRate / 100);
  }
  
  cout << "final balance $" << balance << endl;
  
  return 0;
}