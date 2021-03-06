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
 /*
 80%, faltou a documentação
 */
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    ForwardIt left = first;
    while (first != last)
    {
        if (p(*first))
            {
                std::swap(*left, *first);
                left++;
            }
        first++;
    }
    return left;
}

}
#endif