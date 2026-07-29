#ifndef SEARCHABLE_ARRAY_BAG_H
#define SEARCHABLE_ARRAY_BAG_H

#include <string.h>

#include "searchable_bag.hpp"
#include "array_bag.hpp"

class searchable_array_bag : public searchable_bag, public array_bag
{
    private:

    public:
        searchable_array_bag();
        searchable_array_bag(const searchable_array_bag& obj);
        searchable_array_bag& operator=(const searchable_array_bag& source);
        ~searchable_array_bag();

        bool has(int value) const;
};

#endif