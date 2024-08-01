/*
Given an array of integers, return a new array with each value doubled.
*/

#include <vector>
using namespace std;
vector<int> maps(vector<int> values) {
  for (int i = 0; i < values.size(); i++)
  {
    values[i] *= 2;
  }
  return values;
}