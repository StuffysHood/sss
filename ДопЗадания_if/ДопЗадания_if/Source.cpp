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
	
	int x, y, z;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	cout << "Enter number z: ";
	cin >> z;
	if (x > y && x > z)
		cout << "the biggest number is " << x;
	else
		if (y > z){
			cout << "the biggest number is " << y;}
		else{
			cout << "the biggest number is " << z;}
	
	2.	���������, ����������� �� ����� ��������� (�5, 3).
	
	int x;
	cout << "Enter number x ";
	cin >> x;
	if (x >= -5 && x <= 3)
		cout << "Yes, number x belong to this line";
	else
		cout << "No, number x doesn't belong to this line";

	3.	���� ��� ������������ ����� a, b, c. ���������:	 a < b < c;	b > a > c.
	
	int x, y, z;
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
	
	int a,b,c;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	cout << "Enter number c: ";
	cin >> c;
	if (b > a && a > c)
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
				cout << "fuck";
		}
	}
	
	
	if (x>y && x>z)
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
	*/ ;
	int x;
	cin >> x;
	if (x % 4 == 0 && !(x % 100 == 0 && x % 400 != 0))
		cout << "visokosniy";
	else
		cout << "ne visokosniy";


	return 0;
}