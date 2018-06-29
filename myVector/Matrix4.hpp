#pragma once
#include <iostream>
#include <string>
#include "Vec3.hpp"
#include "Vec4.hpp"

namespace zyx {

	class Matrix4
	{
	private:
		static const int size = 4;
		float _m[4][4];

	public:
		Matrix4();
		Matrix4(float diagonal);
		Matrix4(float* m);
		Matrix4(const Vec4f& row0, const Vec4f& row1, const Vec4f& row2, const Vec4f& row3);
		~Matrix4();

		Matrix4& Multiply(const Matrix4& other);
		friend Matrix4 operator*(Matrix4 left, const Matrix4& right);
		Matrix4& operator*=(const Matrix4& other);

		Vec3f Multiply(const Vec3f& other) const;
		friend Vec3f operator*(const Matrix4& left, const Vec3f& right);

		Vec4f Multiply(const Vec4f& other) const;
		friend Vec4f operator*(const Matrix4& left, const Vec4f& right);

		Matrix4& Invert();
		double determinant();
		double determinant(const Matrix4& matrix);

		static Matrix4 Identity();

		static Matrix4 Translate(const Vec3f& translation);
		static Matrix4 Rotate(float angle, const Vec3f& axis);
		static Matrix4 Scale(const Vec3f& scale);
		static Matrix4 Invert(const Matrix4& matrix);
		static Matrix4 Transpose(const Matrix4& matrix);

		std::string ToString() const;


	};
}