#include "vect2.hpp"


vect2::vect2() : x(0), y(0) {}

vect2::vect2(int num1, int num2)
{
    this->x = num1;
    this->y = num2;
}

vect2::vect2(const vect2& source)
{
    this->x=source.x;
    this->y=source.y;
}

vect2& vect2::operator=(const vect2& source)
{
    if(this != &source)
    {
        this->x=source.x;
        this->y=source.y;
    }
    return *this;
}

vect2::~vect2(){}


int vect2::operator[](int index) const
{
    if(!index)
        return this->x;
    return this->y;
}

int &vect2::operator[](int index)
{
    if(!index)
        return this->x;
    return this->y;
}



vect2 vect2::operator-(const vect2 & source) const
{
    vect2 tmp(*this);
    tmp -= source;
    return tmp;
}

vect2 vect2::operator+(const vect2 & source) const
{
    vect2 tmp(*this);
    tmp += source;
    return tmp;
}

vect2 vect2::operator*(int num) const
{
    vect2 tmp(*this);
    tmp *= num;
    return tmp;
}


vect2 &vect2::operator*=(int num)
{
    this->x *= num;
    this->y *= num;
    return *this;

}
vect2 &vect2::operator-=(const vect2 & source)
{
    this->x -= source.x;
    this->y -= source.y;
    return *this;

}
vect2 &vect2::operator+=(const vect2 & source)
{
    this->x += source.x;
    this->y += source.y;
    return *this;
}


vect2 &vect2::operator++()
{
    this->x++;
    this->y++;
    return (*this);
}
vect2 vect2::operator++(int)
{
    vect2 tmp(*this);
    this->x++;
    this->y++;
    return tmp;
}
vect2 &vect2::operator--()
{
    this->x--;
    this->y--;
    return (*this);
}
vect2 vect2::operator--(int)
{
    vect2 tmp(*this);
    this->x--;
    this->y--;
    return tmp;
}

bool vect2::operator==(const vect2 & source) const
{
    return ( this->x == source.x && this->y == source.y);

}

bool vect2::operator!=(const vect2 & source) const
{
    return !(*this == source );
}

std::ostream &operator<<(std::ostream &out, const vect2 & v)
{
     out << "{" << v[0] << ", " << v[1] << "}";
     return out;

}

vect2 operator*(int num, const vect2 & source)
{
    return source * num;
}
