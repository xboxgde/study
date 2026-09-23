#pragma once

struct Point
{
	int x;
	int y;
};

typedef Point* PPoint;

void PrintPoint(PPoint value);
void SetPoint(PPoint value, int n1, int n2);
PPoint AllocPoint();
void FreePoint(PPoint p);
