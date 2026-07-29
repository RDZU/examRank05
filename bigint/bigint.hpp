#ifndef BIGINT_HPP
#define BIGINT_HPP
#include <iostream>
#include <string>
#include <sstream>



class bigint
{
    private:
        std::string str;


    public:

        bigint();
        bigint(unsigned int num);
        bigint(const bigint & src);
        bigint &operator=(const bigint & src);

        bigint operator+(const bigint & src) const;
        bigint &operator+=(const bigint & src);


        bigint &operator++();
        bigint operator++(int);
        std::string getStr() const;

        bigint operator<<(const bigint & src) const;
        bigint operator>>(const bigint & src) const;
        bigint &operator>>=(const bigint & src);
        bigint &operator<<=(const bigint & src);

        bigint operator<<(unsigned int num) const;
        bigint operator>>(unsigned int num) const;
        bigint &operator>>=(unsigned int num);
        bigint &operator<<=(unsigned int num);

        bool operator==(const bigint & src) const;
        bool operator!=(const bigint & src) const;
        bool operator>(const bigint & src) const;
        bool operator<(const bigint & src) const;
        bool operator<=(const bigint & src) const;
        bool operator>=(const bigint & src) const;

};

std::ostream &operator <<(std::ostream &out, const bigint & src);
std::string addition (const bigint & obj1, const bigint & obj2);
std::string reserveStr(std::string str);
int converter(std::string str);



#endif