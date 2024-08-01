#include <iostream>
using namespace std;

bool check_char(string st, char se){
  for (int i = 0; i < st.length(); i++)
  {
    if (st[i] == se)
    {
      return true;
    }
  }
  return false;
}

int main(){
  
  cout << check_char("Reda Jaber", 'e') << "\n";
  cout << check_char("Reda Jaber", 'w') << "\n";
  
  return 0;
}