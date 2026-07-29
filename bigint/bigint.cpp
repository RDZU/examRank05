#include "bigint.hpp"


bigint::bigint()
{
    this->str = "0";
}

bigint::bigint(unsigned int num)
{
    std::stringstream str;
    str << num;
    this->str = str.str();
}


bigint::bigint(const bigint & src)
{
    this->str = src.str;
}



bigint &bigint::operator=(const bigint & src)
{
    if(this != &src)
    {

    }
    return *this;
}


std::ostream &operator <<(std::ostream &out, const bigint & src)
{
    out << src.getStr();
    return out;
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


bigint &bigint::operator++()
{
    this->str = addition(*this,bigint(1));
    return *this;
}
bigint bigint::operator++(int)
{
    bigint tmp(*this);
    this->str = addition(*this, bigint(1));
    return tmp;
}






std::string bigint::getStr() const
{
    return this->str;
}

std::string reserveStr(std::string str)
{
    std::string aux;

    for (int i = str.length() - 1; i >= 0 ; i--)
    {
        aux.push_back(str[i]);
    }
    return aux;
}
//=== Shifts ======================";


bigint bigint::operator<<(const bigint & src) const
{
    bigint tmp(*this);
    tmp = *this << converter(src.getStr());
    return tmp;
}
bigint bigint::operator>>(const bigint & src) const
{
    bigint tmp(*this);
    tmp = *this >> converter(src.getStr());
    return tmp;
}

bigint &bigint::operator>>=(const bigint & src)
{
    *this = *this >> converter(src.getStr());
    return *this;
}

bigint &bigint::operator<<=(const bigint & src)
{
    *this = *this << converter(src.getStr());
    return *this;
}

bigint bigint::operator<<(unsigned int num) const
{
    bigint tmp(*this);
    if(tmp.str != "0")
        tmp.str.resize(tmp.str.length() + num, '0');
    return tmp;
}

bigint bigint::operator>>(unsigned int num) const
{
    bigint tmp(*this);
    if (num >= tmp.str.length())
        tmp.str = "0";
    else
        tmp.str.resize(tmp.str.length() - num);
    return tmp;
}

bigint &bigint::operator>>=(unsigned int num)
{
    if (num >= this->str.length())
        this->str = "0";
    else
        this->str.resize(this->str.length() - num);
    return *this;
}

bigint &bigint::operator<<=(unsigned int num)
{
    if(this->str != "0") 
        this->str.resize(this->str.length() + num, '0');
    return *this;
}

//=== Comparisons ======================";


bool bigint::operator==(const bigint & src) const 
{
    return (this->str == src.str);
}

bool bigint::operator!=(const bigint & src) const 
{
     return (this->str != src.str);
}

bool bigint::operator>(const bigint & src) const
{
    if (this->str.length() != src.str.length())
        return (this->str.length() > src.str.length());
    return (this->str > src.str);
}

bool bigint::operator<(const bigint & src) const
{
    if (this->str.length() != src.str.length())
        return (this->str.length() < src.str.length());
    return (this->str < src.str);
}

bool bigint::operator<=(const bigint & src) const
{
    return (*this < src || *this == src);
}

bool bigint::operator>=(const bigint & src) const
{
    return (*this > src || *this == src);
}

int converter(std::string str)
{
    int num;
    std::stringstream aux(str);
    aux >> num;
    return num;
}

std::string addition (const bigint & obj1, const bigint & obj2)
{
    std::string str1;
    std::string str2;

    str1 = reserveStr(obj1.getStr());
    str2 = reserveStr(obj2.getStr());

    int len_max, len1, len2;
    len1 = str1.length();
    len2 = str2.length();

    len_max = len1 > len2 ? len1 : len2;

    if(len_max > len1)
        str1.resize(len_max, '0');

    if (len_max > len2)
        str2.resize(len_max, '0');
    
    std::string result;

    int num1, num2, carry, res;
    carry = 0;
    for (int i = 0; i < len_max; i++)
    {
        num1 = str1[i] - 48;
        num2 = str2[i] - 48;
        res = num1 + num2 + carry;
        result.push_back((res % 10) + 48);
        carry = res / 10;
    }
    
    if (carry != 0)
            result.push_back(carry + 48);
        
        return (reserveStr(result));
}
