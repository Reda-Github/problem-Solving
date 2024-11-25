/*
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
*/

#include <iostream>
#include <vector>

int grow(std::vector<int> nums) {
  int sum = 1;
  for (int i = 0; i < nums.size(); i ++) sum *= nums[i];

  return sum;
}

int main() {
  std:: cout << grow({1,2,3,4});
  return 0;
}