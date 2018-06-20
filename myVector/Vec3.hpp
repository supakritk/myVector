#pragma once
#include <iostream>

namespace zyx {

	class Vec3
	{
	public:
		Vec3();
		Vec3(int x, int y, int z);
		~Vec3();

		int x, y, z;

		void print() const;

		// + - * / scalar
		Vec3& add(const int& scale);
		Vec3& minus(const int& scale);
		Vec3& times(const int& scale);
		Vec3& devide(const int& scale);
		
		// + - * / vector
		Vec3& add(const Vec3& other);
		Vec3& minus(const Vec3& other);
		Vec3& times(const Vec3& other);
		Vec3& devide(const Vec3& other);

		//overload oper + - * / scalar
		friend Vec3 operator+(Vec3 origin, int scale);
		friend Vec3 operator-(Vec3 origin, int scale);
		friend Vec3 operator*(Vec3 origin, int scale);
		friend Vec3 operator/(Vec3 origin, int scale);

		//overload oper + - * / vector
		friend Vec3 operator+(Vec3 left, Vec3 right);
		friend Vec3 operator-(Vec3 left, Vec3 right);
		friend Vec3 operator*(Vec3 left, Vec3 right);
		friend Vec3 operator/(Vec3 left, Vec3 right);

		//overload oper =
		void operator=(const Vec3& other);

		//overload oper == <= >= == != < >
		bool operator==(const Vec3& other) const;
		bool operator!=(const Vec3& other) const;
		bool operator>=(const Vec3& other) const;
		bool operator<=(const Vec3& other) const;
		bool operator>(const Vec3& other) const;
		bool operator<(const Vec3& other) const;

		//overload oper += -= *= /= scalar
		Vec3& operator+=(const int& scale);
		Vec3& operator-=(const int& scale);
		Vec3& operator*=(const int& scale);
		Vec3& operator/=(const int& scale);

		//overload oper += -= *= /= vector
		Vec3& operator+=(const Vec3& other);
		Vec3& operator-=(const Vec3& other);
		Vec3& operator*=(const Vec3& other);
		Vec3& operator/=(const Vec3& other);

		//overload os << >>
		friend std::ostream& operator<< (std::ostream& ostream, const Vec3& other);
		friend std::istream& operator>> (std::istream& istream, Vec3& other);
	};
}


