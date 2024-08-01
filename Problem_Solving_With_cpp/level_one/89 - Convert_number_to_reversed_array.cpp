// Given a random non-negative number, you have to return the digits of this number within an array in reverse orde


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> digitize(unsigned long n) 
{        
  vector<int> sum_arr;
  string str = to_string(n);
  reverse(str.begin(), str.end());
  
  for (int i = 0; i < str.length(); i++)
  {
    sum_arr.push_back(str[i] - '0');
  }
  
  return sum_arr;
}