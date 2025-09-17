#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t1(1, 12, 59);
	t1++;
	t1.showTime();
	t1--;
	t1.showTime();

	cout << "--------------------------\n";

	Time t2;
	cin >> t2;
	cout << "Time: " << t2 << endl;
	cout << "T2 + 5 = " << (t2 + 5) << endl;
	cout << "T2 - 5 = " << (t2 - 5) << endl;
}