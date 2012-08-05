#include <stdio.h>

/*
CheckUnique - this code determines if a string has all unique characters
*/

// storage here is 256 * 1 byte = 256 bytes 
bool seen[256] = { false };


// function: isUnique()
// returns true if a string has all unique characters
// returns false as soon as the first duplicate character is found
// param:  pointer to the first character in the word
// time complexity is O(n)

bool isUnique(char* s){

  // step through the word, character by character...
  while( *s ){
    if(!seen[((int) *s)] ){
      
      // flip the bit - we've now seen this character
      seen[(int) *s]=true;
      
      // increment to next character
      *s++;
    }
    else return false;
  }
  
  // traversed through entire string, and no duplicates were found
  return true; 
}


// main() will function as our test driver
int main(){

  char* word1 = "abcdefg";
  char* word2 = "lmnop";
  char* word3 = "bobby";
  char* word4 = "tabcdeft";
  
  if ( isUnique(word1) == true ) printf("%s: [ OK ]\n",word1);
  seen = {false};
  if( isUnique(word2) == true  ) printf("%s: [ OK ]\n",word2);
  seen = {false};
  if( isUnique(word3) == false  ) printf("%s: [ OK ]\n",word3);
  seen = {false};
  if( isUnique(word4) == false ) printf("%s: [ OK ]\n",word4);

  return 0;

}
