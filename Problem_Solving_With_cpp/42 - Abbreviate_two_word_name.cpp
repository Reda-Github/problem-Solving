#include <iostream>
using namespace std;

string first_char(string st){
  string re = "";
  re += toupper(st[0]);
  for (int i = 0; i < st.length(); i ++){
    if (st[i] == ' ')
    {
      re += st[i];
      re += toupper(st[i + 1]);
    }
  }
  return re;
}

int main(){
  
  cout << first_char("reda jaber abdo") << "\n";
  
  return 0;
}