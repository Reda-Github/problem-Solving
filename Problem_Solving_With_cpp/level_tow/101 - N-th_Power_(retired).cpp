#include <vector>
#include <cmath>
using namespace std;

int index(vector<int> vector, int n) {
//   int sum = vector[n];
  
//   if (n >= vector.size()) return -1;
  
//   return pow(sum, n);
  
  return n < vector.size() ? pow(vector[n], n) : -1;
}