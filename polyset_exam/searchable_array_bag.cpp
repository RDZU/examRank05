#include "searchable_array_bag.hpp"

searchable_array_bag::searchable_array_bag()
{
    // No va a hacer nada
}

searchable_array_bag::searchable_array_bag(const searchable_array_bag& obj) : array_bag(obj)
{
}

searchable_array_bag& searchable_array_bag::operator=(const searchable_array_bag& source)
{
    if (this != &source)
        array_bag::operator=(source);
    return (*this);
}

searchable_array_bag::~searchable_array_bag()
{
    // NO va a hacer nada
}

bool searchable_array_bag::has(int value) const
{
    for (int i = 0; i < size; i++)
    {
        if (this->data[i] == value)
            return (true);
    }
    return (false);
}