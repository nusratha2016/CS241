#include <iostream>
#include <string>

void word(std::string&w, int len) {
  int i, posi = w.length() - len;
  char temp = w[posi];
  for(i = posi + 1; i < w.length(); i++)
    w[i - 1] = w[i];
  w[i - 1] = temp;
}

void scramble(std::string&w, int len) {
  if(len != 1) {
    for(int i = 0; i < len; i++) {
      scramble(w, len - 1);
      if(len == 2)
        std::cout << s << std::endl;
      word(w, len);
    }
  }
}

int main() {
  std::string word;
  std::cout << "Enter a word that less than 26 letters: " << std::flush;
  std::getline(std::cin, word);
  scramble(word, word.length());
  return 0;
}
