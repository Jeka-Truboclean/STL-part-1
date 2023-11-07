#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) { x = a; y = b; }
	int GetX() { return x; }
	int GetY() { return y; }
	void Input() { x = rand() % 20; y = rand() % 10; }
};

int main()
{
	list<Point> arr;
	arr.push_back(Point(1,2));
	arr.push_back(Point(3, 4));
	arr.push_back(Point(10, 20));
	arr.push_back(Point(12, 22));

	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << (*it).GetX() << " - " << (*it).GetY() << endl;
	}
	cout << endl;
}