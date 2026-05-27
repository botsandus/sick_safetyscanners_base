include(CMakeFindDependencyMacro)
#find_dependency(Threads)
set(Boost_NO_BOOST_CMAKE ON)
find_package(Boost REQUIRED MODULE COMPONENTS chrono thread)
include("${CMAKE_CURRENT_LIST_DIR}/sick_safetyscanners_baseTargets.cmake")

