#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <random>
using namespace std;
void ginom()
{
	int i, n, r = 0;
	char d[255];
	cout << "Введите двоичное число" << endl;
	cin >> d;
	n = strlen(d);
	int* arr = new int[n];
	for (i = 0; i < n; i++) {
	arr[i] = (int)d[i] - (int)'0';
	}
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << " " << endl;
	for (i = 0; i < n; i++) {
		r = r + arr[i] * pow(2, n - i - 1);
	}
	cout << "Десятичное число равно " << r<<"\n";
}
void bin()
{
	int arr[10],k;
	srand(time(NULL));
	cout << "Массив > > > " << endl;

	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		cout << arr[i] << " ";
	}

	sort(arr, arr + 10); 

	cout << endl << "Введите ключ: "; cin >> k;

	bool flag = false;
	int l = 0; 
	int r = 9; 
	int mid;

	while ((l <= r) && (flag != true)) {
		mid = (l + r) / 2; 

		if (arr[mid] == k) flag = true; 
		if (arr[mid] > k) r = mid - 1; 
		else l = mid + 1;
	}

	if (flag) cout << "Ключ " << k << " находится на индексе  " << mid<<"\n";
	else cout << "Мы не нашли ключ " << k << " в массиве \n";

}
void lin()
{
	setlocale(LC_ALL, "rus");

	int ans[10],h = 0,arr[10],k,c=0;

	srand(time(NULL));
	cout << "Массив > > > ";
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		cout << arr[i] << " "; 

	}
	cout << endl << "Введите ключ : "; 
	cin >> k; 
	for (int i = 0; i < 10; i++) {
		if (arr[i] == k) { 
			ans[h++] = i;
			c++;
		}
	}
	cout << "Ключ встречался " << c<<" раз(a)\n";
	if (h != 0) { 
		for (int i = 0; i < h; i++) {
			cout << "Ключ " << k << " находится на индексе  " << ans[i]<<endl; 
		}
	}
	else {
		cout << "Мы не нашли ключ " << k << " в массиве\n";
	}
}
int step(int a,int b)
{
	int c;
	c = pow(a, b);

	return c;
}
int per(int a, int b)
{
	int s = 0;
	for (int i = a; i < b+1; i++)
	{
		s += i;
	}
	return s;
}
int per1(int a, int b)
{
	int s = 0;
	s = (a + b) * b / 2;
	return s;
}
void sov(int a, int b)
{
	int c = 0;
	int s;
	for (int i = a; i <= b; i++) {
		
		s = 0;

		for (int j = 1; j <= i / 2; j++) {
			if (i % j == 0)
				s += j;
		}

		if (s == i) {
			cout << "Совершенное число " << i << endl;
				c++;
		}
	}
	cout << "Их количество в данном диапозоне "<<c<<endl;
}
void chate(int a)
{
	int a1, a2, a3, a4, a5, a6,s,s1;
	a6 = a % 10;
	a5 = (a / 10) % 10;
	a4 = (a / 100) % 10;
	a3 = (a / 1000) % 10;
	a2 = (a / 10000) % 10;
	a1 = a / 100000;
	s = a1 + a2 + a3;
	s1 = a4 + a5 + a6;
	if (s == s1) { cout << "Число " << a << " счастливое :)\n"; }
	else cout<<"Числ " << a <<" несчастливое :( \n";
	
}

void main()
{
	setlocale(LC_ALL, "rus");
	int c,c1,c2;
	int a, b;
	cout << "Будет повторяться пока не равен нулю \n\n";
	c2 = 1;
	while (c2 != 0)
	{
		cout << "\nКакую часть дз выберите 1 или 2 : "; cin >> c2;
		if (c2 == 1)
		{
			cout << "Введите номер задания от 1 до 5 , 4 не сделал : ";
			cin >> c;
			switch (c)
			{
			case 1:
				cout << "Введите число, которое нужно возвести в степень: ";
				cin >> a;
				cout << "Введите показатель степени: ";
				cin >> b;
				cout << "Число " << a << " в степени " << b << " равно " << step(a, b);
				break;
			case 2:
				cout << "Введите начало диапозона: ";
				cin >> a;
				cout << "Введите конец диавозона: ";
				cin >> b;
				cout << "Сумма чисел в диапозоне равна " << per(a, b) << endl;
				cout << "Или, с помощью формулы арифметической пргрессии " << per1(a, b);
				break;
			case 3:
				cout << "Введите начало диапозона: ";
				cin >> a;
				cout << "Введите конец диавозона: ";
				cin >> b;
				sov(a, b);
				break;
			case 5:
				int a, c = 0;
				cout << "Введите шестизначное число: ";
				cin >> a;
				if (a < 1000000 && a > 99999) {
					chate(a);
				}
				else {
					while (c != 1)
					{
						cout << "Вы ввели не шестизначное число!!!\n";
						cout << "Введите шестизначное число: ";
						cin >> a;
						if (a < 1000000 && a > 99999)chate(a); break; ;
					}
				}
				break;
			}
		}
		else if (c2 == 2)
		{
			cout << "\nВведите номер задания от 6 до 8: ";
			cin >> c1;
			switch (c1)
			{
			case 6:
				lin();
				break;
			case 7:
				bin();
				break;
			case 8:
				ginom();
				break;
			}

		}
	}
}