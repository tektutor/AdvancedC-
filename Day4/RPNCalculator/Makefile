BIN = bin

EXE = $(BIN)/testerApp.exe

OBJS = $(BIN)/RPNCalculator.o \
       $(BIN)/RPNCalculatorTest.o

LIBS = -pthread $(BIN)/libgtest.a

CPPFLAGS = -std=c++11

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

.PHONY: clean

clean:
	rm -f $(BIN)/*.o $(BIN)/*.exe

