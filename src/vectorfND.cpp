#include "vectorfND.h"
#include <iostream>
#include <math.h>
typedef unsigned int uint;


Geometryf::vectorfND::vectorfND(std::vector<float> v)
{
	for (uint i = 0; i < v.size(); i++)
		this->push_back(v.at(i));
}

Geometryf::vectorfND::vectorfND()
{
	*this = vector<float>();
}

float Geometryf::vectorfND::mag()
{
	float sum = 0;
	for (uint i = 0; i < this->size(); i++)
		sum += (*this)[i]* (*this)[i];
	return sqrt(sum);
}
void Geometryf::vectorfND::print()
{
	for (uint i = 0; i < this->size(); i++)
		std::cout << (*this)[i] << " ";
}

Geometryf::vectorfND Geometryf::vectorfND::operator+(vectorfND & v1)
{
	uint diff;
	vectorfND returnV;
	if (this->size() <= v1.size())
	{
		diff = v1.size() - this->size();
		for (uint i = 0; i < this->size(); i++)
			returnV.push_back(this->at(i) + v1.at(i));
		for (uint i = this->size(); i < v1.size(); i++)
			returnV.push_back(v1.at(i));
	}
	else
	{
		diff = this->size() - v1.size();
		for (uint i = 0; i < v1.size(); i++)
			returnV.push_back(this->at(i) + v1.at(i));
		for (uint i = v1.size(); i < this->size(); i++)
			returnV.push_back(this->at(i));
	}




	return returnV;
}

Geometryf::vectorfND Geometryf::vectorfND::operator-(vectorfND & v1)
{
	uint diff;
	vectorfND returnV;
	if (this->size() <= v1.size())
	{
		diff = v1.size() - this->size();
		for (uint i = 0; i < this->size(); i++)
			returnV.push_back(this->at(i) - v1.at(i));
		for (uint i = this->size(); i < v1.size(); i++)
			returnV.push_back(-v1.at(i));
	}
	else
	{
		diff = this->size() - v1.size();
		for (uint i = 0; i < v1.size(); i++)
			returnV.push_back(this->at(i) - v1.at(i));
		for (uint i = v1.size(); i < this->size(); i++)
			returnV.push_back(-this->at(i));
	}
	return returnV;
}

Geometryf::vectorfND Geometryf::vectorfND::abs()
{
	vectorfND absVec = vectorfND();
	for (uint i = 0; i < this->size(); i++)
		absVec.push_back(fabs(this->at(i)));

	return absVec;
}
