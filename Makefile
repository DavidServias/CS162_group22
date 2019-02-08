CXX = g++
  
CXXFLAGS = -std=c++11

# SRC
SRC1 = InputVal.cpp
SRC2 = Menu.cpp
SRC3 = Game.cpp
SRC4 = Grid.cpp
SRC5 = Critter.cpp
SRC6 = Ant.cpp
SRC7 = Doodlebug.cpp
SRC8 = main.cpp

SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8}

# HEADERS
HEADER1 = InputVal.hpp
HEADER2 = Menu.hpp
HEADER3 = Game.hpp
HEADER4 = Grid.hpp
HEADER5 = Critter.hpp
HEADER6 = Ant.hpp
HEADER7 = Doodlebug.hpp

# executables
PROG1 = prog
PROGS = ${PROG1}

# make all
all:
    ${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}

# make clean
clean:
    rm -f ${PROGS} *.o *~

# run program with valgrind
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./prog

