#include <iostream>

using std::cout;
using std::cin;

int N = 0;
int count = 0;

void back(int i)
{
	if (i == N)
	{
		count += 1;
		return ;
	}
	
}

/*
	0 1 2 3 4
	5 6 7 8 9 
	10 11 12 13 14 
	15 16 17 18 19
*/

int main()
{
	int c[15 * 15 + 1];

	cin >> N;
	
	int i = 0;
	back(i);
}