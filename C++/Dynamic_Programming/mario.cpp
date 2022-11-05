#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#define ll long long;
#define ull unsigned long long;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7
#define SIZE_OF_STRING(s) (s.size())
#define SIZE_OF_ARRAY(a)  (sizeof(a)/sizeof(a[0]))
using db = double;
using namespace std;



int main(int argc, char const *argv[])
{
	int t,m,tam;
	string s;
	cin >> t >> s >> m;
	int a[t];
	string ss[4]={"Death" , "Small" , "Big" , "Gun"};
	int i = 0;
	if (s == "Small")
		i=1;
	else if (s == "Big")
		i=2;
	else if(s=="Gun")
		i=3;
	while(t--)
	{
		cin >> a[t];
		if (a[t] == 1)
		{
			if (i<3)
				s = ss[++i];
			else
				s = ss[3];
		}
		else if (a[t] == 3)
			s = ss[--i];
		else if (a[t] == 2)
			m += 1;
		if (s == "Death")
		{
			tam = t;
            m = 0;
			t = 0;
		}
	}
	cout << tam << " " << s << " "<< m;
	return 0;
}