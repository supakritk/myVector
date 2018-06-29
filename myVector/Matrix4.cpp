#include "Matrix4.hpp"

namespace zyx {

	Matrix4::Matrix4() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				_m[i][j] = 0;
			}
		}
	}

	Matrix4::Matrix4(float diagonal) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				_m[i][j] = (i == j) ? diagonal : 0;
			}
		}
	}

	Matrix4::Matrix4(float* m) {
		// What is this for?????
	}

	Matrix4::Matrix4(const Vec4f & row0, const Vec4f & row1, const Vec4f & row2, const Vec4f & row3) {
		// For what???
	}

	Matrix4::~Matrix4() { }

	Matrix4 & Matrix4::Invert() {
		// TODO: insert return statement here
		Matrix4 temp;
		temp._m[0][0] = _m[1][2] * _m[2][3] * _m[3][1] - _m[1][3] * _m[2][2] * _m[3][1] + _m[1][3] * _m[2][1] * _m[3][2] - _m[1][1] * _m[2][3] * _m[3][2] - _m[1][2] * _m[2][1] * _m[3][3] + _m[1][1] * _m[2][2] * _m[3][3];
		temp._m[0][1] = _m[0][3] * _m[2][2] * _m[3][1] - _m[0][2] * _m[2][3] * _m[3][1] - _m[0][3] * _m[2][1] * _m[3][2] + _m[0][1] * _m[2][3] * _m[3][2] + _m[0][2] * _m[2][1] * _m[3][3] - _m[0][1] * _m[2][2] * _m[3][3];
		temp._m[0][2] = _m[0][2] * _m[1][3] * _m[3][1] - _m[0][3] * _m[1][2] * _m[3][1] + _m[0][3] * _m[1][1] * _m[3][2] - _m[0][1] * _m[1][3] * _m[3][2] - _m[0][2] * _m[1][1] * _m[3][3] + _m[0][1] * _m[1][2] * _m[3][3];
		temp._m[0][3] = _m[0][3] * _m[1][2] * _m[2][1] - _m[0][2] * _m[1][3] * _m[2][1] - _m[0][3] * _m[1][1] * _m[2][2] + _m[0][1] * _m[1][3] * _m[2][2] + _m[0][2] * _m[1][1] * _m[2][3] - _m[0][1] * _m[1][2] * _m[2][3];
		temp._m[1][0] = _m[1][3] * _m[2][2] * _m[3][0] - _m[1][2] * _m[2][3] * _m[3][0] - _m[1][3] * _m[2][0] * _m[3][2] + _m[1][0] * _m[2][3] * _m[3][2] + _m[1][2] * _m[2][0] * _m[3][3] - _m[1][0] * _m[2][2] * _m[3][3];
		temp._m[1][1] = _m[0][2] * _m[2][3] * _m[3][0] - _m[0][3] * _m[2][2] * _m[3][0] + _m[0][3] * _m[2][0] * _m[3][2] - _m[0][0] * _m[2][3] * _m[3][2] - _m[0][2] * _m[2][0] * _m[3][3] + _m[0][0] * _m[2][2] * _m[3][3];
		temp._m[1][2] = _m[0][3] * _m[1][2] * _m[3][0] - _m[0][2] * _m[1][3] * _m[3][0] - _m[0][3] * _m[1][0] * _m[3][2] + _m[0][0] * _m[1][3] * _m[3][2] + _m[0][2] * _m[1][0] * _m[3][3] - _m[0][0] * _m[1][2] * _m[3][3];
		temp._m[1][3] = _m[0][2] * _m[1][3] * _m[2][0] - _m[0][3] * _m[1][2] * _m[2][0] + _m[0][3] * _m[1][0] * _m[2][2] - _m[0][0] * _m[1][3] * _m[2][2] - _m[0][2] * _m[1][0] * _m[2][3] + _m[0][0] * _m[1][2] * _m[2][3];
		temp._m[2][0] = _m[1][1] * _m[2][3] * _m[3][0] - _m[1][3] * _m[2][1] * _m[3][0] + _m[1][3] * _m[2][0] * _m[3][1] - _m[1][0] * _m[2][3] * _m[3][1] - _m[1][1] * _m[2][0] * _m[3][3] + _m[1][0] * _m[2][1] * _m[3][3];
		temp._m[2][1] = _m[0][3] * _m[2][1] * _m[3][0] - _m[0][1] * _m[2][3] * _m[3][0] - _m[0][3] * _m[2][0] * _m[3][1] + _m[0][0] * _m[2][3] * _m[3][1] + _m[0][1] * _m[2][0] * _m[3][3] - _m[0][0] * _m[2][1] * _m[3][3];
		temp._m[2][2] = _m[0][1] * _m[1][3] * _m[3][0] - _m[0][3] * _m[1][1] * _m[3][0] + _m[0][3] * _m[1][0] * _m[3][1] - _m[0][0] * _m[1][3] * _m[3][1] - _m[0][1] * _m[1][0] * _m[3][3] + _m[0][0] * _m[1][1] * _m[3][3];
		temp._m[2][3] = _m[0][3] * _m[1][1] * _m[2][0] - _m[0][1] * _m[1][3] * _m[2][0] - _m[0][3] * _m[1][0] * _m[2][1] + _m[0][0] * _m[1][3] * _m[2][1] + _m[0][1] * _m[1][0] * _m[2][3] - _m[0][0] * _m[1][1] * _m[2][3];
		temp._m[3][0] = _m[1][2] * _m[2][1] * _m[3][0] - _m[1][1] * _m[2][2] * _m[3][0] - _m[1][2] * _m[2][0] * _m[3][1] + _m[1][0] * _m[2][2] * _m[3][1] + _m[1][1] * _m[2][0] * _m[3][2] - _m[1][0] * _m[2][1] * _m[3][2];
		temp._m[3][1] = _m[0][1] * _m[2][2] * _m[3][0] - _m[0][2] * _m[2][1] * _m[3][0] + _m[0][2] * _m[2][0] * _m[3][1] - _m[0][0] * _m[2][2] * _m[3][1] - _m[0][1] * _m[2][0] * _m[3][2] + _m[0][0] * _m[2][1] * _m[3][2];
		temp._m[3][2] = _m[0][2] * _m[1][1] * _m[3][0] - _m[0][1] * _m[1][2] * _m[3][0] - _m[0][2] * _m[1][0] * _m[3][1] + _m[0][0] * _m[1][2] * _m[3][1] + _m[0][1] * _m[1][0] * _m[3][2] - _m[0][0] * _m[1][1] * _m[3][2];
		temp._m[3][3] = _m[0][1] * _m[1][2] * _m[2][0] - _m[0][2] * _m[1][1] * _m[2][0] + _m[0][2] * _m[1][0] * _m[2][1] - _m[0][0] * _m[1][2] * _m[2][1] - _m[0][1] * _m[1][0] * _m[2][2] + _m[0][0] * _m[1][1] * _m[2][2];
		float det = determinant();
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				temp._m[i][j] = temp._m[i][j] / det;
			}
		}
		return temp;
	}

	double Matrix4::determinant()
	{
		return  this->_m[0][3] * this->_m[1][2] * this->_m[2][1] * this->_m[3][0] - this->_m[0][2] * this->_m[1][3] * this->_m[2][1] * this->_m[3][0] - this->_m[0][3] * this->_m[1][1] * this->_m[2][2] * this->_m[3][0] + this->_m[0][1] * this->_m[1][3] * this->_m[2][2] * this->_m[3][0] +
			this->_m[0][2] * this->_m[1][1] * this->_m[2][3] * this->_m[3][0] - this->_m[0][1] * this->_m[1][2] * this->_m[2][3] * this->_m[3][0] - this->_m[0][3] * this->_m[1][2] * this->_m[2][0] * this->_m[3][1] + this->_m[0][2] * this->_m[1][3] * this->_m[2][0] * this->_m[3][1] +
			this->_m[0][3] * this->_m[1][0] * this->_m[2][2] * this->_m[3][1] - this->_m[0][0] * this->_m[1][3] * this->_m[2][2] * this->_m[3][1] - this->_m[0][2] * this->_m[1][0] * this->_m[2][3] * this->_m[3][1] + this->_m[0][0] * this->_m[1][2] * this->_m[2][3] * this->_m[3][1] +
			this->_m[0][3] * this->_m[1][1] * this->_m[2][0] * this->_m[3][2] - this->_m[0][1] * this->_m[1][3] * this->_m[2][0] * this->_m[3][2] - this->_m[0][3] * this->_m[1][0] * this->_m[2][1] * this->_m[3][2] + this->_m[0][0] * this->_m[1][3] * this->_m[2][1] * this->_m[3][2] +
			this->_m[0][1] * this->_m[1][0] * this->_m[2][3] * this->_m[3][2] - this->_m[0][0] * this->_m[1][1] * this->_m[2][3] * this->_m[3][2] - this->_m[0][2] * this->_m[1][1] * this->_m[2][0] * this->_m[3][3] + this->_m[0][1] * this->_m[1][2] * this->_m[2][0] * this->_m[3][3] +
			this->_m[0][2] * this->_m[1][0] * this->_m[2][1] * this->_m[3][3] - this->_m[0][0] * this->_m[1][2] * this->_m[2][1] * this->_m[3][3] - this->_m[0][1] * this->_m[1][0] * this->_m[2][2] * this->_m[3][3] + this->_m[0][0] * this->_m[1][1] * this->_m[2][2] * this->_m[3][3];
	}

	double Matrix4::determinant(const Matrix4 & matrix)
	{
		return  matrix._m[0][3] * matrix._m[1][2] * matrix._m[2][1] * matrix._m[3][0] - matrix._m[0][2] * matrix._m[1][3] * matrix._m[2][1] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[1][1] * matrix._m[2][2] * matrix._m[3][0] + matrix._m[0][1] * matrix._m[1][3] * matrix._m[2][2] * matrix._m[3][0] +
			matrix._m[0][2] * matrix._m[1][1] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[0][1] * matrix._m[1][2] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[1][2] * matrix._m[2][0] * matrix._m[3][1] + matrix._m[0][2] * matrix._m[1][3] * matrix._m[2][0] * matrix._m[3][1] +
			matrix._m[0][3] * matrix._m[1][0] * matrix._m[2][2] * matrix._m[3][1] - matrix._m[0][0] * matrix._m[1][3] * matrix._m[2][2] * matrix._m[3][1] - matrix._m[0][2] * matrix._m[1][0] * matrix._m[2][3] * matrix._m[3][1] + matrix._m[0][0] * matrix._m[1][2] * matrix._m[2][3] * matrix._m[3][1] +
			matrix._m[0][3] * matrix._m[1][1] * matrix._m[2][0] * matrix._m[3][2] - matrix._m[0][1] * matrix._m[1][3] * matrix._m[2][0] * matrix._m[3][2] - matrix._m[0][3] * matrix._m[1][0] * matrix._m[2][1] * matrix._m[3][2] + matrix._m[0][0] * matrix._m[1][3] * matrix._m[2][1] * matrix._m[3][2] +
			matrix._m[0][1] * matrix._m[1][0] * matrix._m[2][3] * matrix._m[3][2] - matrix._m[0][0] * matrix._m[1][1] * matrix._m[2][3] * matrix._m[3][2] - matrix._m[0][2] * matrix._m[1][1] * matrix._m[2][0] * matrix._m[3][3] + matrix._m[0][1] * matrix._m[1][2] * matrix._m[2][0] * matrix._m[3][3] +
			matrix._m[0][2] * matrix._m[1][0] * matrix._m[2][1] * matrix._m[3][3] - matrix._m[0][0] * matrix._m[1][2] * matrix._m[2][1] * matrix._m[3][3] - matrix._m[0][1] * matrix._m[1][0] * matrix._m[2][2] * matrix._m[3][3] + matrix._m[0][0] * matrix._m[1][1] * matrix._m[2][2] * matrix._m[3][3];
	}

	Matrix4 Matrix4::Identity() {
		Matrix4 temp;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				temp._m[i][j] = (i == j) ? 1 : 0;
			}
		}
		return temp;
	}

	Matrix4 Matrix4::Invert(const Matrix4 & matrix)
	{
		Matrix4 temp;
		temp._m[0][0] = matrix._m[1][2] * matrix._m[2][3] * matrix._m[3][1] - matrix._m[1][3] * matrix._m[2][2] * matrix._m[3][1] + matrix._m[1][3] * matrix._m[2][1] * matrix._m[3][2] - matrix._m[1][1] * matrix._m[2][3] * matrix._m[3][2] - matrix._m[1][2] * matrix._m[2][1] * matrix._m[3][3] + matrix._m[1][1] * matrix._m[2][2] * matrix._m[3][3];
		temp._m[0][1] = matrix._m[0][3] * matrix._m[2][2] * matrix._m[3][1] - matrix._m[0][2] * matrix._m[2][3] * matrix._m[3][1] - matrix._m[0][3] * matrix._m[2][1] * matrix._m[3][2] + matrix._m[0][1] * matrix._m[2][3] * matrix._m[3][2] + matrix._m[0][2] * matrix._m[2][1] * matrix._m[3][3] - matrix._m[0][1] * matrix._m[2][2] * matrix._m[3][3];
		temp._m[0][2] = matrix._m[0][2] * matrix._m[1][3] * matrix._m[3][1] - matrix._m[0][3] * matrix._m[1][2] * matrix._m[3][1] + matrix._m[0][3] * matrix._m[1][1] * matrix._m[3][2] - matrix._m[0][1] * matrix._m[1][3] * matrix._m[3][2] - matrix._m[0][2] * matrix._m[1][1] * matrix._m[3][3] + matrix._m[0][1] * matrix._m[1][2] * matrix._m[3][3];
		temp._m[0][3] = matrix._m[0][3] * matrix._m[1][2] * matrix._m[2][1] - matrix._m[0][2] * matrix._m[1][3] * matrix._m[2][1] - matrix._m[0][3] * matrix._m[1][1] * matrix._m[2][2] + matrix._m[0][1] * matrix._m[1][3] * matrix._m[2][2] + matrix._m[0][2] * matrix._m[1][1] * matrix._m[2][3] - matrix._m[0][1] * matrix._m[1][2] * matrix._m[2][3];
		temp._m[1][0] = matrix._m[1][3] * matrix._m[2][2] * matrix._m[3][0] - matrix._m[1][2] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[1][3] * matrix._m[2][0] * matrix._m[3][2] + matrix._m[1][0] * matrix._m[2][3] * matrix._m[3][2] + matrix._m[1][2] * matrix._m[2][0] * matrix._m[3][3] - matrix._m[1][0] * matrix._m[2][2] * matrix._m[3][3];
		temp._m[1][1] = matrix._m[0][2] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[2][2] * matrix._m[3][0] + matrix._m[0][3] * matrix._m[2][0] * matrix._m[3][2] - matrix._m[0][0] * matrix._m[2][3] * matrix._m[3][2] - matrix._m[0][2] * matrix._m[2][0] * matrix._m[3][3] + matrix._m[0][0] * matrix._m[2][2] * matrix._m[3][3];
		temp._m[1][2] = matrix._m[0][3] * matrix._m[1][2] * matrix._m[3][0] - matrix._m[0][2] * matrix._m[1][3] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[1][0] * matrix._m[3][2] + matrix._m[0][0] * matrix._m[1][3] * matrix._m[3][2] + matrix._m[0][2] * matrix._m[1][0] * matrix._m[3][3] - matrix._m[0][0] * matrix._m[1][2] * matrix._m[3][3];
		temp._m[1][3] = matrix._m[0][2] * matrix._m[1][3] * matrix._m[2][0] - matrix._m[0][3] * matrix._m[1][2] * matrix._m[2][0] + matrix._m[0][3] * matrix._m[1][0] * matrix._m[2][2] - matrix._m[0][0] * matrix._m[1][3] * matrix._m[2][2] - matrix._m[0][2] * matrix._m[1][0] * matrix._m[2][3] + matrix._m[0][0] * matrix._m[1][2] * matrix._m[2][3];
		temp._m[2][0] = matrix._m[1][1] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[1][3] * matrix._m[2][1] * matrix._m[3][0] + matrix._m[1][3] * matrix._m[2][0] * matrix._m[3][1] - matrix._m[1][0] * matrix._m[2][3] * matrix._m[3][1] - matrix._m[1][1] * matrix._m[2][0] * matrix._m[3][3] + matrix._m[1][0] * matrix._m[2][1] * matrix._m[3][3];
		temp._m[2][1] = matrix._m[0][3] * matrix._m[2][1] * matrix._m[3][0] - matrix._m[0][1] * matrix._m[2][3] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[2][0] * matrix._m[3][1] + matrix._m[0][0] * matrix._m[2][3] * matrix._m[3][1] + matrix._m[0][1] * matrix._m[2][0] * matrix._m[3][3] - matrix._m[0][0] * matrix._m[2][1] * matrix._m[3][3];
		temp._m[2][2] = matrix._m[0][1] * matrix._m[1][3] * matrix._m[3][0] - matrix._m[0][3] * matrix._m[1][1] * matrix._m[3][0] + matrix._m[0][3] * matrix._m[1][0] * matrix._m[3][1] - matrix._m[0][0] * matrix._m[1][3] * matrix._m[3][1] - matrix._m[0][1] * matrix._m[1][0] * matrix._m[3][3] + matrix._m[0][0] * matrix._m[1][1] * matrix._m[3][3];
		temp._m[2][3] = matrix._m[0][3] * matrix._m[1][1] * matrix._m[2][0] - matrix._m[0][1] * matrix._m[1][3] * matrix._m[2][0] - matrix._m[0][3] * matrix._m[1][0] * matrix._m[2][1] + matrix._m[0][0] * matrix._m[1][3] * matrix._m[2][1] + matrix._m[0][1] * matrix._m[1][0] * matrix._m[2][3] - matrix._m[0][0] * matrix._m[1][1] * matrix._m[2][3];
		temp._m[3][0] = matrix._m[1][2] * matrix._m[2][1] * matrix._m[3][0] - matrix._m[1][1] * matrix._m[2][2] * matrix._m[3][0] - matrix._m[1][2] * matrix._m[2][0] * matrix._m[3][1] + matrix._m[1][0] * matrix._m[2][2] * matrix._m[3][1] + matrix._m[1][1] * matrix._m[2][0] * matrix._m[3][2] - matrix._m[1][0] * matrix._m[2][1] * matrix._m[3][2];
		temp._m[3][1] = matrix._m[0][1] * matrix._m[2][2] * matrix._m[3][0] - matrix._m[0][2] * matrix._m[2][1] * matrix._m[3][0] + matrix._m[0][2] * matrix._m[2][0] * matrix._m[3][1] - matrix._m[0][0] * matrix._m[2][2] * matrix._m[3][1] - matrix._m[0][1] * matrix._m[2][0] * matrix._m[3][2] + matrix._m[0][0] * matrix._m[2][1] * matrix._m[3][2];
		temp._m[3][2] = matrix._m[0][2] * matrix._m[1][1] * matrix._m[3][0] - matrix._m[0][1] * matrix._m[1][2] * matrix._m[3][0] - matrix._m[0][2] * matrix._m[1][0] * matrix._m[3][1] + matrix._m[0][0] * matrix._m[1][2] * matrix._m[3][1] + matrix._m[0][1] * matrix._m[1][0] * matrix._m[3][2] - matrix._m[0][0] * matrix._m[1][1] * matrix._m[3][2];
		temp._m[3][3] = matrix._m[0][1] * matrix._m[1][2] * matrix._m[2][0] - matrix._m[0][2] * matrix._m[1][1] * matrix._m[2][0] + matrix._m[0][2] * matrix._m[1][0] * matrix._m[2][1] - matrix._m[0][0] * matrix._m[1][2] * matrix._m[2][1] - matrix._m[0][1] * matrix._m[1][0] * matrix._m[2][2] + matrix._m[0][0] * matrix._m[1][1] * matrix._m[2][2];
		float det = temp.determinant(matrix);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				temp._m[i][j] = temp._m[i][j] / det;
			}
		}
		return temp;
	}

	Matrix4 Matrix4::Transpose(const Matrix4 & matrix) {
		Matrix4 temp;
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < size; ++j) {
				temp._m[j][i] = matrix._m[i][j];
			}
		}
		return temp;
	}
}