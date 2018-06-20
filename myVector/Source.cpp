#include "Vec2.hpp"
#include "Vec3.hpp"

#include <string>

using namespace zyx;

void testFunction() {
	Vec2 v1(1, 2);
	Vec2 v2(3, 4);

	v1.print();
	v2.print();

	v1.add(v2);
	v1.print();

	v2.times(2);
	v2.print();

	v1.minus(v2);
	v1.print();

	v1.add(v2).add(Vec2(1, 9)).add(Vec2(2, 10));
	v1.print();

	Vec2 v3(1, 1);
	v1 = v3 + v3;
	v1.print();

	v1 = v1 * v1;
	v1.print();

	v1 = v1 - v3;
	v1.print();
}

void compare(bool condition) {
	if (condition) {
		std::cout << "[o] compare success" << std::endl;
	}
	else {
		std::cout << "[x] compare failed" << std::endl;
	}
}

int main() {
	Vec2 v1(1, 2);
	Vec2 v2(4, 6);

	//testFunction();

	compare((v1 + v2) == Vec2(5, 6));
	compare((v2 - v1) == Vec2(3, 2));
	compare((v1 * 2) == Vec2(2, 4));
	compare((v2 * 2) == Vec2(8, 12));
	compare((v2 / 2) == Vec2(2, 3));

	std::cout << v1.dot(v2) << std::endl;
	std::cout << v1.cross(v2) << std::endl;

	Vec2 v3(3, 4);
	v3.print();
	
	std::cout << v3.eulerangle() << std::endl;


	std::cout << v3.magnitude() << std::endl;
	std::cout << v3.mag2() << std::endl;

	v3.normalized();
	v3.print();

	Vec3 v4(1, 2, 3);
	Vec3 v5(4, 5, 6);
	Vec3 v6(0, 0, 0);
	Vec3 v7;

	v4.add(v5);
	v4.print();

	v4.add(5);
	v4.print();
	v6 = v4 - 10;
	v6.print();

	std::cout << v6 << std::endl;
	std::cin >> v7;

	v7.print();

	system("pause");
	return 0;
}