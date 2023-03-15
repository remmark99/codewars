#include <vector>

/**
https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/cpp

Given an array of integers.

Return an array, where the first element is the count of positives numbers and
the second element is sum of negative numbers. 0 is neither positive nor
negative.

If the input is an empty array or is null, return an empty array.
Example

For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should
return [10, -65].
*/

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
  if (input.empty()) return {};

  std::vector<int> result = {0, 0};

  for (auto value : input) {
    if (value > 0)
      result[0]++;
    else
      result[1] += value;
  }

  return result;
}
