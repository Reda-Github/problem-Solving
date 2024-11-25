#include <iostream>
#include <vector>
using namespace std;

unsigned int most_requent(vector<int> collction){
  int result = 0;
  int count = 0;
  for (int i = 0; i < collction.size(); i++)
  {
    for (auto item : collction)
    {
      if (collction[i] == item)
      {
        count++;
      }
    }
    result = count > result ? result = count : result = result;
    count = 0;
  }
  return result;
}

int main(){
  
  vector<int> test = {1, 2, 3, 2, 2, -1, -1, 5, -1, 9, 9, 9, 9, 9, 9, 9, -1, 3};
  
  cout << most_requent(test) << "\n";
  
  return 0;
}