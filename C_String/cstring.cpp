#include <iostream>
#include "cstring.h"

unsigned int length(char str[]) {
  // returns the length of the string including zero (0)
  unsigned int length = 0;
  bool notDone = true;
  while(notDone) {
    if(str[length] == '\0') {
      notDone = false;
    }
    length++;
  }
  return length - 1;
}

unsigned int find(char str[], char character) {
  // returns 
  //  - the index of the first occurence of character in str
  //  - the size if the character is not found
  unsigned int len = length(str);
  for(unsigned int i = 0; i < len; i++) {
    if(str[i] == character) {
      return i;
    }
  }
  return len;
}

bool equalStr(char str1[], char str2[]) {
  // returns true if they are equal and false if they are not
  unsigned int len1 = length(str1);
  unsigned int len2 = length(str2);
  if(len1 != len2) {
    return false;
  }
  for(unsigned int i = 0; i < len1; i++) {
    if(str1[i] != str2[i]) {
      return false;
    }
  }
  return true;
}