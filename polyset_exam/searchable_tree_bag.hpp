#ifndef SEARCHABLE_TREE_BAG_H
#define SEARCHABLE_TREE_BAG_H

#include <string.h>

#include "searchable_bag.hpp"
#include "tree_bag.hpp"

class searchable_tree_bag : public searchable_bag, public tree_bag
{
    private:

    public:
        searchable_tree_bag();
        searchable_tree_bag(const searchable_tree_bag& obj);
        searchable_tree_bag& operator=(const searchable_tree_bag& source);
        ~searchable_tree_bag();

        bool has(int value) const;
};

#endif