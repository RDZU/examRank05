#include "bigint.hpp"
#include <iostream>
#include <sstream>
#include <string>


bigint::bigint()
{
    this->str = "0";
}

bigint::bigint(unsigned int num)
{
    std::stringstream ss;
    ss << num;
    this->str = ss.str();
}


bigint::bigint(const bigint & src)
{
    if(this != &src)
    {
        this->str = src.str;
    }
}

bigint &bigint::operator=(const bigint & src)
{
    this->str = src.str;
    return *this;
}


std::string reverStr(std::string str)
{
    std::string reverse;
    for (int i= str.length()- 1 ; i>=0; i--)
    {
        reverse.push_back(str[i]);
    }
    return reverse;
}

int intToStr(std::string str)
{
    int num;
    std::stringstream ss(str);
    ss >> num;
    return num;
}

std::string bigint::getStr() const
{
    return this->str;
}

std::ostream &operator <<(std::ostream & out, const bigint & src)
{
    out<< src.getStr()<< std::endl;
    return out;
}


std::string addition(const bigint & obj1, const bigint & obj2)
{
    std::string str1 = reverseStr(obj1.getStr());
    std::string str2 = reverseStr(obj2.getStr());
    std::string result;

    int len_max, len1, len2;
    len1 = str1.length();
    len2 = str2.length();
    len_max = len1 > len2 ? len1 : len2;

    if (len_max> len1)
        str1.resize(len_max,'0');
    
    if (len_max> len2)
        str2.resize(len_max,'0');
    
    int carry = 0 , res, num1, num2;

    for(int i = 0; i<len_max;i++)
    {
        num1 = str1[i] - 48;
        num2 = str2[i] - 48;
        res = num1 + num2 + carry;
        result.push_back((res % 10) + 48);
        carry = res / 10;
    }

        if(carry != 0)
            result.push_back(carry + 48);    
        return reverseStr(result);
}

bigint bigint::operator+(const bigint & src) const
{
    bigint tmp(*this);
    tmp.str = addition(*this, src);
    return tmp;
}

bigint &bigint::operator+=(const bigint & src)
{
    this->str = addition(*this, src);
    return *this;
}

bigint  &bigint::operator++()
{
    this->str = addition(*this, bigint(1));
    return *this;
}

bigint bigint::operator++(int)
{
    bigint tmp(*this);
    this->str = addition(*this, bigint(1));
    return tmp;
}




bigint &bigint::operator <<=(unsigned int n)
{
    if(this->str != "0")
        this->str.resize( this->str.length() + n, '0');
    return *this;
}


bigint &bigint::operator >>=(unsigned int n)
{
    if(n >= this->str.length())
        this->str = "0";
    else
        this->str.resize( this->str.length() - n);
    return *this;
}


bigint bigint::operator>>(unsigned int n)const
{
    bigint tmp(*this);
    tmp.str.resize( tmp.str.length() - n);
    return tmp;
}

bigint bigint::operator<<(unsigned int n)const
{
    bigint tmp(*this);
    tmp.str.resize( tmp.str.length() + n , 48);
    return tmp;
}

bigint bigint::operator<<(const bigint & src) const
{
    bigint tmp(*this);
    tmp = *this << intToStr(src.getStr());
    return tmp;
}

bigint bigint::operator >>(const bigint & src) const
{
    bigint tmp(*this);
    tmp = *this >> intToStr(src.getStr());
    return tmp;
}



bigint &bigint::operator <<=(const bigint & src)
{
    *this = *this << intToStr(src.getStr());
    return *this;
}


bigint &bigint::operator >>=(const bigint & src)
{
    *this = *this >> intToStr(src.getStr());
    return *this;
}


bool bigint::operator<(const bigint & src) const
{
      if(this->str != src.getStr())
            return (this->str.length() < src.getStr().length());
        return (this->str < src.getStr());

}
bool bigint::operator<=(const bigint & src) const
{
          return (*this < src || *this == src);

}

bool bigint::operator>(const bigint & src) const
{
    if(this->str != src.getStr())
        return (this->str.length() > src.getStr().length());
    return (this->str > src.getStr());

}

bool bigint::operator>=(const bigint & src) const
{
    return (*this > src || *this == src);
}

bool bigint::operator==(const bigint & src) const
{
      return (this->str == src.getStr());
}

bool bigint::operator!=(const bigint & src) const
{
      return (this->str != src.getStr());
}

std::string reverseStr(std::string str)
{
    std::string ss;
    for(int i = str.length() - 1; i >= 0; i--)
        ss.push_back(str[i]);
    return ss;
}
