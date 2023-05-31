#include "Food.h"


Food::Food(std::string name, float price, float weight)
{
	_name = name;
	_price = price;
	_weight = weight;
	_condition = 100.0f;
}

Bread::Bread(std::string name, float price, float weight, std::string type) : Food(name,price,weight)
{
	_typeOfBread = type;
}

Milk::Milk(std::string name, float price, float weight, int fat) : Food(name, price, weight)
	{
	   _fatPercent = fat;
	}

void Food::ShowData()
{
	std::cout << "Name: " << _name << "\n";
	std::cout << "Condition: " << _condition << "\n";
	std::cout << "Price: " << _price << "\n";
	std::cout << "Weight: " << _weight << "\n";
}

void Bread::ShowData()
{
	Food::ShowData();
	std::cout << "Tayp of Bread: " << _typeOfBread << "\n";
}

void Milk::ShowData()
{
	Food::ShowData();
	std::cout << "Fat Percent: " << _fatPercent << "\n";
}