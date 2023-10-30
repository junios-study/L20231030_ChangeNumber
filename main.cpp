#include <iostream>

using namespace std;

int Numbers[9][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

void Print()
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			cout << Numbers[j][i] << " ";
		}
		cout << endl;
	}
}

void ChangeNumber()
{
	for (int j = 0; j < 9; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			Numbers[j][i] = (Numbers[j][i] == 0) ? 1 : 0;
			//if (Numbers[j][i] == 0)
			//{
			//	Numbers[j][i] = 1;
			//}
			//else if (Numbers[j][i] == 1)
			//{
			//	Numbers[j][i] = 0;
			//}
		}
	}
}

int main()
{
	Print();
	ChangeNumber();
	Print();

	return 0;
}