/*
For every positive integer N, there exists a unique sequence starting with 1 and ending with N and such that every number in the sequence is either the double of the preceeding number or the double plus 1.

For example, given N = 13, the sequence is [1, 3, 6, 13], because . . . :
*/

#include <vector>
using namespace std;

vector<int> climb(int n)
{
  vector<int> result;
  
  while (n > 1)
  {
    result.insert(begin(result), n);
    n /= 2;
  }
  result.insert(begin(result), n);
  return result;
}