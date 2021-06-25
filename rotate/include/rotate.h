#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    ForwardIt a = n_first;
    ForwardIt left;
    while (n_first != first)
    {
        left = first;
        while (left+1 != last)
        {
            std::swap(*left, *(left+1));
            left++;
        }
        n_first--;
    }
   return a+1;
}

}
#endif