/*
Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before you receive any more complaints.

The pipes are correct when each pipe after the first is 1 more than the previous one
*/

#include <vector>
using namespace std;

vector<int> pipe_fix(vector<int> nums) {
  int min = nums.front();
  int max = nums.back();
  vector<int> result;
  
  for (int i = min; i <= max; i++) result.push_back(i);
  
  return result;
}