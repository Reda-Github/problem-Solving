#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int sum = 0;
  for (int i : numbers)
  {
    sum += i*i;
  }
  return sum;
}