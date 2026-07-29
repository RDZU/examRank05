#ifndef SET_H
#define SET_H

#include "searchable_bag.hpp"

class set
{
    private:
        searchable_bag& bag;

    public:

        set(searchable_bag& bag);
        set(const set& obj);
        set& operator=(const set& orig);
        ~set();

        const searchable_bag& get_bag();

        bool has(int value) const;

        void insert(int value);
        void insert(int *array, int size);
        void print() const;
        void clear();
};

#endif