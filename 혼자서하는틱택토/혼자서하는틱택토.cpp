#include <string>
#include <vector>
#include <iostream>

using namespace std;

int isBingo(int bingo, int countX, int countO)
{
	if (bingo == 3)
	{
		if (countO - countX != 1)
			return -1000;
		else
			return 1;
	}
	if (bingo == -3)
	{
		if (countO - countX != 0)
			return -1000;
		else
			return 1;
	}
	return 0;
}

int solution(vector<string> board) {
	vector<int> vec;

	int countX = 0;
	int countO = 0;

	for (auto it = board.begin(); it != board.end(); it++)
	{
		for (int i = 0; i < 3; i++)
		{
			if ((*it)[i] == 'O')
			{
				vec.push_back(1);
				countO++;
			}
			else if ((*it)[i] == 'X')
			{
				vec.push_back(-1);
				countX++;
			}
			else
			{
				vec.push_back(0);
			}
		}
	}
	if (countO < countX || countO - countX > 1)
		return 0;
	
	int bingo = 0;
	int result = 0;
	for (int i = 0; i < 3; i++)
	{
		bingo = 0;
		for (int j = 0; j < 3; j++)
		{
			bingo += vec[i * 3 + j];
		}
		result += isBingo(bingo, countX, countO);
	}
	for (int i = 0; i < 3; i++)
	{
		bingo = 0;
		for (int j = 0; j < 3; j++)
		{
			bingo += vec[i + j * 3];
		}
		result += isBingo(bingo, countX, countO);
	}
	bingo = (vec[0] + vec[4] + vec[8]);
	result += isBingo(bingo, countX, countO);
	bingo = (vec[2] + vec[4] + vec[6]);
	result += isBingo(bingo, countX, countO);
	/*
		0 1 2
		3 4 5
		6 7 8

		X X 
		O O O
		X
	*/
	
	cout << result << " " << countX << " " << countO << endl;
    return (result < 2 && result >= 0);
}

int main()
{
	cout << solution({"XOX",
"OXO",
"XOO"});
}

//OXO
//XOX
//OXO