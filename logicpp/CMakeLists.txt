project(logicpp)
add_library(logicpp)

target_sources(logicpp
        PUBLIC
        FILE_SET CXX_MODULES FILES
        mod.ixx
        unit/mod.ixx
        unit/eknow.ixx
        unit/num.ixx
)
target_sources(logicpp
        PRIVATE
        unit/num.cc
)