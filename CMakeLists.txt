cmake_minimum_required(VERSION 3.31)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(jour2/job1)

add_executable(runtrack_cpp
        jour2/job1/Aquatique.cpp
        jour2/job1/Aquatique.hpp
        jour2/job2/main.cpp
        jour2/job2/Pingouin.cpp
        jour2/job2/Pingouin.hpp
        jour2/job1/Terrestre.cpp
        jour2/job1/Terrestre.hpp
        jour2/job4/main.cpp
        jour3/job1/Vector2d.cpp
        jour3/job1/Vector2d.hpp
        jour3/job2/GameObject.cpp
        jour3/job2/GameObject.hpp
        jour3/job3/Decor.cpp
        jour3/job3/Decor.hpp
        jour3/job3/Character.cpp
        jour3/job3/Character.hpp
        jour3/job4/Weapon.cpp
        jour3/job4/Weapon.hpp
        jour3/job4/Bow.cpp
        jour3/job4/Bow.hpp
        jour3/job4/Sword.cpp
        jour3/job4/Sword.hpp
        jour3/job4/Spear.cpp
        jour3/job4/Spear.hpp
        jour3/job5/Enemy.cpp
        jour3/job5/Enemy.hpp
        jour3/job5/Player.cpp
        jour3/job5/Player.hpp
        jour4/job1.cpp
        jour4/job2.cpp
        jour4/job3.cpp
        jour4/job4.cpp
)
