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
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    ForwardIt a = n_first;
    ForwardIt left;
    while (n_first != first) //não precisava ser quadrática a complexidade...
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