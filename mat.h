#pragma once

#include "vec.h"
#include "mat.h"

namespace kola {
	namespace math {
		template<typename T, int n>
		class mat
		{
		private:
			union {
				T c[n * n];
				vec<T, n> v[n];
			};
		public:
			mat();
			mat(T init);
			~mat();

			const vec<T, n>& operator[](int i) const;
			vec<T, n>& operator[](int i);

			mat operator+(const mat& other) const;
			mat operator-(const mat& other) const;
			mat operator*(const mat& other) const;

			static mat identity() {
				return mat(1);
			}
			// void macierz odwrotna
			// mat macierz odwrotna
			void transpose() {
				T buf;
				for(int i=0; i<n; i++)
					for(int j=0; j<n; j++)
						if (i != j && i<j)  {
							buf =(*this)[i][j];
							(*this)[i][j] = (*this)[j][i];
							(*this)[j][i] = buf;
						}
			}
			friend std::ostream& operator<<(std::ostream& output, const mat& m) {
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++)
						output << m[j][i] << " | ";
					output << std::endl;
				}
				return output;
			}
		};
	};
};