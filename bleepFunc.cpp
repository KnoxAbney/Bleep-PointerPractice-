#include <string>
#include <iostream>

std::string bleep(std::string banned, std::string &text){

int match = 0;

  for(int i = 0; i < text.size(); i++){

    // check if the current letter matches the banned word or phrase.
    if(text[i] == banned[match]){
      match++;
    }else{
      match = 0;
      continue;
    }
    // (for bug testing)std::cout << i << ", " << match << "\n";

    // replaces banned word with asterisks.
    if(match == banned.size()){
    for(match > 0; match--;){
      text[i-match]='*';
      }
    }

  }

  return text;
  

};
