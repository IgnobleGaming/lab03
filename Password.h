#if !defined PASSWORD_H
#define PASSWORD_H
#include "CSC2110/Text.h"
#include "CSC2110/ListArray.h"
#include "CSC2110/ListArrayIterator.h"
#include <iostream>
//complete the includes

using namespace CSC2110;

class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length
	  
	  
      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);
   public:
		Password(); //Constructor
		~Password(); //Destructor
		void addWord(String* word); //Adds a word to viable_words
		void guess(int try_password, int num_matches); //Recompiles viable_words depending on how many matches there are
		int getNumberOfPasswordsLeft(); //Returns the size of viable_words
		void displayViableWords();  //Prints the viable_words list to screen
		int bestGuess();  //Function that determines the best option to solve the puzzle
		String* getOriginalWord(int index); //Gets a word from all_words from given index
};

#endif