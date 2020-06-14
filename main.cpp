#include <iostream>
#include "vec.h"

typedef vec<float, 2> vec2;
typedef vec<float, 3> vec3;
typedef vec<float, 4> vec4;

int main() {
	vec2 v1;
	vec2 v2(2.5);
	std::cout << v1.dot(v2)<< std::endl;
	std::cin.get();
}
