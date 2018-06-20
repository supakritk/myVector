#include "Vec4.hpp"

namespace zyx {

	Vec4::Vec4() {
		w = 0;
		x = 0;
		y = 0;
		z = 0;
	}

	Vec4::Vec4(int input_w, int input_x, int input_y, int input_z) :w(input_w), x(input_x), y(input_y), z(input_z) { }

	Vec4::~Vec4() {	}

	void Vec4::print() const {
		std::cout << "vector4: ( " << w << ", " << x << ", " << y << ", " << z << ")" << std::endl;
	}

	Vec4& Vec4::add(const int& scale) {
		w += scale;
		x += scale;
		y += scale;
		z += scale;
		return *this;
	}

	Vec4& Vec4::minus(const int& scale) {
		w -= scale;
		x -= scale;
		y -= scale;
		z -= scale;
		return *this;
	}

	Vec4& Vec4::times(const int& scale) {
		w *= scale;
		x *= scale;
		y *= scale;
		z *= scale;
		return *this;
	}

	Vec4& Vec4::devide(const int& scale) {
		w /= scale;
		x /= scale;
		y /= scale;
		z /= scale;
		return *this;
	}

	Vec4& Vec4::add(const Vec4& other) {
		w += other.w;
		x += other.x;
		y += other.y;
		z += other.z;
		return *this;
	}

	Vec4& Vec4::minus(const Vec4& other) {
		w -= other.w;
		x -= other.x;
		y -= other.y;
		z -= other.z;
		return *this;
	}

	Vec4& Vec4::times(const Vec4& other) {
		w *= other.w;
		x *= other.x;
		y *= other.y;
		z *= other.z;
		return *this;
	}

	Vec4& Vec4::devide(const Vec4& other) {
		w /= other.w;
		x /= other.x;
		y /= other.y;
		z /= other.z;
		return *this;
	}

	Vec4 operator+(Vec4 origin, int scale) {
		return origin.add(scale);
	}

	Vec4 operator-(Vec4 origin, int scale) {
		return origin.minus(scale);
	}

	Vec4 operator*(Vec4 origin, int scale) {
		return origin.times(scale);
	}

	Vec4 operator/(Vec4 origin, int scale) {
		return origin.devide(scale);
	}

	Vec4 operator+(Vec4 left, Vec4 right) {
		return left.add(right);
	}

	Vec4 operator-(Vec4 left, Vec4 right) {
		return left.minus(right);
	}

	Vec4 operator*(Vec4 left, Vec4 right) {
		return left.times(right);
	}

	Vec4 operator/(Vec4 left, Vec4 right) {
		return left.devide(right);
	}

	std::ostream & operator<<(std::ostream & ostream, const Vec4& other) {
		return ostream << "( " << other.w << ", " << other.x << ", " << other.y << ", " << other.z << " )";
	}

	std::istream & operator>>(std::istream & istream, Vec4& other)
	{
		istream >> other.w >> other.x >> other.y >> other.z;
		return istream;
	}

	void Vec4::operator=(const Vec4 & other) {
		this->w = other.w;
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}

	bool Vec4::operator==(const Vec4& other) const {
		return ((this->w == other.w) && (this->x == other.x) && (this->y == other.y) && (this->z == other.z));
	}
	bool Vec4::operator!=(const Vec4& other) const {
		return ((this->w != other.w) && (this->x != other.x) && (this->y != other.y) && (this->z != other.z));
	}
	bool Vec4::operator>=(const Vec4& other) const {
		return ((this->w >= other.w) && (this->x >= other.x) && (this->y >= other.y) && (this->z >= other.z));
	}
	bool Vec4::operator<=(const Vec4& other) const {
		return ((this->w <= other.w) && (this->x <= other.x) && (this->y <= other.y) && (this->z <= other.z));
	}
	bool Vec4::operator>(const Vec4& other) const {
		return ((this->w > other.w) && (this->x > other.x) && (this->y > other.y) && (this->z > other.z));
	}
	bool Vec4::operator<(const Vec4& other) const {
		return ((this->w < other.w) && (this->x < other.x) && (this->y < other.y) && (this->z < other.z));
	}

	Vec4& Vec4::operator+=(const int & scale) {
		this->w += scale;
		this->x += scale;
		this->y += scale;
		this->z += scale;
		return *this;
	}
	Vec4& Vec4::operator-=(const int & scale) {
		this->w -= scale;
		this->x -= scale;
		this->y -= scale;
		this->z -= scale;
		return *this;
	}
	Vec4& Vec4::operator*=(const int & scale) {
		this->w *= scale;
		this->x *= scale;
		this->y *= scale;
		this->z *= scale;
		return *this;
	}
	Vec4& Vec4::operator/=(const int & scale) {
		this->w /= scale;
		this->x /= scale;
		this->y /= scale;
		this->z /= scale;
		return *this;
	}

	Vec4& Vec4::operator+=(const Vec4& other) {
		this->w += other.w;
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
		return *this;
	}
	Vec4& Vec4::operator-=(const Vec4& other) {
		this->w -= other.w;
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
		return *this;
	}
	Vec4& Vec4::operator*=(const Vec4& other) {
		this->w *= other.w;
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
		return *this;
	}
	Vec4& Vec4::operator/=(const Vec4& other) {
		this->w /= other.w;
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
		return *this;
	}
}
