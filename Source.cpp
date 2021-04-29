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
	cout << "������� �������� �����" << endl;
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
	cout << "���������� ����� ����� " << r<<"\n";
}
void bin()
{
	int arr[10],k;
	srand(time(NULL));
	cout << "������ > > > " << endl;

	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		cout << arr[i] << " ";
	}

	sort(arr, arr + 10); 

	cout << endl << "������� ����: "; cin >> k;

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

	if (flag) cout << "���� " << k << " ��������� �� �������  " << mid<<"\n";
	else cout << "�� �� ����� ���� " << k << " � ������� \n";

}
void lin()
{
	setlocale(LC_ALL, "rus");

	int ans[10],h = 0,arr[10],k,c=0;

	srand(time(NULL));
	cout << "������ > > > ";
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 20;
		cout << arr[i] << " "; 

	}
	cout << endl << "������� ���� : "; 
	cin >> k; 
	for (int i = 0; i < 10; i++) {
		if (arr[i] == k) { 
			ans[h++] = i;
			c++;
		}
	}
	cout << "���� ���������� " << c<<" ���(a)\n";
	if (h != 0) { 
		for (int i = 0; i < h; i++) {
			cout << "���� " << k << " ��������� �� �������  " << ans[i]<<endl; 
		}
	}
	else {
		cout << "�� �� ����� ���� " << k << " � �������\n";
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
			cout << "����������� ����� " << i << endl;
				c++;
		}
	}
	cout << "�� ���������� � ������ ��������� "<<c<<endl;
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
	if (s == s1) { cout << "����� " << a << " ���������� :)\n"; }
	else cout<<"���� " << a <<" ������������ :( \n";
	
}

void main()
{
	setlocale(LC_ALL, "rus");
	int c,c1,c2;
	int a, b;
	cout << "����� ����������� ���� �� ����� ���� \n\n";
	c2 = 1;
	while (c2 != 0)
	{
		cout << "\n����� ����� �� �������� 1 ��� 2 : "; cin >> c2;
		if (c2 == 1)
		{
			cout << "������� ����� ������� �� 1 �� 5 , 4 �� ������ : ";
			cin >> c;
			switch (c)
			{
			case 1:
				cout << "������� �����, ������� ����� �������� � �������: ";
				cin >> a;
				cout << "������� ���������� �������: ";
				cin >> b;
				cout << "����� " << a << " � ������� " << b << " ����� " << step(a, b);
				break;
			case 2:
				cout << "������� ������ ���������: ";
				cin >> a;
				cout << "������� ����� ���������: ";
				cin >> b;
				cout << "����� ����� � ��������� ����� " << per(a, b) << endl;
				cout << "���, � ������� ������� �������������� ��������� " << per1(a, b);
				break;
			case 3:
				cout << "������� ������ ���������: ";
				cin >> a;
				cout << "������� ����� ���������: ";
				cin >> b;
				sov(a, b);
				break;
			case 5:
				int a, c = 0;
				cout << "������� ������������ �����: ";
				cin >> a;
				if (a < 1000000 && a > 99999) {
					chate(a);
				}
				else {
					while (c != 1)
					{
						cout << "�� ����� �� ������������ �����!!!\n";
						cout << "������� ������������ �����: ";
						cin >> a;
						if (a < 1000000 && a > 99999)chate(a); break; ;
					}
				}
				break;
			}
		}
		else if (c2 == 2)
		{
			cout << "\n������� ����� ������� �� 6 �� 8: ";
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