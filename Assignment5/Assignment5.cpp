#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void perm3();

int main(){
  perm3();
}
void perm3(){
  int count = 0, counter = 0;
  ofstream ofile;
  ofile.open("data.txt");
  string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int len = str.length();
  for(int i=0; i< len; i++){
    for(int j=0; j< len; j++){
      for(int k=0; k< len; k++){
        if(str[i] == str[j] || str[i] == str[k] || str[j] == str[k])
          continue;
          if(ofile.is_open()){

//           cout<<str[i]<<str[j]<<str[k]<<"\n";
          ofile<<str[i]<<str[j]<<str[k]<<"\n";
          count++;
          counter++;
      }
    }
  }
//   cout<<counter;
  }
  ofile.close();
}
