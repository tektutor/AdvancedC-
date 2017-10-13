BIN = bin

EXE = $(BIN)/testerApp.exe

OBJS = $(BIN)/RPNCalculator.o \
       $(BIN)/Addition.o \
       $(BIN)/Subtraction.o \
       $(BIN)/Multiplication.o \
       $(BIN)/Division.o \
       $(BIN)/MathFactory.o \
       $(BIN)/RPNCalculatorTest.o

LIBS = -pthread $(BIN)/libgtest.a

CPPFLAGS = -std=c++11 -g

INC = -I googletest \
      -I googletest/include \
      -I googlemock \
      -I googlemock/include \
      -I src \
      -I test

all: $(OBJS)
	g++ -o $(EXE) $(OBJS) $(LIBS) $(CPPFLAGS)
	$(EXE)

$(BIN)/RPNCalculator.o: src/RPNCalculator.cpp
	g++ -c -o $(BIN)/RPNCalculator.o src/RPNCalculator.cpp $(CPPFLAGS) $(INC)

$(BIN)/RPNCalculatorTest.o: test/RPNCalculatorTest.cpp
	g++ -c -o $(BIN)/RPNCalculatorTest.o test/RPNCalculatorTest.cpp $(CPPFLAGS) $(INC)

$(BIN)/Addition.o: src/Addition.cpp
	g++ -c -o $(BIN)/Addition.o src/Addition.cpp $(CPPFLAGS) $(INC)

$(BIN)/Subtraction.o: src/Subtraction.cpp
	g++ -c -o $(BIN)/Subtraction.o src/Subtraction.cpp $(CPPFLAGS) $(INC)

$(BIN)/Multiplication.o: src/Multiplication.cpp
	g++ -c -o $(BIN)/Multiplication.o src/Multiplication.cpp $(CPPFLAGS) $(INC)

$(BIN)/Division.o: src/Division.cpp
	g++ -c -o $(BIN)/Division.o src/Division.cpp $(CPPFLAGS) $(INC)

$(BIN)/MathFactory.o: src/MathFactory.cpp
	g++ -c -o $(BIN)/MathFactory.o src/MathFactory.cpp $(CPPFLAGS) $(INC)

.PHONY: clean

clean:
	rm -f $(BIN)/*.o $(BIN)/*.exe

