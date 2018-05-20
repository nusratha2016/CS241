#include <iostream>
#include <string>

int Count(string&);
bool Char(char letter, string &word);
string isThere(string &, string&);
void word(string&);
string Compare(string&, string&);
void First(string&, string&);

int main() {
  string word;
  do{
    cout << "Enter a word that less than 26 letters: ";
    cin >> word;
  }while(Count(word) > 26);
    word(word);

   return 0;
}
