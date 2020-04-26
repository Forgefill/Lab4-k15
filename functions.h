#pragma once

struct point { double x; double y; double z; };
struct vector { double x; double y; double z; };
void About_A();
void get_coor(point &, point &, vector &);
int checkcol(const vector, const vector);
int space(point, point, point, point, point);