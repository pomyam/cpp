cmake_minimum_required(VERSION 3.20)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 main.cpp Zombie.cpp Zombie.hpp " ZombieHorde.cpp")
