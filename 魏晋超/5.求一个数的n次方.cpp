#include<iostream>
#include<math.h>
using namespace std;
int main5()
{
	int a = 0, b = 0,s=1;
	cout << "a的b次方为" << endl;
	cin >> a >> b;
	for (int i = 1; i <=b; i++)
	{
		s = s * a % 1000;
	}
	cout << s << endl;



	return 0;
}