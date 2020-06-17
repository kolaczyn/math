#pragma once
#include <iostream>

namespace kola {
	namespace math {

		class cmplx {
		private:
			float x, y;
		public:
			cmplx();
			cmplx(float, float);

			cmplx operator+(const cmplx& other) const;
			cmplx operator-(const cmplx& other) const;
			cmplx operator*(const cmplx& other) const;

			friend std::ostream& operator<< (std::ostream& out, const cmplx& other) {
				out << '(' << other.x << "+ " << other.y << " i" << ')';
				return out;
			}


		};
	}
}