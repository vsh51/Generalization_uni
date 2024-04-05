#include "HeaderOld.h"
#include "HeaderNew.h"
#include "ListTempl.h"
#include "ArrayTempl.h"
#include <iostream>

using std::cout;

int main()
{
	const int n = 6;
	int arr[n] = { 3, 2, 1, 8, 15, 44 };

	List<int> lst_arr(arr, n);
	Array<int> arr_arr(arr, n);

	cout << "Sort array based container\n";
	SortSuccession([](int a, int b) {return a > b; }, arr_arr.begin(), n);
	PrintSuccession(arr_arr.begin(), arr_arr.end());

	cout << "Sort array based container\n";
	SortSuccession([](int a, int b) {return a > b; }, lst_arr.begin(), n);
	PrintSuccession(lst_arr.begin(), lst_arr.end());

	return 0;
}