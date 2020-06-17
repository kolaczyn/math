#include "mat.h"

namespace kola {
	namespace math {

		template<typename T, int n>
		mat<T, n>::mat() {
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					c[i + n * j] = 0;
		}

		template<typename T, int n>
		mat<T, n>::mat(T init) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++)
					if (i == j)
						c[i + n * j] = init;
					else
						c[i + n * j] = 0;
			}
		}
		template<typename T, int n>
		mat<T, n>::~mat() {

		}

		template<typename T, int n>
		const vec<T, n>& mat<T, n>::operator[](int i) const {
			return v[i];
		}

		template<typename T, int n>
		vec<T, n>& mat<T, n>::operator[](int i) {
			return v[i];
		}

		template<typename T, int n>
		mat<T, n> mat<T, n>::operator+(const mat& other) const{
			mat out;
			for (int i = 0; i < n; i++)
				out.v[i] \
				= this->v[i] \
				+ other.v[i];
			return out;
		}

		template<typename T, int n>
		mat<T, n> mat<T, n>::operator-(const mat& other) const{
			mat out;
			for (int i = 0; i < n; i++)
				out.v[i] = this->v[i] - other.v[i];
			return out;
		}

		template<typename T, int n>
		mat<T, n> mat<T, n>::operator*(const mat& other) const{
			mat out;
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					for (int k = 0; k < n; k++)
						out[i][j] += (*this)[k][j] * other.v[i][k];// fix this
			return out;
		}

		//template<typename T, int n>
		/*mat<T, n> mat<T, n>::operator*(const mat& other){
			return mat;
			TODO`
		}*/
		// void macierz odwrotna
		// mat macierz odwrotna
		//template<typename T, int n>
		//std::ostream& operator<<(std::ostream& output, const mat<T, n>& m);
		template class mat<float, 2>;
		template class mat<float, 3>;
		template class mat<float, 4>;
	}
}