// Author: Thomas Arvanitidis
// URL:    https://github.com/thomasarvanitidis/boost_python_package

#ifndef _FASTMATRIX_H_
#define _FASTMATRIX_H_

#include <vector>
#include "boost/python/list.hpp"

namespace p = boost::python;

namespace fastmatrix
{

    void supper_fast_addition(std::vector<double>& a, std::vector<double>& b,
                              std::vector<double>& out);

    p::list add(p::list a, p::list b);

} // End of namespace fastmatrix

#endif // End of _FASTMATRIX_H_
