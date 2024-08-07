/*
Imagine you start on the 5th floor of a building, then travel down to the 2nd floor, then back up to the 8th floor. You have travelled a total of 3 + 6 = 9 floors of distance.

Given an array representing a series of floors you must reach by elevator, return an integer representing the total distance travelled for visiting each floor in the array in order.
*/


#include <vector>
using namespace std;
int elevator_distance(vector<int> array) {
  int vs = array[0];
  int result = 0;
  
  for (int i = 1; i < array.size(); i++)
  {
    if (vs > array[i])
    {
      result += vs - array[i];
      vs = array[i];
    }
    else
    {
      result += array[i] - vs;
      vs = array[i];
    }
  }
  return result;
}