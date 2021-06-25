#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
#include<vector>

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    InputIt left = first;
    InputIt a = first;
    InputIt b = first;
    InputIt right = first+1;
    while (first != last)
    {
        while (a != right)
        {
            if (!eq(*a, *b))
            {
                *right = *b;
                right++;
                b++;
            }
        a++;
        }
        a = left;
        b = a;
        first++;   
    }
    return right;
}

}
#endif