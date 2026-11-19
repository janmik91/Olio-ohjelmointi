cmake_minimum_required(VERSION 3.16)

project(esim1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(esim1 main.cpp
    henkilo.h henkilo.cpp
    yritys.h yritys.cpp)

include(GNUInstallDirs)
install(TARGETS esim1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
