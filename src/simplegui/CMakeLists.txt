#-------------------------------------------------------------------------------
#   It's just a stuoid test
#-------------------------------------------------------------------------------
fips_begin_module(simplegui)
    fips_vs_warning_level(3)
    fips_files(
        simplegui.h
	simplegui.cc
    )
    fips_deps(Core)
fips_end_module()
