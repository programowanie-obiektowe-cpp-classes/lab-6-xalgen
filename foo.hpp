#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    auto it = retval.rbegin();
    std::for_each(people.begin(), people.end(), [& it](Human& h) { 
        
        h.birthday();

        *it = h.isMonster() ? 'n' : 'y';
        it++;

        });
    


    return retval;
}
