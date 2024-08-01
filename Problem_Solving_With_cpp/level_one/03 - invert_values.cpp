#include <vector>
using namespace std;

/*
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.
*/

vector<int> invert(vector<int> v)
{
  for (int i = 0; i < v.size(); i++) v[i] *= -1;
  
  return v;
}