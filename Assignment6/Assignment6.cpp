// Nusrath Ahmed
// Professor. Reid
// CS 241 - 001
// 05 - 15 - 2018
// Asiignment 6


#include <iostream>
#include <string>
using namespace std;

void Add2(int* A,int* B,int* R);
void Print(int* A);

int main() {
  int A[4], B[4], C[4];
  cout << "Enter the elements of matrix A\n";

for(int i = 0;i < 4;i += 1) {

  cin >> A[i];
}

  cout << "\nEnter the elements of matrix B\n";
for(int i = 0;i < 4;i += 1)
{
  cin >> B[i];
}
  cout << "\nThe product of\n";
  Print(A);

  cout << "\nand\n\n";
  Print(B);

  cout << "\nis\n\n";
  Add2(A,B,C);

  Print(C);

  return 0;
}

void Add2(int* A, int* B, int* R) {
  R[0] = A[0] + B[0];
  R[1] = A[1] + B[1];
  R[2] = A[2] + B[2];
  R[3] = A[3] + B[3];

}

void Print(int* A) {
  cout << "[" << A[0] << " " << A[1] << "]" << endl;
  cout << "[" << A[2] << " " << A[3] << "]" << endl;
}
