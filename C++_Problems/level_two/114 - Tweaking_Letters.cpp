/*
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold"
"p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"

tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"

tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;


string tweakLetters(string s, vector<int> arr) {
	// reda 114 101 100 97
	
	string result;
	
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 1) 
		{
		    if (char(s[i]) == 90)
		    {
		        result += char('A');
		        
		    }
		    else if (char(s[i]) == 122)
		    {
		        result += char('a');
		    }
		    else
		    {
		        result += char(s[i] + 1);
		    }
		}
		
		
		else if (arr[i] == -1) 
		{
		    if (char(s[i]) == 65)
		    {
		        result += char('Z');
		        
		    }
		    else if (char(s[i]) == 97)
		    {
		        result += char('z');
		    }
		    else
		    {
		        result += char(s[i] - 1);
		    } 
		}
		else result += s[i];
	}
	
	return result;
}