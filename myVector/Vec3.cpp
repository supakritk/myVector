#include "Vec3.hpp"

namespace zyx {

	Vec3::Vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	Vec3::Vec3(int input_x, int input_y, int input_z) :x(input_x), y(input_y), z(input_z) { }

	Vec3::~Vec3() {	}

	void Vec3::print() const {
		std::cout << "vector3: (" << x << ", " << y << ", " << z << ")" << std::endl;
	}

	Vec3& Vec3::add(const int& scale) {
		x += scale;
		y += scale;
		z += scale;

		return *this;
	}

	Vec3& Vec3::minus(const int& scale) {
		x -= scale;
		y -= scale;
		z -= scale;

		return *this;
	}

	Vec3& Vec3::times(const int& scale) {
		x *= scale;
		y *= scale;
		z *= scale;

		return *this;
	}

	Vec3& Vec3::devide(const int& scale) {
		x /= scale;
		y /= scale;
		z /= scale;

		return *this;
	}

	Vec3& Vec3::add(const Vec3& other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	Vec3& Vec3::minus(const Vec3& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	Vec3& Vec3::times(const Vec3& other) {
		x *= other.x;
		y *= other.y;
		z *= other.z;

		return *this;
	}

	Vec3& Vec3::devide(const Vec3& other) {
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	Vec3 operator+(Vec3 origin, int scale) {
		return origin.add(scale);
	}

	Vec3 operator-(Vec3 origin, int scale) {
		return origin.minus(scale);
	}

	Vec3 operator*(Vec3 origin, int scale) {
		return origin.times(scale);
	}

	Vec3 operator/(Vec3 origin, int scale) {
		return origin.devide(scale);
	}

	Vec3 operator+(Vec3 left, Vec3 right) {
		return left.add(right);
	}

	Vec3 operator-(Vec3 left, Vec3 right) {
		return left.minus(right);
	}

	Vec3 operator*(Vec3 left, Vec3 right) {
		return left.times(right);
	}

	Vec3 operator/(Vec3 left, Vec3 right) {
		return left.devide(right);
	}

	std::ostream & operator<<(std::ostream & ostream, const Vec3& other) {
		return ostream << "( " << other.x << ", " << other.y << ", " << other.z << " )";
	}

	std::istream & operator>>(std::istream & istream, Vec3& other)
	{
		istream >> other.x >> other.y >> other.z;
		return istream;
	}

	void Vec3::operator=(const Vec3 & other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}

	bool Vec3::operator==(const Vec3& other) const {
		return ((this->x == other.x) && (this->y == other.y) && (this->z == other.z));
	}
	bool Vec3::operator!=(const Vec3& other) const {
		return ((this->x != other.x) && (this->y != other.y) && (this->z != other.z));
	}
	bool Vec3::operator>=(const Vec3& other) const {
		return ((this->x >= other.x) && (this->y >= other.y) && (this->z >= other.z));
	}
	bool Vec3::operator<=(const Vec3& other) const {
		return ((this->x <= other.x) && (this->y <= other.y) && (this->z <= other.z));
	}
	bool Vec3::operator>(const Vec3& other) const {
		return ((this->x > other.x) && (this->y > other.y) && (this->z > other.z));
	}
	bool Vec3::operator<(const Vec3& other) const {
		return ((this->x < other.x) && (this->y < other.y) && (this->z < other.z));
	}

	Vec3& Vec3::operator+=(const int & scale) {
		this->x += scale;
		this->y += scale;
		this->z += scale;
		return *this;
	}
	Vec3& Vec3::operator-=(const int & scale) {
		this->x -= scale;
		this->y -= scale;
		this->z -= scale;
		return *this;
	}
	Vec3& Vec3::operator*=(const int & scale) {
		this->x *= scale;
		this->y *= scale;
		this->z *= scale;
		return *this;
	}
	Vec3& Vec3::operator/=(const int & scale) {
		this->x /= scale;
		this->y /= scale;
		this->z /= scale;
		return *this;
	}

	Vec3& Vec3::operator+=(const Vec3& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
		return *this;
	}
	Vec3& Vec3::operator-=(const Vec3& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
		return *this;
	}
	Vec3& Vec3::operator*=(const Vec3& other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
		return *this;
	}
	Vec3& Vec3::operator/=(const Vec3& other) {
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
		return *this;
	}
}
