/*
Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.
*/

#include <vector>
using namespace std;
vector<int> countPositivesSumNegatives(vector<int> input)
{
  int count = 0;
  int sum = 0;
  
  if (input.size() == 0) return {};
  
  for (int i = 0; i < input.size(); i++)
  {
    if (input[i] > 0) count++;
    if (input[i] < 0) sum += input[i];   
  }
  
  return {count, sum};
}