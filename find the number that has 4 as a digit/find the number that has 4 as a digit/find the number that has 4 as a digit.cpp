#include<iostream>
using namespace std;
 
bool has4(int x)
{
	while (x != 0)
	{
		if (x % 10 == 4)
		{
			return true;
		}
		x = x / 10;
	}
	return false;
}
int countNumberOf4s(int n)
{
	int result = 0;
	for (int i = 1;i < n;i++)
	{
		if (has4(i) == true)
		{
			result = result + 1;
		}
	}
	return result;
}
int main()
{
	int num;
	cout << "Enter a number...";
	cin >> num;
	cout << "\nThere are " << countNumberOf4s(num) << " number of fours before the given number";
}