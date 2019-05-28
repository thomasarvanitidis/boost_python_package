// Author: Thomas Arvanitidis
// URL:    https://github.com/thomasarvanitidis/boost_python_package

#include "boost/python/module.hpp"
#include "boost/python/def.hpp"
#include "boost/python/numpy.hpp"
#include "fastmatrix.h"

namespace p = boost::python;

/***************************/
/* PYTHON MODULE INTERFACE */
/***************************/

BOOST_PYTHON_FUNCTION_OVERLOADS(add, fastmatrix::add, 2, 2)

BOOST_PYTHON_MODULE(_centaur)
{

    p::def("supper_fast_addition", fastmatrix::supper_fast_addition);

    p::def("add", fastmatrix::add, add(
      (p::arg("a"),
       p::arg("b")
     )));

}
