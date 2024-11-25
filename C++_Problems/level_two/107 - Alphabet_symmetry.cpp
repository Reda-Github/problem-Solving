/*
Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example
*/


#include <vector>
#include <string>
using namespace std;
vector<int> solve(vector<string> arr) {  
  int count = 0;
  vector<int> sum;
  
  for (auto i : arr)
  {
    for (int j = 0; j < i.length(); j++)
    {
      if (i[j] == j + 65 || i[j] == j + 97) count++;
    }
    sum.push_back(count);
    count = 0;
  }
  return sum;
};