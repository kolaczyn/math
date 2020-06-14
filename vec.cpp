#include "vec.h"

namespace kola {
	namespace math {

		template<typename T, int n>
		vec<T, n>::vec() {
			for (int i = 0; i < n; i++)
				(*this)[i] = 0;
		}

		template<typename T, int n>
		vec<T, n>::vec(T init) {
			for (int i = 0; i < n; i++)
				(*this)[i] = init;
		}

		template<typename T, int n>
		vec<T, n>::~vec() {}

		template<typename T, int n>
		vec<T, n> vec<T, n>::operator+(const vec& other) const{
			vec out;
			for (int i = 0; i < n; i++)
				out[i] = this->arr[i] + other.arr[i];
			return out;
		}

		template<typename T, int n>
		vec<T, n> vec<T, n>::operator-(const vec& other) const{
			vec out;
			for (int i = 0; i < n; i++)
				out[i] = this->arr[i] - other.arr[i];
			return out;
		}

		template<typename T, int n>
		T vec<T, n>::dot(const vec& other) const{
			T out = 0;
			for (int i = 0; i < n; i++)
				out += (*this)[i] * other[i];
			return out;
		}

		template<typename T, int n>
		T vec<T, n>::operator[](int i) const {
			return arr[i];
		}

		template<typename T, int n>
		T& vec<T, n>::operator[](int i) {
			return arr[i];
		}

		template class vec<float, 2>;
		template class vec<float, 3>;
		template class vec<float, 4>;
	}
}