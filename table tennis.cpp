#include <bits/stdc++.h>
using namespace std;
int str[25*2600],cnt=0;
void score(int x)
{
	int a = 0,b = 0;
	for(int i=0;i<cnt;i++)
	{
		if(str[i] == 'W')a++;
		if(str[i] == 'L')b++;
		if((a >= x || b >= x) && (max(a,b) - min(a,b) >= 2))
		{
			cout<<a<<':'<<b<<endl;
			a = 0;
			b = 0;
		}
	}
	cout<<a<<':'<<b<<endl;
}
int main()
{
	char a;
	for(cnt = 0;cin>>a && a != 'E';cnt++)
	{
		str[cnt] = a;
	}
	score(11);
	cout<<endl;
	score(21);
	return 0;
}
