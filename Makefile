CXX = g++
CXXFLAGS = -std=c++11
TARGET = a.out
SRC = main.cpp

once: $(SRC)
	@$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS)
	@./$(TARGET)
	@make clean

.PHONY: clean
clean:
	@$(RM) -f $(TARGET) *.o
