// Nusrath Ahmed
// Professor. Reid
// CS 241
// 04 - 17 - 18
// Assignment 4 Number 4

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int Phi(int);

int main()
{
  fstream out;
  out.open("data.txt", fstream::out);

  for(int i = 1; i <= 100; i += 1)
  {
    out << setw(3) << setfill('0');
    out << "phi(" << i << ") = " << Phi(i) << "\n";
  }
  out.close();
  return 0;
}

int Phi(int n)
{
  int count = 0;
  for(int i = 1; i < n; i++)
  {
    bool isPrime = true;
    for(int x = 2; x * x <= i; x++)
    {
      if(i % x == 0)
      {
        isPrime = false;
        break;
      }
    }
    if(isPrime)
    {
      count++;
    }
  }
 return count;
}
