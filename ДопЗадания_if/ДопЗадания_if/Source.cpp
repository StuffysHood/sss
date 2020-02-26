#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	1.	ќпределить какое из трех чисел максимальное и вывести его.
	
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
	
	2.	ѕроверить, принадлежит ли число интервалу (Ц5, 3).
	
	int x;
	cout << "Enter number x ";
	cin >> x;
	if (x >= -5 && x <= 3)
		cout << "Yes, number x belong to this line";
	else
		cout << "No, number x doesn't belong to this line";

	3.	ƒаны три вещественных числа a, b, c. ѕроверить:	 a < b < c;	b > a > c.
	
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

	4.	ќпределить, €вл€етс€ ли число а делителем числа b или, наоборот, число b делителем
	числа а. ќтветом должны служить сообщени€ "ƒа, одно из чисел €вл€етс€ делителем другого"
	или "Ќет, ни одно из чисел не €вл€етс€ делителем другого"
	
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	if (a % b == 0 || b % a == 0)
		cout << "Yes, one of the numbers is divider of another";
	else
		cout << "None of the numbers arent divider of another";

	5.	ƒано двузначное число. ќпределить: а) входит ли в него цифра 3;
	б) входит ли в него цифра а.
	
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

	6.	ѕо координатам точки определить в какой четверти декартовых координат она находитс€.
	
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

	7.	ƒано целое число. ¬озвести в квадрат отрицательные числа и в третью степень Ч
	положительные (число 0 не измен€ть).
	
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

	8.	ѕерераспределить значени€ переменных X и Y так, чтобы в X оказалось меньшее из этих
	значений, а в Y Ч большее.
	
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
	9.	«начени€ переменных X, Y, Z помен€ть местами так, чтобы они оказались упор€доченными
	по возрастанию
	
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
	
	10.	ƒан номер некоторого года (положительное целое число). ¬ывести соответствующий ему номер
	столети€, учитыва€, что, к примеру, началом 20 столети€ был 1901 год.
	
	int x;
	cout << "Enter year ";
	cin >> x;
	if (x % 100 > 0)
		cout << "it is " << x / 100 + 1 << " century";
	else
		cout << "it is " << x / 100 << " century";

	11.	ƒан номер некоторого года (положительное целое число). ¬ывести число дней в этом
	году, учитыва€, что обычный год насчитывает 365 дней, а високосный Ч 366 дней.
	¬исокосным считаетс€ год, дел€щийс€ на 4, за исключением тех годов, которые дел€тс€ на
	100 и не дел€тс€ на 400 (например, годы 300, 1300 и 1900 не €вл€ютс€ високосными,
	а 1200 и 2000 Ч €вл€ютс€).
	*/ ;
	int x;
	cin >> x;
	if (x % 4 == 0 && !(x % 100 == 0 && x % 400 != 0))
		cout << "visokosniy";
	else
		cout << "ne visokosniy";


	return 0;
}