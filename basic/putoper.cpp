#include <iostream>
#include <vector>

using namespace std;

void getMin(vector<int> vec, vector<int> oper, int *count, int *min, int *max)
{
	int tmp;
	
	if (vec.size() == 1)
	{
		*count = vec[0];
		return ;
	}
	if (oper[0] > 0)
	{
		oper[0] -= 1;
		tmp = *(vec.end() - 1) + *(vec.end() - 2);
		vec.pop_back();
		vec.pop_back();
		vec.push_back(tmp);
		getMin(vec, oper, count, min, max);
		if ()
	}
	if (oper[1] > 0)
	{
		oper[0] -= 1;
		tmp = *(vec.end() - 1) + *(vec.end() - 2);
		vec.pop_back();
		vec.pop_back();
		vec.push_back(tmp);
		getMin(vec, oper, count, min, max);
		if ()
	}
}

int main()
{
	vector<int> oper;
	vector<int> vec;
	int N, tmp; 

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		vec.insert(vec.begin(), tmp);
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> tmp;
		oper.push_back(tmp);
	}

	int count = 0;
	int min = 1000000000;
	int max = -1000000000;
	getMin(vec, oper, &count, &min, &max);
}