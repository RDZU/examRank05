#include "vect2.hpp"
#include <iostream>

int	main()
{
	vect2		v1;
	vect2		v2(1, 2);
	const vect2	v3(v2);
	vect2		v4 = v2;

	std::cout << "=== Ostream ======================" << std::endl;
	std::cout << "v1: " << v1 << "\t|  {0, 0}" << std::endl;
	std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << "\t|  {0, 0}" << std::endl;
	std::cout << "v2: " << v2 << "\t|  {1, 2}" << std::endl;
	std::cout << "v3: " << v3 << "\t|  {1, 2}" << std::endl;
	std::cout << "v4: " << v4 << "\t|  {1, 2}" << std::endl;

	std::cout << "\n=== Increments & Decrements ======" << std::endl;
	std::cout << "v4: " << v4 << "\t|  {1, 2}" << std::endl;
	std::cout << "                |" << std::endl;
	std::cout << "v4++: " << v4++ << "\t|  {1, 2}" << std::endl;
	std::cout << "++v4: " << ++v4 << "\t|  {3, 4}" << std::endl;
	std::cout << "v4--: " << v4-- << "\t|  {3, 4}" << std::endl;
	std::cout << "--v4: " << --v4 << "\t|  {1, 2}" << std::endl;
	std::cout << "                |" << std::endl;
	std::cout << "v4: " << v4 << "\t|  {1, 2}" << std::endl;

	std::cout << "\n=== Miscs ========================" << std::endl;

	std::cout << "Initial values:" << std::endl;
	std::cout << "v1: " << v1 << "\t|  {0, 0}" << std::endl;
	std::cout << "v2: " << v2 << "\t|  {1, 2}" << std::endl;
	std::cout << "v3: " << v3 << "\t|  {1, 2}" << std::endl;
	std::cout << "\nCompound and arithmetic ops:" << std::endl;
	v2 += v3;
	std::cout << "v2 += v3 -> " << v2 << "\t\t|  {2, 4}" << std::endl;
	v1 -= v2;
	std::cout << "v1 -= v2 -> " << v1 << "\t\t|  {-2, -4}" << std::endl;
	v2 = v3 + v3 * 2;
	std::cout << "v2 = v3 + v3 * 2 -> " << v2 << "\t|  {3, 6}" << std::endl;
	v2 = 3 * v2;
	std::cout << "v2 = 3 * v2 -> " << v2 << "\t\t|  {9, 18}" << std::endl;
	v2 += v2 += v3;
	std::cout << "v2 += v2 += v3 -> " << v2 << "\t|  {20, 40}" << std::endl;
	v1 *= 42;
	std::cout << "v1 *= 42 -> " << v1 << "\t\t|  {-84, -168}" << std::endl;
	v1 = v1 - v1 + v1;
	std::cout << "v1 = v1 - v1 + v1 -> " << v1 << "|  {-84, -168}" << std::endl;
	std::cout << "\nUnary and access ops:" << std::endl;
	std::cout << "-v2: " << -v2 << "\t|  {-20, -40}\n" << std::endl;
	std::cout << "v1[1]: " << v1[1] << "\t|  -168" << std::endl;
	std::cout << "v1[1] = 12      |" << std::endl;
	v1[1] = 12;
	std::cout << "v1[1]: " << v1[1] << "\t|  12\n" << std::endl;
	std::cout << "v3[1]: " << v3[1] << "\t|  2" << std::endl;

	std::cout << "\n=== Comparisons ==================" << std::endl;

	std::cout << "v1 == v3: " << (v1 == v3) << "\t|  0" << std::endl;
	std::cout << "v1 == v1: " << (v1 == v1) << "\t|  1" << std::endl;
	std::cout << "v1 != v3: " << (v1 != v3) << "\t|  1" << std::endl;
	std::cout << "v1 != v1: " << (v1 != v1) << "\t|  0" << std::endl;




vect2 v5(1, 2);

std::cout << "v5 = " << v5 << std::endl;
std::cout << "v5 * 12 = " << (v5 * 12) << std::endl;
std::cout << "v5 == (v5 * 12) = " << (v5 == (v5 * 12)) << " | 0" << std::endl;
std::cout << "v5 after = " << v5 << " | {1, 2}" << std::endl;
	return 0;
}