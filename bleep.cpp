#include <iostream>
#include <string>
#include "bleepFunc.hpp"

int main(){

//banned word and sample text it is being 
std::string brocc = "broccoli";
std::string sample = "This broccoli is amazing, dude. We need to go get some more broccoli. There is for sure nothing better than some well-cooked broccoli in this world. Especially in some cheese. It's the best, that broccoli. Did I make a \"b\" detector that's broken? Let's find out while I snack on some broccoli.";

// pass bleep function on the text using the sample banned word, broccoli.
bleep(brocc, sample);


// output the text after bleeping.
std::cout << sample;

}
