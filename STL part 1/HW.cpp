#include <iostream>
#include <list>
using namespace std;

class Laptop
{
	int battery_power;
	string brand;
public:
	Laptop(int b_p, string b) { battery_power = b_p; brand = b; }

	int SetB_P(int b_p) { battery_power = b_p; }
	string SetBrand(string b) { brand = b; }

	int GetB_P() { return battery_power; }
	string GetBrand() { return brand; }

	void Write() { cout << "Battery power: " << battery_power << " mA " << "\nBrand: " << brand << endl; }

	friend ostream& operator<<(ostream& os, Laptop it)
	{
		os << "Battery power: " << it.battery_power << " mA " << "\nBrand: " << it.brand << endl;
		return os;
	}
};

int main()
{
	list<Laptop> arr;
	arr.push_front(Laptop(5400, "Asus"));
	arr.push_front(Laptop(8200, "Lenovo"));

	cout << "<------><<1>><------>\n";
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		(*it).Write();
	}
	cout << "<------------------->\n\n";

	arr.push_back(Laptop(3100, "Xiaomi"));
	arr.push_back(Laptop(6300, "Huawei"));

	cout << "<------><<2>><------>\n";
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it;
	}
	cout << "<------------------->\n";
}