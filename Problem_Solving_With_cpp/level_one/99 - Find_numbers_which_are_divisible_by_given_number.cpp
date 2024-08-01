/*
Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor
*/

#include <vector>
using namespace std;
vector<int> divisible_by(vector<int> numbers, int divisor)
{
  vector<int> result;
  for (int i = 0; i < numbers.size(); i++)
    
    if (numbers[i] % divisor == 0) result.push_back(numbers[i]);
  
  
  return result;
}