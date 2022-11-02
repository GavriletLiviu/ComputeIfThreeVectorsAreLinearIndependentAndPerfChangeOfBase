#include<iostream>
using namespace std;
int main()
{
	int vector1[3], vector2[3], vector3[3], delta, delta1, delta2, delta3, newbase[3];
	int i;
	cout << "this program shall compute if three vectors are linear independent or not and also can perform a change of base afterwards";
	cout << "please input vector 1 = \n";
	for (i = 0; i <= 2; i++)
	{
		cin >> vector1[i];
	}
	cout << "please input vector 2 = \n";
	for (i = 0; i <= 2; i++)
	{
		cin >> vector2[i];
	}
	cout << "please input vector 3 = \n";
	for (i = 0; i <= 2; i++)
	{
		cin >> vector3[i];
	}
	delta = vector1[0] * vector2[1] * vector3[2] + vector1[1] * vector2[2] * vector3[0] + vector1[2] * vector2[0] * vector3[1] - vector1[1] * vector2[0] * vector3[2] - vector1[0] * vector2[2] * vector3[1] - vector1[2] * vector2[1] * vector3[0];
	if (delta == 0)
		cout << "vectors are linear dependent \n ";
	else
	{
		cout << "vectors are linear independent!!! \n";
		cout << "delta is = " << delta;
		cout << " please input the new base of the vector \n ";
		for (i = 0; i <= 2; i++)
		{
			cin >> newbase[i];
		}
		delta1 = (newbase[0] * vector2[1] * vector3[2] + newbase[1] * vector2[2] * vector3[0] + newbase[2] * vector2[0] * vector3[1] - newbase[1] * vector2[0] * vector3[2] - newbase[0] * vector2[2] * vector3[1] - newbase[2] * vector2[1] * vector3[0]) / delta;
		delta2 = (vector1[0] * newbase[1] * vector3[2] + vector1[1] * newbase[2] * vector3[0] + vector1[2] * newbase[0] * vector3[1] - vector1[1] * newbase[0] * vector3[2] - vector1[0] * newbase[2] * vector3[1] - vector1[2] * newbase[1] * vector3[0]) / delta;
		delta3 = (vector1[0] * vector2[1] * newbase[2] + vector1[1] * vector2[2] * newbase[0] + vector1[2] * vector2[0] * newbase[1] - vector1[1] * vector2[0] * newbase[2] - vector1[0] * vector2[2] * newbase[1] - vector1[2] * vector2[1] * newbase[0]) / delta;
		cout << " alpha = " << delta1; cout << "\n";
		cout << "beta = " << delta2; cout << "\n";
		cout << "gama = " << delta3; cout << "\n";
	}
}





