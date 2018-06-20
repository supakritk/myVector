#pragma once
#include <iostream>

namespace zyx {

	class Vec4
	{
	public:
		Vec4();
		Vec4(int w, int x, int y, int z);
		~Vec4();

		int w, x, y, z;

		void print() const;

		// + - * / scalar
		Vec4& add(const int& scale);
		Vec4& minus(const int& scale);
		Vec4& times(const int& scale);
		Vec4& devide(const int& scale);

		// + - * / vector
		Vec4& add(const Vec4& other);
		Vec4& minus(const Vec4& other);
		Vec4& times(const Vec4& other);
		Vec4& devide(const Vec4& other);

		//overload oper + - * / scalar
		friend Vec4 operator+(Vec4 origin, int scale);
		friend Vec4 operator-(Vec4 origin, int scale);
		friend Vec4 operator*(Vec4 origin, int scale);
		friend Vec4 operator/(Vec4 origin, int scale);

		//overload oper + - * / vector
		friend Vec4 operator+(Vec4 left, Vec4 right);
		friend Vec4 operator-(Vec4 left, Vec4 right);
		friend Vec4 operator*(Vec4 left, Vec4 right);
		friend Vec4 operator/(Vec4 left, Vec4 right);

		//overload oper =
		void operator=(const Vec4& other);

		//overload oper == <= >= == != < >
		bool operator==(const Vec4& other) const;
		bool operator!=(const Vec4& other) const;
		bool operator>=(const Vec4& other) const;
		bool operator<=(const Vec4& other) const;
		bool operator>(const Vec4& other) const;
		bool operator<(const Vec4& other) const;

		//overload oper += -= *= /= scalar
		Vec4& operator+=(const int& scale);
		Vec4& operator-=(const int& scale);
		Vec4& operator*=(const int& scale);
		Vec4& operator/=(const int& scale);

		//overload oper += -= *= /= vector
		Vec4& operator+=(const Vec4& other);
		Vec4& operator-=(const Vec4& other);
		Vec4& operator*=(const Vec4& other);
		Vec4& operator/=(const Vec4& other);

		//overload os << >>
		friend std::ostream& operator<< (std::ostream& ostream, const Vec4& other);
		friend std::istream& operator>> (std::istream& istream, Vec4& other);
	};
}


