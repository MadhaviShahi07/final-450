#include<bits/stdc++.h>
using namespace std;
void rev_str(string &str){
	int n= str.length();
	for(int i=0;i<n/2;i++){
		swap(str[i],str[n-i-1]);
	}
	cout<<str;
}
int main()
{
	string s="madhavi";
	rev_str(s);
	return 0;
}
