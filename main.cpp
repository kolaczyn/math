#include <iostream>
#include "math.h"

using namespace kola::math;

int main() {
	mat3 m1(1);
	m1[1] = vec3(2);
	m1.transpose();
	mat3 m2(5);
	m2[1][0] = 9;
	std::cout << m1 << "---\n" << m2 << "---\n" << m1 * m2 << std::endl;;
	
	cmplx i1(1, 5);
	cmplx i2(3, 1);
	std::cout << i1 << " * " << i2 << " = " << i1 * i2;
	std::cin.get();
	return 0;
}