#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	1.	���������� ����� �� ���� ����� ������������ � ������� ���.
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x > y)
		if (x > z)
			cout << "the biggest number is " << x;
		else
			cout << "the biggest number is " << z;
	else
		if (y > z)
			cout << "the biggest number is " << y;
		else
			cout << "the biggest number is " << z;
	
	2.	���������, ����������� �� ����� ��������� (�5, 3).
	
	int x;
	cout << "Enter number x ";
	cin >> x;
	if (x >= -5 && x <= 3)
		cout << "Yes, number x belong to this line";
	else
		cout << "No, number x doesn't belong to this line";

	3.	���� ��� ������������ ����� a, b, c. ���������:	 x < y < z;	y > x > z.
	
	double x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x < y && y < z)
		cout << "You are right";
	else
		cout << "No, you aren't right";
	
	double x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (y > x && x > z)
		cout << "You are right";
	else
		cout << "No, you aren't right";

	4.	����������, �������� �� ����� � ��������� ����� b ���, ��������, ����� b ���������
	����� �. ������� ������ ������� ��������� "��, ���� �� ����� �������� ��������� �������"
	��� "���, �� ���� �� ����� �� �������� ��������� �������"
	
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	if (a % b == 0 || b % a == 0)
		cout << "Yes, one of the numbers is divider of another";
	else
		cout << "None of the numbers arent divider of another";

	5.	���� ���������� �����. ����������: �) ������ �� � ���� ����� 3;
	�) ������ �� � ���� ����� �.
	
	int a;
	cout << "Enter number a: ";
	cin >> a;
	if (a / 10 == 3 || a % 10 == 3)
		cout << "Yes number a contains digit 3";
	else
		cout << "No, number a doesn't contain digit 3";
	
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	if (a / 10 == b || a % 10 == b)
		cout << "Yes number a contains digit " << b;
	else
		cout << "No, number a doesn't contain digit "<< b;

	6.	�� ����������� ����� ���������� � ����� �������� ���������� ��������� ��� ���������.
	
	int x, y;
	cout << "Enter coordinate x ";
	cin >> x;
	cout << "Enter coordinate y ";
	cin >> y;
	if (x > 0)
		if (y > 0)
			cout << "You are in FIRTH quarter";
		else
			cout << "You are in FOURTH quarter";
	else 
		if (y>0)
			cout << "You are in SECOND quarter";
		else 
			cout << "You are in THIRD quarter";

	7.	���� ����� �����. �������� � ������� ������������� ����� � � ������ ������� �
	������������� (����� 0 �� ��������).
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (x < 0) 
	{
		cout << "Number is under 0 therefor x^2 = " << pow(x, 2);
	}
	else
		if (x == 0)
		{
			cout << "Number is " << x;
		}
		else 
		cout << "Number is above 0 therefor x^3 = " << pow(x, 3);

	8.	���������������� �������� ���������� X � Y ���, ����� � X ��������� ������� �� ����
	��������, � � Y � �������.
	
	int x, y;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	if (x > y)
	{
		int tmp = 0;
		tmp = x;
		x = y;
		y = tmp;
		cout << "The smallest number is " << x << endl;
		cout << "The biggest number is " << y << endl;
	}
	else 
	{ 
		cout << "The smallest number is " << x << endl;
		cout << "The biggest number is " << y << endl;
	}
	9.	�������� ���������� X, Y, Z �������� ������� ���, ����� ��� ��������� ��������������
	�� �����������
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	
	if (x > y && x > z) 
	{
		if (y > z)
			cout << z << " " << y << " " << x;
		else
			cout << y << " " << z << " " << x;
	}
	else
	{
		if (z > y && z > x)
		{
			if (y > x)
				cout << x << " " << y << " " << z;
			else
				cout << y << " " << x << " " << z;
		}
		else
		{
			if (y > x && y > z)
			{
				if (x > z)
					cout << z << " " << x << " " << y;
				else
					cout << x << " " << z << " " << y;
			}
			else
				cout << "wrong ";
		}
	}
	
	
	if (x > y && x > z)
		if(y>z)
			cout << z << " " << y << " " << x;
		else
			cout << y << " " << z << " " << x;
	if (y > x && y > z)
		if (x > z)
			cout << z << " " << x << " " << y;
		else
			cout << x << " " << z << " " << y;
	if (z>y && z>x)
		if (y>x)
			cout << x << " " << y << " " << z;
		else
			cout << y << " " << x << " " << z;
	
	10.	��� ����� ���������� ���� (������������� ����� �����). ������� ��������������� ��� �����
	��������, ��������, ���, � �������, ������� 20 �������� ��� 1901 ���.
	
	int x;
	cout << "Enter year ";
	cin >> x;
	if (x % 100 > 0)
		cout << "it is " << x / 100 + 1 << " century";
	else
		cout << "it is " << x / 100 << " century";

	11.	��� ����� ���������� ���� (������������� ����� �����). ������� ����� ���� � ����
	����, ��������, ��� ������� ��� ����������� 365 ����, � ���������� � 366 ����.
	���������� ��������� ���, ��������� �� 4, �� ����������� ��� �����, ������� ������� ��
	100 � �� ������� �� 400 (��������, ���� 300, 1300 � 1900 �� �������� �����������,
	� 1200 � 2000 � ��������).
	
	int x;
	cin >> x;
	if (x % 4 == 0 && !(x % 100 == 0 && x % 400 != 0))
		cout << "visokosniy";
	else
		cout << "ne visokosniy";
	
	////////////////////////////////////////////////////////////////////////////////////////////////

	33.	���������  , ����  �  ������ ������������. ����� ����������� ��������� �������� ��
	������������� ���������� ������.
											��� ���������?
	int x, y;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	if (x%(int)sqrt(x)==0 && y%(int)sqrt(y)==0)
		cout << sqrt(x-sqrt(y));
	else 
		cout << " wrong ";

	34.	 ���� �����. ���� ��� ������ 7, �� ������� "��", ���� ������ 10, �� ������� "���",
	���� ����� 9, �� ������� "������".
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (x < 7)
		cout << "Yes";
	if (x > 10)
		cout << "No";
	if (x = 9)
		cout << "Error";

	35.	������������ ������ ��� �����. ���� ��� ����� ������ 10 � ������ ��� ����� ������� �� 3,
	�� ������� "��", ����� "���"
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x > 10 && y > 10 && z > 10 && x % 3 == 0 && y % 3 == 0)
		cout << "Yes";
	else
		cout << "No";

	36.	������������ ������ ��� �����. ����� ����� ��� �����, ������� ������� �� 5. ���� ����� 
	����� ���, �� ������� "������".
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x%5==0 && y % 5 != 0 && z % 5 != 0)
		cout << "Sum of numbers is " << x;
	if (x % 5 != 0 && y % 5 == 0 && z % 5 != 0)
		cout << "Sum of numbers is " << y;
	if (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)
		cout << "Sum of numbers is " << z;
	if (x % 5 == 0 && y % 5 == 0 && z % 5 != 0)
		cout << "Sum of numbers is " << x + y;
	if (x % 5 == 0 && y % 5 != 0 && z % 5 == 0)
		cout << "Sum of numbers is " << x + z;
	if (x % 5 != 0 && y % 5 == 0 && z % 5 == 0)
		cout << "Sum of numbers is " << y + z;
	if (x % 5 == 0 && y % 5 == 0 && z % 5 == 0)
		cout << "Sum of numbers is " << x + y + z;
	if (x % 5 != 0 && y % 5 != 0 && z % 5 != 0)
		cout << "Error";
	
	37.	���� ��� �����. �������� "��", ���� ����� ��� ���� ����������.
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x == y || y == z || x == z)
		cout << "Yes";
	else
		cout << "No";

	38.	���� ��� �����. �������� "��", ���� ����� ����� �����-�� ��� �� ��� � � ����� �������� 
	������.
	
	int x, y, z;

	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x + y == z || x + z == y || y + z == x)
		cout << "Yes";
	else
		cout << "No";


	39.	���� ��� �����. ���� ����� ��� �� ���  ������ 5, �� ������� "��", ����� ������� "���".
	
	int x, y, z;

	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if ((x < 5 && y < 5) || (x < 5 && z < 5) || (y < 5 && z < 5))
		cout << "Yes";
	else
		cout << "No";

	40.	���� ��� �����. ����� ���������� ������������� ����� ����� ���.
	
	int x, y, z;

	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if ((x>0 && y<0 && z<0) || (x < 0 && y > 0 && z < 0)|| (x < 0 && y < 0 && z > 0))
		cout << "1";
	if ((x > 0 && y > 0 && z < 0) || (x > 0 && y < 0 && z > 0) || (x < 0 && y > 0 && z > 0))
		cout << "2";
	if (x > 0 && y > 0 && z > 0)
		cout << "3";
	if (x < 0 && y < 0 && z < 0)
		cout << "0";
	

	41.	����� ����� ������������ � ������� ������������ (�11� � �����, �12� � �����, �13� � ��, 
	�14� � ������) � ��������� ��� �������� �������: 0 � ���������� ��������, 1 � ������� ������,
	�1 � ������� �������. ���� ����� (11, 12, 13 ��� 14) � �������� ����������� ������ � �����
	����� N (0, 1 ��� -1) � ��������� ��� �������. ������� ����������� ������ ����� ����������
	���������� ������� (�� ���� �����, �����, �� ��� ������).
	
	int x, y;
	cout << "Enter initial direction ";
	cin >> x;
	cout << "Enter instruction ";
	cin >> y;

	// For North (11)
	if ((x == 11 && y == 0) || (x == 12 && y == -1) || (x == 14 && y == 1))
		cout << "Robot goes to the North" << endl;
	// For West (12)
	if ((x == 12 && y == 0) || (x == 11 && y == 1) || (x == 13 && y == -1))
		cout << "Robot goes to the West" << endl;
	// For South (13)
	if ((x == 13 && y == 0) || (x == 12 && y == 1) || (x == 14 && y == -1))
		cout << "Robot goes to the South" << endl;
	//For East (14)
	if ((x == 14 && y == 0) || (x == 11 && y == -1) || (x == 13 && y == 1))
		cout << "Robot goes to the East" << endl;
	
	42.	���� ���� �� ���� ����� (����, ����� � ���). ������� "��", ���� ����� ���� ���������� 
	(��������, 12 02 1999 - "��", 22 13 2001 - "���"). �������, ��� � ������� ������ 28 ����.
	
	int x, y, z;

	cout << "Enter date x: ";
	cin >> x;
	cout << "Enter month y: ";
	cin >> y;
	cout << "Enter year z: ";
	cin >> z;
	
	if (x < 32 && (y == 1 || y == 3 || y == 5 || y == 7 || y == 9 || y == 10 || y == 12))
		cout << "This date " << x << ":" << y << ":" << z << " exists";
		
	if (x < 31 && (y == 4 || y == 6 || y == 9 || y == 11))
		cout << "This date " << x << ":" << y << ":" << z << " exists";

	if (x < 29 && y == 2)
		cout << "This date " << x << ":" << y << ":" << z << " exists";

	if (x>31 || y>12)
		cout << "This date " << x << ":" << y << ":" << z << " doesn't exist";
	
	43.	���� ��� ����, ������ �� ������� ������� �� ���� ����� (����, ����� � ���). 
	������� "��", ���� ������ ���� ������ ������, ����� ������� no.

	int x, y, z, x1, y1, z1;
	cout << "Enter first date:\n";
	cout << "Day: ";
	cin >> x;
	cout << "Month: ";
	cin >> y;
	cout << "Year: ";
	cin >> z;

	cout << "Enter secod date:\n";
	cout << "Day: ";
	cin >> x1;
	cout << "Month: ";
	cin >> y1;
	cout << "Year: ";
	cin >> z1;

	if (z < z1 || (y < y1 && z <= z1) || (x < x1 && y <= y1 && z <= z1))
		cout << "First date is earlier than second";
	else
		cout << "First date IS NOT earlier than second";
	
	44.	���� �������������� �����. ����� ��, ��� ����� � ��� ����������� �� ��������? ��������,
	4311 - ���, 4321 - ��, 5542 - ���, 5631 - ���, 9871 - ��.
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (((x / 1000) > (x % 1000 / 100)) && ((x % 1000 / 100) > (x % 100 / 10)) && (x % 100 / 10) > x % 10)
		cout << "all numbers are in descending order";
	else
		cout << "They are not";

	45.	���� ����������� �����. ����������� ������ � ��������� �����.
	/*;
	int x;
	cout << "Enter number x: ";
	cin >> x;
	cout << x%10*100 + (x%100 - x%10) + x/100;

	46.	���� �������������� �����. ����������, ���� �� ���������� ����� � ���.
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (x / 1000 == x % 1000 / 100 || x / 1000 == x % 100 / 10 || x / 1000 == x % 10 || x % 1000 / 100 == x % 100 / 10 || x % 1000 / 100 == x % 10 || x % 100 / 10 == x % 10)
		cout << "There are the same digits";
	else
		cout << "THERE ARENT";

	47.	���� ����������� �����. ����� �� ������ �������� ��������. ��������, �� 12345 
	���������� ����� 10305.
	int x;
	cin >> x;
	cout << (x / 10000 * 10000)+ ((x % 1000 / 100)*100) + (x % 10);
	
	48.	���� ��� ����������� �����. ������� ������������ �����, ������������ �� ���� ������
	����� ����� ����������� ������� ����� � ������� ������.
	*/ ;
	int x, y;
	cin >> x >> y;
	cout << x * 1000 + y;


	return 0;

}