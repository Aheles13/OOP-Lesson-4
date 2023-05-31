#include <iostream>
#include <iterator>
#include <vector>
#include <string>
//#include "Client.h"
#include "Food.h"
#include "Supermarket.h"

//class Client 
//{
//private:
//	int _id;
//
//public:
//	void ShowId()
//	{
//		std::cout << "ID: " << _id << "\n";
//	}
//};












int main() {
	setlocale(LC_ALL, "Ru");

	/*Client *client = new Client(13);
	client->ShowId();*/

	//Задача 1. Супермаркет и поставщики.

	
	Bread* bread = new Bread("Bread", 25.9f, 1.25f, "White");
	Milk* milk = new Milk("Milk", 70.0f, 1.0f, 1);
	
	Supermarket* supermarket = new Supermarket();
	
	supermarket->AddProduct(bread);
	supermarket->AddProduct(milk);
	supermarket->ShowDataProducts();

	std::cout << "\n\n";

	supermarket->Buy("Milk");
	supermarket->ShowDataProducts();


	return 0;
}