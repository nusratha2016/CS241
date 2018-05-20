#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int stringCount(string& word) {
  return word.length();
}

bool Char(char letter, string &word) {
  for(int i = 0; i < word.length(); i++) {
    if(letter == word(i)) {
      return 1;
    }
  }

  return 0;
}

string isThere(string &word, string &arrWord) {
  int count = 0;
  for(int i = 0; i <= word.length(); i++) {
    if(Char(arraword[i], word)) {
      count++;
    }

    if(count >= arrWord.length()) {
      return arrWord;
    }
  }

  return "";
}

void word(string &word) {
  // vector <string> paraseWord;

  ifstream dictFile;
  ofstream ofile;

  dictFile.open("wordlist.txt");
  ofile.open("outputfile.txt");

  if(ofile.is_open()) {
    if(dictFile.is.open()) {
      while(getline(dictFile, row)) {
        if(isThere(word, row) != "") {
          cout << isThere(word, row) << endl;
          ofile << isThere(word, row) << endl;
        }
      }
    }
  }

  ofile.close();
  dictFile.close();
}

#endif      // FUNCTION_H
