#include<iostream>
using namespace std;
int main()
{
	int vector1[3], vector2[3], CrossProduct[3];
	cout << "Enter vector   no 1 in the form of i,j,k"; cout << endl;
	for (int loop_1 = 0; loop_1 < 3; loop_1++)//getting input for 1st variable
	{
		cin >> vector1[loop_1];
	}
	cout << "Enter vector   no 1 in the form of i,j,k"; cout << endl;
	for (int loop_2 = 0; loop_2 < 3; loop_2++)//geting input for 2nd vector
	{
		cin >> vector2[loop_2];
	}
	CrossProduct[0] = (vector1[1] * vector2[2]) - (vector1[2] * vector2[1]);//formula
	CrossProduct[1] = (vector1[2] * vector2[0]) - (vector1[0] * vector2[2]);//formula 
	CrossProduct[2] = (vector1[0] * vector2[1]) - (vector1[1] * vector2[0]);//formula

	cout << "The Cross Product of first and second vector"; cout << endl;
	for (int loop_3 = 0; loop_3 < 3; loop_3++)
	{
		cout << CrossProduct[loop_3] << endl;
	}
	system("pause>0");
}
