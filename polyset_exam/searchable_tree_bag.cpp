


#include "searchable_tree_bag.hpp"


/*
        8
       / \
      3   12
         /
        10

10 > 8  → derecha
10 < 12 → izquierda
10 == 10 → true
*/
searchable_tree_bag::searchable_tree_bag()
{
    // No va a hacer nada
}

searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag& obj) : tree_bag(obj)
{
}

searchable_tree_bag& searchable_tree_bag::operator=(const searchable_tree_bag& source)
{
    if (this != &source)
        tree_bag::operator=(source);
    return (*this);
}

searchable_tree_bag::~searchable_tree_bag()
{
    // NO va a hacer nada
}

bool searchable_tree_bag::has(int value) const
{
    node *tmp = tree;

    while (tmp != NULL)
    {
        if (tmp->value == value)
            return true;
        else if (value < tmp->value)
            tmp = tmp->l;
        else
            tmp = tmp->r;
    }

    return false;
}