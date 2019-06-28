cmake_minimum_required(VERSION 3.10)
project(MyChess)

set(CMAKE_CXX_STANDARD 14)
include_directories(include src game)
link_directories(/usr/lib/x86_64-linux-gnu/)
file(GLOB SRC ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB INC ${CMAKE_SOURCE_DIR}/include/*.h)
add_executable(MyChess main.cpp ${SRC} ${INC} game/game.h)


#add_executable(MyChess main.cpp include/figure.h include/queen.h src/queen.cpp include/bishop.h src/bishop.cpp include/rook.h src/rook.cpp include/knight.h src/knight.cpp include/king.h src/king.cpp include/board.h src/board.cpp include/pawn.h src/pawn.cpp)
target_link_libraries(MyChess sfml-window sfml-graphics sfml-system)
