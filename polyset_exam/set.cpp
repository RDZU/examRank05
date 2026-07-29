#include "set.hpp"

set::set(searchable_bag& bag) : bag(bag)
{
    // No va a hacer nada mas
}

set::set(const set& obj) : bag(obj.bag)
{
    //No va a hacer nada mas
}

// 
set& set::operator=(const set& orig)
{
    if (this != &orig)
    {
        
    }
    return (*this);
}

set::~set()
{
    // No va a hacer nada
}

const searchable_bag& set::get_bag()
{
    return (this->bag);
}

bool set::has(int value) const
{
    return bag.has(value);
}

void set::insert (int value)
{
    bag.insert(value);
}

void set::insert (int *array, int value)
{
    bag.insert(array, value);
}

void set::print() const
{
    bag.print();
}

void set::clear()
{
    bag.clear();
}