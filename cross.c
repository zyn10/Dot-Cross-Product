#include<iostream>
using namespace std;
int main()
{
	int Vector1[3], Vector2[3], DotProduct = 0;
	cout << "Enter vector   no 1 in the form of i,j,k" ; cout << endl;
	cout << "vector 1 is "; cout << endl;
	for (int loop_1 = 0; loop_1 < 3; loop_1++)//loop for getting input for vector 1
	{
		cin >> Vector1[loop_1];
	}
	cout << "Enter vector no 2 in the for of i,j,k"; cout << endl;
	cout << "Vector 2 is "; cout << endl;
	for (int loop_2 = 0; loop_2 < 3; loop_2++)//loop for geeting input for vector 2
	{
		cin >> Vector2[loop_2];
	}
	for (int loop_3 = 0; loop_3 < 3; loop_3++)
	{
		DotProduct = DotProduct + (Vector1[loop_3] * Vector2[loop_3]);//formulae
	}
	cout << "Dot product of first and second vector = " << DotProduct;
	system("pause>0");
}
