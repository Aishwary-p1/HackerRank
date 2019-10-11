#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	string sa,ans;
	cin>>sa;
	int i;
	stack<char> s;
	s.push('h');
	s.push('a');
	s.push('c');
	s.push('k');
	s.push('e');
	s.push('r');
	s.push('r');
	s.push('a');
	s.push('n');
	s.push('k');
	for(i=sa.length()-1;i>=0;i--)
	{
		if(sa[i]==s.top())
			s.pop();
	}
	if(s.size()==0)
		cout<<"YES";
	else
		cout<<"NO";
}
