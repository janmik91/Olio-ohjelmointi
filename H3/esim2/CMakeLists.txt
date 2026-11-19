cmake_minimum_required(VERSION 3.16)

project(esim2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(esim2 main.cpp
    ../esim1/henkilo.cpp ../esim1/henkilo.h ../esim1/yritys.cpp ../esim1/yritys.h
    osoite.h osoite.cpp
    henkilo.cpp henkilo.h yritys.cpp yritys.h)

include(GNUInstallDirs)
install(TARGETS esim2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
