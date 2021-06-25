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
template < typename Itr >
void reverse( Itr first, Itr last )
{
    Itr left = first;
    Itr right = last;
    int size = last-first;
    for (int i = 0; i < size/2; i++)
    {
        std::swap (*left, *(right-1));
        left++;
        right--;    
    }
}

}
#endif