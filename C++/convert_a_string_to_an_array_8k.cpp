#include <vector>
#include <string>
#include <sstream>

/**
https://www.codewars.com/kata/57e76bc428d6fbc2d500036d/train/cpp

Write a function to split a string and convert it into an array of words.
Examples (Input ==> Output):

"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
*/

std::vector<std::string> string_to_array(const std::string& s) {
  std::vector<std::string> words;
  std::string word;
  std::stringstream ss(s);

  while (ss >> word) {
    words.push_back(word);
  }

  return words.size() ? words : words = {""};
}
