#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
  const int MAX_PHRASE_CHARS = 20;
  const int REQUIRED_DIGIT_COUNT = 4;
  char phrase[MAX_PHRASE_CHARS + 1] = {};
  char digits[REQUIRED_DIGIT_COUNT + 1] = {};
  char symbol = '\0';

  cout << "PHRASE: ";
  cin.getline(phrase, MAX_PHRASE_CHARS);

  bool getDigits = true;
  while(getDigits) {
    cout << "4 DIGITS [0-9]: ";
    bool isDigit = true;
    for(int i = 0; i < REQUIRED_DIGIT_COUNT && isDigit; i++) {
      cin >> digits[i];
      isDigit = digits[i] >= '0' && digits[i] <= '9';
    }
    if(isDigit) {
      getDigits = false;
    } else {
      cout << "Hey, that wasn't a digit :(" << endl;
    }
  }

  cout << "SYMBOL: ";
  cin >> symbol;

  char s2[MAX_PHRASE_CHARS] = {};
  
  const std::size_t len_until_space = strcspn(phrase, " ");
  strncpy(s2, phrase, len_until_space);
  strcat(s2,digits);
  char symbolString[2] = {symbol, '\0'};
  strcat(s2, symbolString);
  
  cout << "Your strong password is: " << s2 << endl;

  return 0;
}


// Mower Street 1991 $

// the output is:

// Your strong password is: Mower1991$

// Ex: If the input is:

// Gayathri Iyer 2024 &

// the output is:

// Your strong password is: Gayathri2024&