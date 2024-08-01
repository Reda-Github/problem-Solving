#include <iostream>
using namespace std;

#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int sum = list[0];
  
  for (int i = 0; i < list.size(); i++)
    if (list[i] < sum)
      sum = list[i];

  return sum;
}

int main(){
  
  cout << findSmallest({1, 3, 5, -4, 5}) << "\n";
  
  return 0;
}