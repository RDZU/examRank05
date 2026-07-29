#include "vect2.hpp"
#include <iostream>

int main()
{
    vect2 v1(-816, 2881);
    vect2 v3(816, -2881);

    std::cout << "=== Valores iniciales ===" << std::endl;
    std::cout << "v1: " << v1
              << "\t| {-816, 2881}" << std::endl;

    std::cout << "v3: " << v3
              << "\t| {816, -2881}" << std::endl;

    std::cout << "-v1: " << -v1
              << "\t| {816, -2881}" << std::endl;

    std::cout << "v1 * 12: " << (v1 * 12)
              << "\t| {-816, 2881} con return *this"
              << std::endl;

    std::cout << "\n=== Comparaciones finales ===" << std::endl;

    std::cout << "v1 == v3: "
              << (v1 == v3)
              << "\t| esperado: 0"
              << std::endl;

    std::cout << "v1 == v1: "
              << (v1 == v1)
              << "\t| esperado: 1"
              << std::endl;

    std::cout << "v1 == (v1 * 12): "
              << (v1 == (v1 * 12))
              << "\t| esperado: 1"
              << std::endl;

    std::cout << "-v1 != v3: "
              << (-v1 != v3)
              << "\t| esperado: 0"
              << std::endl;

    std::cout << "-v1 != v1: "
              << (-v1 != v1)
              << "\t| esperado: 1"
              << std::endl;

    std::cout << "v1 != (v1 * 12): "
              << (v1 != (v1 * 12))
              << "\t| esperado: 0"
              << std::endl;

    std::cout << "v1 != v3: "
              << (v1 != v3)
              << "\t| esperado: 1"
              << std::endl;

    std::cout << "v1 != -v1: "
              << (v1 != -v1)
              << "\t| esperado: 1"
              << std::endl;

        std::cout << "v1 != v1: "
              << (v1 != v1)
              << "\t| esperado: 0"
              << std::endl;


        std::cout << "v1 == -v1: "
              << (v1 == -v1)
              << "\t| esperado: 0"
              << std::endl;

        std::cout << "v1 == v1: "
              << (v1 == v1)
              << "\t| esperado: 1"
              << std::endl;

 std::cout << "v1: " << v1 << std::endl;
std::cout << "v1 * 12: " << (v1 * 12) << std::endl;

std::cout << "v1 == (v1 * 12): "
          << (v1 == (v1 * 12))
          << std::endl;


    return 0;
}