#pragma once
#include <iostream>
// TODO
// make it possible to refer to arr[0] as x or r, arr[1] as y or g etc
// every plus makes a new variable.
// add += so you don't have to make a copy
namespace kola {
	namespace math {
		template <typename T, int n>
		class vec {
		public:
			T arr[n];

			vec();
			vec(T init);
			~vec();

			vec operator+(const vec& other) const;
			vec operator-(const vec& other) const;

			T operator[](int i) const;
			T& operator[](int i);

			T dot(const vec& other) const;
			friend std::ostream& operator<<(std::ostream& output, const vec& v) {
				output << '(' << ' ';
				for (int i = 0; i < n; i++)
					output << v[i] << ' ';
				output << ' ' << ')';
				return output;
			}
		private:
		};

	};
};