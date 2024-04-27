#include <iostream> 
using namespace std;
using IntPtrType = int*;
int main()
{
	IntPtrType ptr_a = nullptr, ptr_b = nullptr, * ptr_c = nullptr;
	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";
	ptr_b = new int;
	*ptr_b = 9;
	cout << *ptr_a << " " << *ptr_b << "\n";
	*ptr_b = *ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";
	delete ptr_a;
	ptr_a = ptr_b;
	cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";
	ptr_c = &ptr_a;
	cout << *ptr_c << " " << **ptr_c << "\n";
	delete ptr_a;
	ptr_a = nullptr;
	return 0;
}

//определите какие сообщения программа выводит на экран;
//Я  считаю, что программа выведет:
// 3 3
// 3 9
// 3 3
// 3 3
// 9 3
