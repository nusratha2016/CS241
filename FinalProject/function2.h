#ifndef FUNCTION2_H
#define FUNCTION2_H

void First(string& word, string& word2) {
  string temp;
  if(word.length()>word2.length()) {
    temp = word;
    word = word2;
    word2 = temp;
  }
}

string Compare(string& word, string& word2) {
  stringstream ss;
  First(word, word2);
  for(int i = 0; i < word.length(); i++) {
    if(word.at(i) == (word2.at(i)))
    continue;
  else if(word.at(i) < word2.at(i)) {
    ss << word << "\n" << word2 << "\n";
    return ss.str();
  }

  else if(word.at(i) > word2.at(i)) {
    ss << word2 << "\n" << word << "\n";
    return ss.str();
  }
}

  ss << word << "\n" << word2 << "\n";
  return ss.str();
}

#endif       // FUNCTION2_H
