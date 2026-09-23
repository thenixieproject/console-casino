cmake_minimum_required(VERSION 4.3)
project (ConsoleCasino VERSION 1.0 LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ConsoleCasino)
target_sources(ConsoleCasino
        PRIVATE
            main.cpp
)

add_library(GameData)
target_sources(GameData
        PRIVATE
            src/Blackjack.cpp
            src/Card.cpp
            src/Player.cpp
            src/Utilities.cpp

        PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include
        FILES
            include/Blackjack.hpp
            include/Card.hpp
            include/Player.hpp
            include/Utilities.hpp
)

target_link_libraries(ConsoleCasino
        PRIVATE
            GameData
)