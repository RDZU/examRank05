#include "bigint.hpp"
#include <iostream>

int	main()
{
	const bigint	a(42);
	bigint			b(21);
	bigint			c;
	bigint			d(1337);
	bigint			e(d);

	std::cout << "=== Ostream ====================" << std::endl;
	std::cout << "a = " << a << "\t|  42" << std::endl;
	std::cout << "b = " << b << "\t|  21" << std::endl;
	std::cout << "c = " << c << "\t|  0" << std::endl;
	std::cout << "d = " << d << "\t|  1337" << std::endl;
	std::cout << "e = " << e << "\t|  1337" << std::endl;

	std::cout << "\n=== Additions ===================" << std::endl;
	std::cout << "a + b = " << a + b << "\t|  63" << std::endl;
	std::cout << "(c += a) = " << (c += a) << "\t|  42" << std::endl;

	std::cout << "\n=== Increments ==================" << std::endl;
	std::cout << "b = " << b << "\t\t|  21" << std::endl;
	std::cout << "++b = " << ++b << "\t|  22" << std::endl;
	std::cout << "b++ = " << b++ << "\t|  22" << std::endl;

	std::cout << "\n=== Shifts ======================" << std::endl;
	std::cout << "(b << 10) + 42 = " << ((b << 10) + 42) << "\t|  230000000042" << std::endl;
	std::cout << "(d <<= 4) = " << (d <<= 4) << "\t\t|  13370000" << std::endl;
	std::cout << "(d >>= 2) = " << (d >>= (const bigint)2) << "\t\t|  133700" << std::endl;

	std::cout << "\n=== Ostream =====================" << std::endl;
	std::cout << "a = " << a << "\t\t|  42" << std::endl;
	std::cout << "d = " << d << "\t|  133700" << std::endl;

	std::cout << "\n=== Comparisons =================" << std::endl;
	std::cout << "(d < a) = " << (d < a) << "\t|  0" << std::endl;
	std::cout << "(d <= a) = " << (d <= a) << "\t|  0" << std::endl;
	std::cout << "(d > a) = " << (d > a) << "\t|  1" << std::endl;
	std::cout << "(d >= a) = " << (d >= a) << "\t|  1" << std::endl;
	std::cout << "(d == a) = " << (d == a) << "\t|  0" << std::endl;
	std::cout << "(d != a) = " << (d != a) << "\t|  1" << std::endl;
	bigint z(0);
z <<= 5;
std::cout << z << "\t|  0" << std::endl;

std::cout << "\n=== Stress leading zero with many 9s ===" << std::endl;

bigint stress(0);

for (int i = 0; i < 200; i++)
{
    stress <<= 1;
    stress += bigint(9);
}

std::cout << "stress = " << stress << std::endl;
std::cout << "expected: 200 digits, all 9, NO leading zero" << std::endl;
std::cout << "length = " << stress.getStr().length() << "\t|  200" << std::endl;
std::cout << "first char = " << stress.getStr()[0] << "\t|  9" << std::endl;
    return (0);
}