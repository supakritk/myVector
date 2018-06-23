#include "Vec3.hpp"

namespace zyx {

	template<class T>
	Vec3<T>::Vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	template<class T>
	Vec3<T>::Vec3(T input_x, T input_y, T input_z) :x(input_x), y(input_y), z(input_z) { }

	template<class T>
	Vec3<T>::~Vec3() {	}

	template<class T>
	void Vec3<T>::print() const {
		std::cout << "vector3: (" << x << ", " << y << ", " << z << ")" << std::endl;
	}

	template<class T>
	Vec3<T>& Vec3<T>::add(const float& scale) {
		x += scale;
		y += scale;
		z += scale;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::minus(const float& scale) {
		x -= scale;
		y -= scale;
		z -= scale;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::times(const float& scale) {
		x *= scale;
		y *= scale;
		z *= scale;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::devide(const float& scale) {
		x /= scale;
		y /= scale;
		z /= scale;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::add(const Vec3<T>& other) {
		x += other.x;
		y += other.y;
		z += other.z;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::minus(const Vec3<T>& other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::times(const Vec3<T>& other) {
		x *= other.x;
		y *= other.y;
		z *= other.z;

		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::devide(const Vec3<T>& other) {
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	template<class T>
	Vec3<T> operator+(Vec3<T> origin, float scale) {
		return origin.add(scale);
	}

	template<class T>
	Vec3<T> operator-(Vec3<T> origin, float scale) {
		return origin.minus(scale);
	}

	template<class T>
	Vec3<T> operator*(Vec3<T> origin, float scale) {
		return origin.times(scale);
	}

	template<class T>
	Vec3<T> operator/(Vec3<T> origin, float scale) {
		return origin.devide(scale);
	}

	template<class T>
	Vec3<T> operator+(Vec3<T> left, Vec3<T> right) {
		return left.add(right);
	}

	template<class T>
	Vec3<T> operator-(Vec3<T> left, Vec3<T> right) {
		return left.minus(right);
	}

	template<class T>
	Vec3<T> operator*(Vec3<T> left, Vec3<T> right) {
		return left.times(right);
	}

	template<class T>
	Vec3<T> operator/(Vec3<T> left, Vec3<T> right) {
		return left.devide(right);
	}

	template<class T>
	std::ostream & operator<<(std::ostream & ostream, const Vec3<T>& other) {
		return ostream << "( " << other.x << ", " << other.y << ", " << other.z << " )";
	}

	template<class T>
	std::istream & operator>>(std::istream & istream, Vec3<T>& other) {
		istream >> other.x >> other.y >> other.z;
		return istream;
	}

	template<class T>
	void Vec3<T>::operator=(const Vec3<T> & other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}

	template<class T>
	bool Vec3<T>::operator==(const Vec3<T>& other) const {
		return ((this->x == other.x) && (this->y == other.y) && (this->z == other.z));
	}
	template<class T>
	bool Vec3<T>::operator!=(const Vec3<T>& other) const {
		return ((this->x != other.x) && (this->y != other.y) && (this->z != other.z));
	}
	template<class T>
	bool Vec3<T>::operator>=(const Vec3<T>& other) const {
		return ((this->x >= other.x) && (this->y >= other.y) && (this->z >= other.z));
	}
	template<class T>
	bool Vec3<T>::operator<=(const Vec3<T>& other) const {
		return ((this->x <= other.x) && (this->y <= other.y) && (this->z <= other.z));
	}
	template<class T>
	bool Vec3<T>::operator>(const Vec3<T>& other) const {
		return ((this->x > other.x) && (this->y > other.y) && (this->z > other.z));
	}
	template<class T>
	bool Vec3<T>::operator<(const Vec3<T>& other) const {
		return ((this->x < other.x) && (this->y < other.y) && (this->z < other.z));
	}

	template<class T>
	Vec3<T>& Vec3<T>::operator+=(const float & scale) {
		this->x += scale;
		this->y += scale;
		this->z += scale;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator-=(const float & scale) {
		this->x -= scale;
		this->y -= scale;
		this->z -= scale;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator*=(const float & scale) {
		this->x *= scale;
		this->y *= scale;
		this->z *= scale;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator/=(const float & scale) {
		this->x /= scale;
		this->y /= scale;
		this->z /= scale;
		return *this;
	}

	template<class T>
	Vec3<T>& Vec3<T>::operator+=(const Vec3<T>& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator-=(const Vec3<T>& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator*=(const Vec3<T>& other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;
		return *this;
	}
	template<class T>
	Vec3<T>& Vec3<T>::operator/=(const Vec3<T>& other) {
		this->x /= other.x;
		this->y /= other.y;
		this->z /= other.z;
		return *this;
	}
	template<class T>
	int Vec3<T>::dot(const Vec3<T> & other) {
		return ((x * other.x) + (y * other.y) + (z * other.z));
	}
	template<class T>
	Vec3<T>& Vec3<T>::cross(const Vec3<T> & other) {
		int crossx = (y * other.z) - (z * other.y);
		int crossy = (z * other.x) - (x * other.z);
		int crossz = (x * other.y) - (y * other.x);

		x = crossx;
		y = crossy;
		z = crossz;

		return *this;
	}
	template<class T>
	int Vec3<T>::magnitude() {
		return std::sqrt(magnitudeSquare());
	}
	template<class T>
	int Vec3<T>::magnitudeSquare() {
		return (x * x) + (y * y) + (z * z);
	}
	template<class T>
	double Vec3<T>::normalizex() {
		return x / magnitude();
	}
	template<class T>
	double Vec3<T>::normalizey() {
		return y / magnitude();
	}
	template<class T>
	double Vec3<T>::normalizez() {
		return z / magnitude();
	}
	template<class T>
	double Vec3<T>::angleTo(Vec3<T> other) {
		return std::acos(this->dot(other) / (this->magnitude() * other.magnitude()));
	}

	// Explicit Instantiation
	template class Vec3<int>; 
	template class Vec3<float>; 
	template class Vec3<double>;

	template Vec3<int> operator+(Vec3<int> origin, float scale);
	template Vec3<int> operator-(Vec3<int> origin, float scale);
	template Vec3<int> operator*(Vec3<int> origin, float scale);
	template Vec3<int> operator/(Vec3<int> origin, float scale);
	template Vec3<int> operator+(Vec3<int> left, Vec3<int> right);
	template Vec3<int> operator-(Vec3<int> left, Vec3<int> right);
	template Vec3<int> operator*(Vec3<int> left, Vec3<int> right);
	template Vec3<int> operator/(Vec3<int> left, Vec3<int> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec3<int>& other);
	template std::istream& operator>> (std::istream& istream, Vec3<int>& other);

	template Vec3<float> operator+(Vec3<float> origin, float scale);
	template Vec3<float> operator-(Vec3<float> origin, float scale);
	template Vec3<float> operator*(Vec3<float> origin, float scale);
	template Vec3<float> operator/(Vec3<float> origin, float scale);
	template Vec3<float> operator+(Vec3<float> left, Vec3<float> right);
	template Vec3<float> operator-(Vec3<float> left, Vec3<float> right);
	template Vec3<float> operator*(Vec3<float> left, Vec3<float> right);
	template Vec3<float> operator/(Vec3<float> left, Vec3<float> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec3<float>& other);
	template std::istream& operator>> (std::istream& istream, Vec3<float>& other);

	template Vec3<double> operator+(Vec3<double> origin, float scale);
	template Vec3<double> operator-(Vec3<double> origin, float scale);
	template Vec3<double> operator*(Vec3<double> origin, float scale);
	template Vec3<double> operator/(Vec3<double> origin, float scale);
	template Vec3<double> operator+(Vec3<double> left, Vec3<double> right);
	template Vec3<double> operator-(Vec3<double> left, Vec3<double> right);
	template Vec3<double> operator*(Vec3<double> left, Vec3<double> right);
	template Vec3<double> operator/(Vec3<double> left, Vec3<double> right);
	template std::ostream& operator<< (std::ostream& ostream, const Vec3<double>& other);
	template std::istream& operator>> (std::istream& istream, Vec3<double>& other);
}
