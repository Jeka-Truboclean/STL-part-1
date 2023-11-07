#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
using namespace std;

int main()
{
	deque<int> arr{ 1,2,3,4,5,6 };
	arr.push_back(7);
	arr.push_front(200);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	arr.pop_back();
	arr.insert(arr.begin() + 1, 100);

	deque<int>::iterator ptr;
	for (ptr = arr.begin(); ptr != arr.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;
}