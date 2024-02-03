#
# project: oryol-simplegui
#
cmake_minimum_required(VERSION 2.8)

project(simplegui)
get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

include_directories(src)
fips_setup()
fips_project(oryol-simplegui)
fips_add_subdirectory(src/simplegui)
fips_project(conapp)
fips_add_subdirectory(src/conapp)
fips_finish()


