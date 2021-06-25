#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;
using std::swap;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    ForwardIt left = first;
    ForwardIt a = first;
    ForwardIt b = first+1;
    while (first != last)
    {
        while (b != last)
        {
            if (!cmp(*a, *b))
            {
                std::swap(*a, *b);
            }
            b++;
        }
        first++;
        a = first;
        b = a+1; 
    }
}

}
#endif