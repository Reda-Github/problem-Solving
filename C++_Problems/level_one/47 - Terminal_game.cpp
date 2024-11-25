#include <iostream>
using namespace std;

int posi(int position, int rell){
  return position + (rell * 2);
}

int main(){

cout << posi(3, 6) << "\n";
return 0;
}