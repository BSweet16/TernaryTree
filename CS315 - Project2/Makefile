# Sample makefile for a C program

# change "myProgram" to the name of your program.
# change "program parameters" to whatever parameters your program takes.
#  If none, just remove "program parameters".
# If you are using C++, change ".c" to ".cpp" and "gcc" to "g++".

GOAL = main
# PARAMS = program parameters

$(GOAL): $(GOAL).cpp
	g++ -Wall $(GOAL).cpp -o $(GOAL)

run: $(GOAL)
	./$(GOAL) $(PARAMS)