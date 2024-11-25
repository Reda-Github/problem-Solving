/*
Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.
*/

#include<vector>
#include <algorithm>
using namespace std;

int sum(vector<int> n)
{
  sort(n.begin(), n.end());
  if (n.size() <= 1) return 0;
  
  int sum = 0;
  
  for (int i = 1; i < n.size() - 1; i++)
  { 
    sum += n[i];
  }
  return sum;
}