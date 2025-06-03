#include <iostream>
#include "TempClass.h"
using namespace std;

namespace awe {
	//int max(int i1, int i2) {
	//	return (i1 > i2) ? i1 : i2;
	//}

	//float max(float i1, float i2) {
	//	return (i1 > i2) ? i1 : i2;
	//}

	template<typename T, typename E>
	T max(T i1, E i2) {
		return (i1 > i2) ? i1 : i2;
	}
}

int main() {

	cout << awe::max(2.3f, 5.6f) << endl;
	cout << awe::max<int>(2, 5) << endl; // not required to specify datatype for methods, but can be done if needed
	cout << awe::max(2, 5.6f) << endl; // order matters in this case, returns as an int on this line
	cout << awe::max(5.6f, 2) << endl; // returns as a float on this line

	//TempClass<int> t1(2, 3); Need to specify if different than default/no default provided
	TempClass<> t1(2, 3);
	TempClass<float> t2(2.3f, 3.6f);

	TempArray<string, 10> stringArray; // Can define both the variable type and the size when creating instances
	stringArray[2] = "Hello World!"; // Returns what is already in 3rd position, but doesn't write new string to it.
	cout << stringArray[2] << endl;
}