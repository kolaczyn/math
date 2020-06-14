#include <iostream>
#include "vec.h"
#include "mat.h"
#include "utils.h"

int main() {
	mat4 m1(1);
	m1[1] = vec4(3);
	mat4 m2(5);
	m2[1][0] = 9;
	std::cout << m1 << "\n-----\n" << m2 << "\n-----\n" << m1 - m2 << std::endl;
	std::cin.get();
	return 0;
}