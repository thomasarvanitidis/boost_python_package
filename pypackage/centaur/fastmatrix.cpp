// Author: Thomas Arvanitidis
// URL:    https://github.com/tarvanitidis/rpath_tutorial

#include <iostream>
#include "boost/python.hpp"
#include "boost/python/list.hpp"
#include <boost/python/stl_iterator.hpp>
#include "fastmatrix.h"

namespace fastmatrix 
{

template< typename T >
inline
std::vector< T > to_std_vector( const p::object& iterable )
{
    return std::vector< T >( p::stl_input_iterator< T >( iterable ),
                             p::stl_input_iterator< T >( ) );
}

void supper_fast_addition(std::vector<double>& a, std::vector<double>& b,
                          std::vector<double>& out)
{
    if (a.size() != b.size()
        && a.size() != out.size())
        std::cout << "Vectors should be of same size.\n";

    for (int n = 0; n < b.size(); ++n)
    {
        out[n] = a[n] + b[n];
    }
}

// Converts a C++ vector to a python list
template <class T>
boost::python::list toPythonList(std::vector<T> vector) {
    typename std::vector<T>::iterator iter;
    boost::python::list list;
    for (iter = vector.begin(); iter != vector.end(); ++iter) {
        list.append(*iter);
    }
    return list;
}

p::list add(p::list a, p::list b)
{
    std::vector<double> output (boost::python::len(a));
    std::vector<double> a_ (to_std_vector<double>(a));
    std::vector<double> b_ (to_std_vector<double>(b));

    supper_fast_addition(a_, b_, output);
    std::cout << "Here\n";

    return toPythonList<double>(output);
}

} // End of namespace fastmatrix
