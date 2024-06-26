#include <iostream>
using namespace std;
void Sapxep(int Array[5])
{
	int max;
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (Array[j] < Array[j - 1])
			{
				max = Array[j];
				Array[j] = Array[j - 1];
				Array[j - 1] = max;
			}
		}
	}	
}
int main() 
{
	int Array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap gia tri thu " << i + 1 << ": ";
		cin >> Array[i];
	}

	
	for (int i = 0; i < 5;i++)
	{
		Sapxep(Array);
		cout << Array[i] << " ";
	}
	
}