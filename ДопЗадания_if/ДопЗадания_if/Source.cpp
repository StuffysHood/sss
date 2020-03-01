#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	1.	Определить какое из трех чисел максимальное и вывести его.
	
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
	
	2.	Проверить, принадлежит ли число интервалу (–5, 3).
	
	int x;
	cout << "Enter number x ";
	cin >> x;
	if (x >= -5 && x <= 3)
		cout << "Yes, number x belong to this line";
	else
		cout << "No, number x doesn't belong to this line";

	3.	Даны три вещественных числа a, b, c. Проверить:	 x < y < z;	y > x > z.
	
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

	4.	Определить, является ли число а делителем числа b или, наоборот, число b делителем
	числа а. Ответом должны служить сообщения "Да, одно из чисел является делителем другого"
	или "Нет, ни одно из чисел не является делителем другого"
	
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;
	if (a % b == 0 || b % a == 0)
		cout << "Yes, one of the numbers is divider of another";
	else
		cout << "None of the numbers arent divider of another";

	5.	Дано двузначное число. Определить: а) входит ли в него цифра 3;
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

	6.	По координатам точки определить в какой четверти декартовых координат она находится.
	
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

	7.	Дано целое число. Возвести в квадрат отрицательные числа и в третью степень —
	положительные (число 0 не изменять).
	
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

	8.	Перераспределить значения переменных X и Y так, чтобы в X оказалось меньшее из этих
	значений, а в Y — большее.
	
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
	9.	Значения переменных X, Y, Z поменять местами так, чтобы они оказались упорядоченными
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
	
	10.	Дан номер некоторого года (положительное целое число). Вывести соответствующий ему номер
	столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год.
	
	int x;
	cout << "Enter year ";
	cin >> x;
	if (x % 100 > 0)
		cout << "it is " << x / 100 + 1 << " century";
	else
		cout << "it is " << x / 100 << " century";

	11.	Дан номер некоторого года (положительное целое число). Вывести число дней в этом
	году, учитывая, что обычный год насчитывает 365 дней, а високосный — 366 дней.
	Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на
	100 и не делятся на 400 (например, годы 300, 1300 и 1900 не являются високосными,
	а 1200 и 2000 — являются).
	
	int x;
	cin >> x;
	if (x % 4 == 0 && !(x % 100 == 0 && x % 400 != 0))
		cout << "visokosniy";
	else
		cout << "ne visokosniy";
	
	////////////////////////////////////////////////////////////////////////////////////////////////

	33.	Вычислите  , если  и  вводит пользователь. Перед вычислением выполнить проверку на
	существование квадратных корней.
											КАК ПРАВИЛЬНО?
	int x, y;
	cout << "Enter number x: ";
	cin >> x;
	cout << "Enter number y: ";
	cin >> y;
	if (x%(int)sqrt(x)==0 && y%(int)sqrt(y)==0)
		cout << sqrt(x-sqrt(y));
	else 
		cout << " wrong ";

	34.	 Дано число. Если оно меньше 7, то вывести "да", если больше 10, то вывести "нет",
	если равно 9, то вывести "ошибка".
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (x < 7)
		cout << "Yes";
	if (x > 10)
		cout << "No";
	if (x = 9)
		cout << "Error";

	35.	Пользователь вводит три числа. Если все числа больше 10 и первые два числа делятся на 3,
	то вывести "да", иначе "нет"
	
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

	36.	Пользователь вводит три числа. Найти сумму тех чисел, которые делятся на 5. Если таких 
	чисел нет, то вывести "ошибка".
	
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
	
	37.	Даны три числа. Написать "да", если среди них есть одинаковые.
	
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

	38.	Даны три числа. Написать "да", если можно взять какие-то два из них и в сумме получить 
	третье.
	
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


	39.	Дано три числа. Если ровно два из них  меньше 5, то вывести "да", иначе вывести "нет".
	
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

	40.	Дано три числа. Найти количество положительных чисел среди них.
	
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
	

	41.	Робот может перемещаться в четырех направлениях («11» — север, «12» — запад, «13» — юг, 
	«14» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево,
	–1 — поворот направо. Дано число (11, 12, 13 или 14) — исходное направление робота и целое
	число N (0, 1 или -1) — посланная ему команда. Вывести направление робота после выполнения
	полученной команды (то есть север, запад, юг или восток).
	
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
	
	42.	Дана дата из трех чисел (день, месяц и год). Вывести "да", если такая дата существует 
	(например, 12 02 1999 - "да", 22 13 2001 - "нет"). Считать, что в феврале всегда 28 дней.
	
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
	
	43.	Дано две даты, каждая из которых состоит из трех чисел (день, месяц и год). 
	Вывести "да", если первая дата раньше второй, иначе вывести no.

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
	
	44.	Дано четырехзначное число. Верно ли, что цифры в нем расположены по убыванию? Например,
	4311 - нет, 4321 - да, 5542 - нет, 5631 - нет, 9871 - да.
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (((x / 1000) > (x % 1000 / 100)) && ((x % 1000 / 100) > (x % 100 / 10)) && (x % 100 / 10) > x % 10)
		cout << "all numbers are in descending order";
	else
		cout << "They are not";

	45.	Дано трехзначное число. Переставьте первую и последнюю цифры.
	/*;
	int x;
	cout << "Enter number x: ";
	cin >> x;
	cout << x%10*100 + (x%100 - x%10) + x/100;

	46.	Дано четырехзначное число. Определите, есть ли одинаковые цифры в нем.
	
	int x;
	cout << "Enter number x: ";
	cin >> x;
	if (x / 1000 == x % 1000 / 100 || x / 1000 == x % 100 / 10 || x / 1000 == x % 10 || x % 1000 / 100 == x % 100 / 10 || x % 1000 / 100 == x % 10 || x % 100 / 10 == x % 10)
		cout << "There are the same digits";
	else
		cout << "THERE ARENT";

	47.	Дано пятизначное число. Цифры на четных позициях занулить. Например, из 12345 
	получается число 10305.
	int x;
	cin >> x;
	cout << (x / 10000 * 10000)+ ((x % 1000 / 100)*100) + (x % 10);
	
	48.	Даны два трехзначных числа. Найдите шестизначное число, образованное из двух данных
	чисел путем дописывания второго числа к первому справа.
	*/ ;
	int x, y;
	cin >> x >> y;
	cout << x * 1000 + y;


	return 0;

}