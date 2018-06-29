#include "Vec2.hpp"
#include "Vec3.hpp"

#include <string>

using namespace zyx; 
using namespace std;

void compare(bool condition) {
	if (condition) {
		std::cout << "[o] compare success" << std::endl;
	}
	else {
		std::cout << "[x] compare failed" << std::endl;
	}
}

int main() {

	Vec3i v1;
	Vec3i v2(1, 2, 3);
	Vec3i v3(9, 2, 5);

 	v1 = v2.cross(v3);

	cout << v2.cross(v3) << endl;

	/*
	Vec3<int> v4(1.3, 2.6, 3.7);
	Vec3<int> v5(4, 5, 6);
	Vec3<int> v6(0, 0, 0);
	Vec3f v7;
	Vec3<float> v8(8.0, 5.7, 4.7);

	v4.add(v5);
	v4.print();

	v4.add(5);
	v4.print();
	v6 = v4 - 10;
	v6.print();

	std::cout << v6 << std::endl;
	std::cin >> v7;

	v7.print();

	v7 = v8;

	v7 += v8;

	std::cout << v7 << std::endl;

	cout << "Magnitude: " << v8.magnitude() << endl;
	cout << "Normalized: ( " << v8.normalizex() << ", " << v8.normalizey() << ", " << v8.normalizez() << " )" << endl;
	*/
	system("pause");
	return 0;
}