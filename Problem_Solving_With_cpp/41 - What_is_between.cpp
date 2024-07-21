#include <iostream>
#include <vector>
using namespace std;

/*
  start = 1;
  2
  3
  4
  end = 5;
*/

vector<int> between(int start, int end){
  vector<int> result;
  for (int i = start; i <= end; i++)
  {
    result.push_back(i);
  }
  return result;
}

int main(){
  
  
  return 0;
}