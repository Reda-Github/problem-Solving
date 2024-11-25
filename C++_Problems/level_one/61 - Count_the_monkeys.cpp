/*
You take your son to the forest to see the monkeys. You know that there are a certain number there (n), but your son is too young to just appreciate the full number, he has to start counting them from 1.

As a good parent, you will sit and count with him. Given the number (n), populate an array with all numbers up to and including that number, but excluding zero
*/

#include <vector>
using namespace std;
vector<int> MonkeyCount(int n) {
  vector<int> count;
  for (int i = 1; i <= n; i++) count.push_back(i);
  
  return count;
}