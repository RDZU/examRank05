#ifndef BIGINT_HPP
#define BIGINT_HPP
#include <iostream>
#include <sstream>
#include <string>


class bigint
{
    private:
    std::string str;

    public:
    bigint();
    bigint(unsigned int num);
    bigint(const bigint & src);
    bigint &operator=(const bigint & src);

    std::string getStr() const;

    bigint operator+(const bigint & src) const;
    bigint &operator+=(const bigint & src);

    bigint &operator++();
    bigint operator++(int);

    bigint operator<<(const bigint& src) const;
    bigint operator>>(const bigint& src) const;
    bigint &operator<<=(const bigint& src);
    bigint &operator>>=(const bigint& src);

    bigint operator<<(unsigned int num) const;
    bigint operator>>(unsigned int num) const;
    bigint &operator<<=(unsigned int num);
    bigint &operator>>=(unsigned int num);

    bool operator==(const bigint & src) const;
    bool operator!=(const bigint & src) const;
    bool operator<=(const bigint & src) const;
    bool operator>=(const bigint & src) const;
    bool operator<(const bigint & src) const;
    bool operator>(const bigint & src) const;
};


std::ostream &operator <<(std::ostream & out, const bigint & src);
std::string reverseStr(std::string str);
std::string addition(const bigint& obj1, const bigint& obj2);
int intToStr(std::string str);


#endif