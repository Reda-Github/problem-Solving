// Build a function that returns an array of integers from n to 1 where n>0
#include <vector>
using namespace std;
vector<int> reverseSeq(int n) {
  vector<int> reverse;
  for (int i = n; i > 0; i--)
  {
    reverse.push_back(i);
  }
  return reverse;
}

// 3, 2, 1