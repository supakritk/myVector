#include "Vec4.hpp"

namespace zyx {

	template<class T>
	Vec4<T>::Vec4() {
		x = 0;
		y = 0;
		z = 0;
		a = 0;
	}

	template<class T>
	Vec4<T>::Vec4(T input_x, T input_y, T input_z, T input_a) :x(input_x), y(input_y), z(input_z), a(input_a) { }

	template<class T>
	Vec4<T>::~Vec4() {	}

	template<class T>
	void Vec4<T>::print() const {
		std::cout << "vector4: (" << x << ", " << y << ", " << z << ", " << a << ")" << std::endl;
	}

	template<class T>
	Vec4<T>& Vec4<T>::add(const float& scale) {
		x += scale;
		y += scale;
		z += scale;
		a += scale;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::minus(const float& scale) {
		x -= scale;
		y -= scale;
		z -= scale;
		a -= scale;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::times(const float& scale) {
		x *= scale;
		y *= scale;
		z *= scale;
		a *= scale;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::devide(const float& scale) {
		x /= scale;
		y /= scale;
		z /= scale;
		a /= scale;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::add(const Vec4<T>& other) {
		x += other.x;
		y += other.y;
		z += other.z;
		a += other.a;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::minus(const Vec4<T>& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
		a -= other.a;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::times(const Vec4<T>& other) {
		x *= other.x;
		y *= other.y;
		z *= other.z;
		a *= other.a;

		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::devide(const Vec4<T>& other) {
		x /= other.x;
		y /= other.y;
		z /= other.z;
		a /= other.a;

		return *this;
	}

	template<class T>
	Vec4<T> operator+(Vec4<T> origin, float scale) {
		return origin.add(scale);
	}

	template<class T>
	Vec4<T> operator-(Vec4<T> origin, float scale) {
		return origin.minus(scale);
	}

	template<class T>
	Vec4<T> operator*(Vec4<T> origin, float scale) {
		return origin.times(scale);
	}

	template<class T>
	Vec4<T> operator/(Vec4<T> origin, float scale) {
		return origin.devide(scale);
	}

	template<class T>
	Vec4<T> operator+(Vec4<T> left, Vec4<T> right) {
		return left.add(right);
	}

	template<class T>
	Vec4<T> operator-(Vec4<T> left, Vec4<T> right) {
		return left.minus(right);
	}

	template<class T>
	Vec4<T> operator*(Vec4<T> left, Vec4<T> right) {
		return left.times(right);
	}

	template<class T>
	Vec4<T> operator/(Vec4<T> left, Vec4<T> right) {
		return left.devide(right);
	}

	template<class T>
	std::ostream & operator<<(std::ostream & ostream, const Vec4<T>& other) {
		return ostream << "( " << other.x << ", " << other.y << ", " << other.z << ", " << other.a << " )";
	}

	template<class T>
	std::istream & operator>>(std::istream & istream, Vec4<T>& other) {
		std::cout << "Input X : ";
		istream >> other.x;
		std::cout << "Input Y : ";
		istream >> other.y;
		std::cout << "Input Z : ";
		istream >> other.z;
		std::cout << "Input A : ";
		istream >> other.a;
		return istream;
	}

	template<class T>
	void Vec4<T>::operator=(const Vec4<T> & other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
		this->a = other.a;
	}

	template<class T>
	bool Vec4<T>::operator==(const Vec4<T>& other) const {
		return ((this->x == other.x) && (this->y == other.y) && (this->z == other.z) && (this->a == other.a));
	}
	template<class T>
	bool Vec4<T>::operator!=(const Vec4<T>& other) const {
		return ((this->x != other.x) && (this->y != other.y) && (this->z != other.z) && (this->a != other.a));
	}
	template<class T>
	bool Vec4<T>::operator>=(const Vec4<T>& other) const {
		return ((this->x >= other.x) && (this->y >= other.y) && (this->z >= other.z) && (this->a >= other.a));
	}
	template<class T>
	bool Vec4<T>::operator<=(const Vec4<T>& other) const {
		return ((this->x <= other.x) && (this->y <= other.y) && (this->z <= other.z) && (this->a <= other.a));
	}
	template<class T>
	bool Vec4<T>::operator>(const Vec4<T>& other) const {
		return ((this->x > other.x) && (this->y > other.y) && (this->z > other.z) && (this->a > other.a));
	}
	template<class T>
	bool Vec4<T>::operator<(const Vec4<T>& other) const {
		return ((this->x < other.x) && (this->y < other.y) && (this->z < other.z) && (this->a < other.a));
	}

	template<class T>
	Vec4<T>& Vec4<T>::operator+=(const float & scale) {
		this->x += scale;
		this->y += scale;
		this->z += scale;
		this->a += scale;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator-=(const float & scale) {
		this->x -= scale;
		this->y -= scale;
		this->z -= scale;
		this->a -= scale;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator*=(const float & scale) {
		this->x *= scale;
		this->y *= scale;
		this->z *= scale;
		this->a *= scale;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator/=(const float & scale) {
		this->x /= scale;
		this->y /= scale;
		this->z /= scale;
		this->a /= scale;
		return *this;
	}

	template<class T>
	Vec4<T>& Vec4<T>::operator+=(const Vec4<T>& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
		this->a += other.z;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator-=(const Vec4<T>& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
		this->a -= other.z;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator*=(const Vec4<T>& other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
		this->a *= other.z;
		return *this;
	}
	template<class T>
	Vec4<T>& Vec4<T>::operator/=(const Vec4<T>& other) {
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
		this->a /= other.z;
		return *this;
	}
	template<class T>
	int Vec4<T>::dot(const Vec4<T> & other) {
		return ((x * other.x) + (y * other.y) + (z * other.z) + (a * other.a));
	}
	template<class T>
	Vec4<T>& Vec4<T>::cross(Vec4 & other) {
		int crossx = (y * other.z) - (z * other.y);
		int crossy = (z * other.x) - (x * other.z);
		int crossz = (x * other.y) - (y * other.x);

		x = crossx;
		y = crossy;
		z = crossz;

		return *this;
	}
	template<class T>
	int Vec4<T>::magnitude() {
		return std::sqrt(magnitudeSquare());
	}
	template<class T>
	int Vec4<T>::magnitudeSquare() {
		return (x * x) + (y * y) + (z * z) + (a * a);
	}
	template<class T>
	double Vec4<T>::normalizex() {
		return x / magnitude();
	}
	template<class T>
	double Vec4<T>::normalizey() {
		return y / magnitude();
	}
	template<class T>
	double Vec4<T>::normalizez() {
		return z / magnitude();
	}
	template<class T>
	double Vec4<T>::normalizea() {
		return a / magnitude();
	}
	template<class T>
	double Vec4<T>::angleTo(Vec4<T> other) {
		return std::acos(this->dot(other) / (this->magnitude() * other.magnitude()));
	}

	// Explicit Instantiation
	template class Vec4<int>;
	template class Vec4<float>;
	template class Vec4<double>;

	template Vec4<int> operator+(Vec4<int> origin, float scale);
	template Vec4<int> operator-(Vec4<int> origin, float scale);
	template Vec4<int> operator*(Vec4<int> origin, float scale);
	template Vec4<int> operator/(Vec4<int> origin, float scale);
	template Vec4<int> operator+(Vec4<int> left, Vec4<int> right);
	template Vec4<int> operator-(Vec4<int> left, Vec4<int> right);
	template Vec4<int> operator*(Vec4<int> left, Vec4<int> right);
	template Vec4<int> operator/(Vec4<int> left, Vec4<int> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec4<int>& other);
	template std::istream& operator>> (std::istream& istream, Vec4<int>& other);

	template Vec4<float> operator+(Vec4<float> origin, float scale);
	template Vec4<float> operator-(Vec4<float> origin, float scale);
	template Vec4<float> operator*(Vec4<float> origin, float scale);
	template Vec4<float> operator/(Vec4<float> origin, float scale);
	template Vec4<float> operator+(Vec4<float> left, Vec4<float> right);
	template Vec4<float> operator-(Vec4<float> left, Vec4<float> right);
	template Vec4<float> operator*(Vec4<float> left, Vec4<float> right);
	template Vec4<float> operator/(Vec4<float> left, Vec4<float> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec4<float>& other);
	template std::istream& operator>> (std::istream& istream, Vec4<float>& other);

	template Vec4<double> operator+(Vec4<double> origin, float scale);
	template Vec4<double> operator-(Vec4<double> origin, float scale);
	template Vec4<double> operator*(Vec4<double> origin, float scale);
	template Vec4<double> operator/(Vec4<double> origin, float scale);
	template Vec4<double> operator+(Vec4<double> left, Vec4<double> right);
	template Vec4<double> operator-(Vec4<double> left, Vec4<double> right);
	template Vec4<double> operator*(Vec4<double> left, Vec4<double> right);
	template Vec4<double> operator/(Vec4<double> left, Vec4<double> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec4<double>& other);
	template std::istream& operator>> (std::istream& istream, Vec4<double>& other);
}
