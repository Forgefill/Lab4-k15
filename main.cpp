#include<iostream>
#include"functions.h"
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0,b;
	point p1,p2,p3,p4,p5,p6;
	vector v1, v2, v3;
	About_A();
	get_coor(p1, p2,v1);
	get_coor(p3, p4,v2);
	a = checkcol(v1, v2);
	if (a == -1)
	{
		std::cout << "����� ���i ������� ��������� �������� �������\n";
		system("pause");
		return 0;
	}
	std::cout << "������� ������,����i�� ���������� ����� 3-�� �������,\n";
		get_coor(p5, p6, v3);
		b = space(p1, p2, p3, p5, p6);
	if (b == 0) std::cout << "������ �������� ������i\n";
	else if (b == 1) std::cout << "������ ����������� �� �������\n";
	else std::cout << "������ �������� �������\n";
	system("pause");
	return 0;
}