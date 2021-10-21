//#include<iostream>
//
//using namespace std;
//int main()
//{
//	char s[100];
//	cin.getline(s, 100);
//	int i = 0, num = 0;
//	while (s[i] != '\0')
//	{
//		if (s[i] >= 'A'&&s[i] <= 'Z')
//			s[i] += 32;
//		i++;
//	}
//	cout << s << endl;
//	return 0;
//}

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	int a[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (int i = 1; i < 10;i++)
	for (int j = 1; j < i; j++)
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	return 0;
}