/*
Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array
*/

#include <vector>
using namespace std;

unsigned int most_frequent_item_count(vector<int> collection) {
  
  int result = 0;
  int count = 0;
  
  for (auto nums : collection)
  {
    for (auto num : collection)
      if (num == nums) count++;

    
    if (count > result) result = count;
    count = 0;
  }
  
  return result; // 3, -1, -1   >> 3
}