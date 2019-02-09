#include<cmath>
#include<iostream>
#include<iomanip>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;

bool  exist(int t[] , int size,int val) {
	 
	for (int i = 0; i < size; i++)
	{
		if (t[i]==val)
		{


			return true;

		}
  




	}


	return false;

}

int main(void)
{
	int train[3][3];


	cout << "Enter the number of trains on Track 1. ";
	cin >> train[0][0];
	cout << "Enter the number of trains on Track 2. ";
	cin >> train[1][0];
	cout << "Enter the number of trains on Track 3. ";
	cin >> train[2][0];
	cout << "Enter the number of trains on Track 4. ";
	cin >> train[3][0];


	for (int i = 0; i < 4; i++)
	{
		train[i][1] = i;



	}
	for (int i = 0; i < 3; i++)
	{
		if (train[i][0] > train[i + 1][0])
		{

			int temp = train[i][0];
			int temp2 = train[i][1];

			train[i][0] = train[i + 1][0];
			train[i][1] = train[i + 1][1];

			train[i + 1][0] = temp;
			train[i + 1][1] = temp2;



		}
	}

	for (int i = 0; i < 3; i++)
	{

		if (train[i][0] == train[i + 1][0])
		{
			if (train[i][1] > train[i + 1][1])
			{
				int temp = train[i][0];
				int temp2 = train[i][1];

				train[i][0] = train[i + 1][0];
				train[i][1] = train[i + 1][1];

				train[i + 1][0] = temp;
				train[i + 1][1] = temp2;
			}

		}


	}
	int used[3];
	for (int i = 0; i < 4; i++) {
		used[i] = 766;


	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		{
			if (train[i][1] == j && !exist(used, 4, j))
			{
				used[i] = j;

				if (train[3][1] != train[j][1]) {
					cout << "Track " << train[j][1] + 1 << " has " << train[j][0] << " train(s) stopped";
				}

				if (train[3][1] == train[j][1])
				{
					cout << "Track " << train[j][1] + 1 << " has  1 train cleared and " << train[j][0] - 1 << " train(s) stopped";


				}
				if (train[j][1] > 3 && train[j][1] < train[j][1]) {
					cout << " Track " << train[j][1] << " alert!";




				}




				cout << "\n";
			}
		}

	}
	
}



