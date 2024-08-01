/*
Write a function that takes an array of numbers and returns the sum of the numbers. The numbers can be negative or non-integer
*/

#include <vector>
using namespace std;
int sum(vector<int> nums) {
  int sum = 0;
  for (auto i : nums)  sum += i;

  return sum;
}