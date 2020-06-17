#pragma once
#include "cmplx.h"

namespace kola {
	namespace math {

		cmplx::cmplx() {
			x = y = 0;
		}
		cmplx::cmplx(float x, float y) :x(x), y(y){}

		cmplx cmplx::operator+(const cmplx& other) const {
			return cmplx(x + other.x, y + other.y);
		}
		cmplx cmplx::operator-(const cmplx& other) const {
			return cmplx(x - other.x, y - other.y);
		}
		cmplx cmplx::operator*(const cmplx& other) const {
			return cmplx(x * other.x - y * other.y, x * other.y + y * other.x);
		}
		//cmplx operator/(const cmplx& other); dont know why I can't do that

	}
}