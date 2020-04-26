#include"functions.h"
#include<iostream>

void About_A()
{
	std::cout << "Лабораторна робота студента групи К-15 Бубки Михайла\n\n";
	std::cout << "введiть 2 вектора якi будуть задавати площину в просторi\n";
}
void get_coor(point & F, point & S,vector & vec)
{
	std::cout << "введiть координати 1 точки що задає вектор\n";
	std::cin >> F.x >> F.y >> F.z;
	std::cout << "введiть координати 2 точки що задає вектор\n";
	std::cin >> S.x >> S.y >> S.z;
	vec.x = (S.x - F.x);
	vec.y = (S.y - F.y);
	vec.z = (S.z - F.z);
}
int checkcol(const vector v1,const vector v2)
{
	// вектори колінеарні якщо їх векторний добуток рівний 0;
	double vecprd = v1.y*v2.z - v1.z*v2.y - v1.x*v2.z + v1.z*v2.x + v1.x*v2.y - v1.y*v2.x;    // j  i  k
	if (v1.x / v2.x == v1.z / v2.z == v1.y / v2.y)                                            // x1 y1 z1
	{                                                                                         // x2 y2 z2
		std::cout << "вектори спiвпадають, через них можна провести безлiч площин\n";
		return 0;
	}
	else if (vecprd == 0) return 1;
	else return -1;
}
//bool complan(vector v1, vector v2, vector v3)
//{
//	double prd = v1.x*(v2.y*v3.z - v2.z*v3.y) - v2.x*(v1.y*v3.z - v1.z*v3.y) + v3.x*(v1.y*v2.z - v1.z*v2.y);
//	if (prd == 0) return true;
//	else return false;
//}
int space(point p1, point p2, point p3, point p4, point p5)
{
	double A, B, C, D;
	//Ax + By + Cz + D = 0;
	A = (p2.y - p1.y)*(p3.z - p1.z) - (p2.z - p1.z)*(p3.y - p1.y);
	B = (p2.z - p1.z)*(p3.x - p1.x) - (p2.x - p1.x)*(p3.z - p1.z);
	C = (p2.x - p1.x)*(p3.y - p1.y) - (p2.y - p1.y)*(p3.x - p1.x);
	D = -p1.x*A - p1.y*B - p1.z*C;
	double len1, len2;
	len1 = (A*p4.x + B*p4.y + C*p4.z + D) / sqrt(A*A + B*B + C*C);
	len2 = (A*p5.x + B*p5.y + C*p5.z + D) / sqrt(A*A + B*B + C*C);
	if (len1 == 0 && len2 == 0) return 0;
	else if (len1 == len2) return 1;
	else return -1;
}