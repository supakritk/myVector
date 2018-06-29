#pragma once
#include <iostream>

namespace zyx {

	template<class T>
	class Vec3
	{
	public:
		Vec3<T>();
		Vec3<T>(T x, T y, T z);
		~Vec3<T>();

		T x, y, z;

		void print() const;

		// + - * / scalar
		Vec3<T>& add(const float& scale);
		Vec3<T>& minus(const float& scale);
		Vec3<T>& times(const float& scale);
		Vec3<T>& devide(const float& scale);
		
		// + - * / vector
		Vec3<T>& add(const Vec3<T>& other);
		Vec3<T>& minus(const Vec3<T>& other);
		Vec3<T>& times(const Vec3<T>& other);
		Vec3<T>& devide(const Vec3<T>& other);

		//overload oper + - * / scalar
		template<class T>
		friend Vec3<T> operator+(Vec3<T> origin, float scale);
		template<class T>
		friend Vec3<T> operator-(Vec3<T> origin, float scale);
		template<class T>
		friend Vec3<T> operator*(Vec3<T> origin, float scale);
		template<class T>
		friend Vec3<T> operator/(Vec3<T> origin, float scale);

		//overload oper + - * / vector
		template<class T>
		friend Vec3<T> operator+(Vec3<T> left, Vec3<T> right);
		template<class T>
		friend Vec3<T> operator-(Vec3<T> left, Vec3<T> right);
		template<class T>
		friend Vec3<T> operator*(Vec3<T> left, Vec3<T> right);
		template<class T>
		friend Vec3<T> operator/(Vec3<T> left, Vec3<T> right);

		//overload oper =
		void operator=(const Vec3<T>& other);

		//overload oper == <= >= == != < >
		bool operator==(const Vec3<T>& other) const;
		bool operator!=(const Vec3<T>& other) const;
		bool operator>=(const Vec3<T>& other) const;
		bool operator<=(const Vec3<T>& other) const;
		bool operator>(const Vec3<T>& other) const;
		bool operator<(const Vec3<T>& other) const;

		//overload oper += -= *= /= scalar
		Vec3<T>& operator+=(const float& scale);
		Vec3<T>& operator-=(const float& scale);
		Vec3<T>& operator*=(const float& scale);
		Vec3<T>& operator/=(const float& scale);

		//overload oper += -= *= /= vector
		Vec3<T>& operator+=(const Vec3<T>& other);
		Vec3<T>& operator-=(const Vec3<T>& other);
		Vec3<T>& operator*=(const Vec3<T>& other);
		Vec3<T>& operator/=(const Vec3<T>& other);

		//overload os << >>
		template<class T>
		friend std::ostream& operator<< (std::ostream& ostream, const Vec3<T>& other);
		template<class T>
		friend std::istream& operator>> (std::istream& istream, Vec3<T>& other);

		int dot(const Vec3<T>& other);
		Vec3<T>& cross(Vec3& other);
		int magnitude();
		int magnitudeSquare();
		double normalizex();
		double normalizey();
		double normalizez();
		double angleTo(Vec3<T> other);
	};

	typedef Vec3<int> Vec3i;
	typedef Vec3<float> Vec3f;
	typedef Vec3<double> Vec3d;

}


