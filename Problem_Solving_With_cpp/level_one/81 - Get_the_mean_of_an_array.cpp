/*
It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.
*/

#include <vector>
using namespace std;

int get_average(vector <int> marks)
{
  int sum = 0;
  for (auto m : marks) sum += m;

  return sum / marks.size();
}