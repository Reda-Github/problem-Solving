#include <vector>
using namespace std;
int positive_sum (vector<int> array){
  int sum = 0;
  
  for (auto arr : array)
    if (arr > 0) sum += arr;
    
  return sum;
}