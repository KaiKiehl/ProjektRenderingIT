#pragma once
#include <vector>
class vectorfND :
	public std::vector<float>
{
public:
	vectorfND(std::vector<float> v);
	vectorfND();
	float mag();
	
	void print();
	vectorfND operator+(vectorfND&);
	vectorfND operator-(vectorfND&);
	vectorfND abs();
};

