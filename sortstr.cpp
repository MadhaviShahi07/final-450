#include<bits/stdc++.h>
using namespace std;
void sort_Str(string &str){
	sort(str.begin(), str.end());
	cout<<str;
}
int main()
{
	string s = "madhavi";
	sort_Str(s);
	return 0;
}
