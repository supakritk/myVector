#pragma once
#include <iostream>

namespace zyx {

	template<class T>
	class Vec4
	{
	public:
		Vec4<T>();
		Vec4<T>(T x, T y, T z, T a);
		~Vec4<T>();

		T x, y, z, a;

		void print() const;

		// + - * / scalar
		Vec4<T>& add(const float& scale);
		Vec4<T>& minus(const float& scale);
		Vec4<T>& times(const float& scale);
		Vec4<T>& devide(const float& scale);

		// + - * / vector
		Vec4<T>& add(const Vec4<T>& other);
		Vec4<T>& minus(const Vec4<T>& other);
		Vec4<T>& times(const Vec4<T>& other);
		Vec4<T>& devide(const Vec4<T>& other);

		//overload oper + - * / scalar
		template<class T>
		friend Vec4<T> operator+(Vec4<T> origin, float scale);
		template<class T>
		friend Vec4<T> operator-(Vec4<T> origin, float scale);
		template<class T>
		friend Vec4<T> operator*(Vec4<T> origin, float scale);
		template<class T>
		friend Vec4<T> operator/(Vec4<T> origin, float scale);

		//overload oper + - * / vector
		template<class T>
		friend Vec4<T> operator+(Vec4<T> left, Vec4<T> right);
		template<class T>
		friend Vec4<T> operator-(Vec4<T> left, Vec4<T> right);
		template<class T>
		friend Vec4<T> operator*(Vec4<T> left, Vec4<T> right);
		template<class T>
		friend Vec4<T> operator/(Vec4<T> left, Vec4<T> right);

		//overload oper =
		void operator=(const Vec4<T>& other);

		//overload oper == <= >= == != < >
		bool operator==(const Vec4<T>& other) const;
		bool operator!=(const Vec4<T>& other) const;
		bool operator>=(const Vec4<T>& other) const;
		bool operator<=(const Vec4<T>& other) const;
		bool operator>(const Vec4<T>& other) const;
		bool operator<(const Vec4<T>& other) const;

		//overload oper += -= *= /= scalar
		Vec4<T>& operator+=(const float& scale);
		Vec4<T>& operator-=(const float& scale);
		Vec4<T>& operator*=(const float& scale);
		Vec4<T>& operator/=(const float& scale);

		//overload oper += -= *= /= vector
		Vec4<T>& operator+=(const Vec4<T>& other);
		Vec4<T>& operator-=(const Vec4<T>& other);
		Vec4<T>& operator*=(const Vec4<T>& other);
		Vec4<T>& operator/=(const Vec4<T>& other);

		//overload os << >>
		template<class T>
		friend std::ostream& operator<< (std::ostream& ostream, const Vec4<T>& other);
		template<class T>
		friend std::istream& operator>> (std::istream& istream, Vec4<T>& other);

		int dot(const Vec4<T>& other);
		Vec4<T>& cross(Vec4& other);
		int magnitude();
		int magnitudeSquare();
		double normalizex();
		double normalizey();
		double normalizez();
		double normalizea();
		double angleTo(Vec4<T> other);
	};

	typedef Vec4<int> Vec4i;
	typedef Vec4<float> Vec4f;
	typedef Vec4<double> Vec4d;

}


