CFLAGS = -Wall -g 
INC = include/
BIN = bin/
SRC = src/

run: $(BIN)bubbleSort.o $(BIN)insertionSort.o $(BIN)usefulFncs.o $(BIN)mergeSort.o $(BIN)main.o
	gcc $(CFLAGS) $(BIN)bubbleSort.o $(BIN)insertionSort.o $(BIN)usefulFncs.o $(BIN)mergeSort.o $(BIN)main.o -o run

# insertionSort: $(BIN)insertionSort.o $(BIN)usefulFncs.o $(BIN)main.o
# 	gcc $(CFLAGS) $(BIN)insertionSort.o $(BIN)usefulFncs.o $(BIN)main.o -o insertionSort

$(BIN)main.o: $(SRC)main.c 
	gcc -c $(CFLAGS) -I$(INC) $(SRC)main.c -o $(BIN)main.o

$(BIN)bubbleSort.o: $(SRC)bubbleSort.c $(INC)bubbleSort.h
	gcc -c $(CFLAGS) -I$(INC) $(SRC)bubbleSort.c -o $(BIN)bubbleSort.o

$(BIN)insertionSort.o: $(SRC)insertionSort.c $(INC)insertionSort.h 
	gcc -c $(CFLAGS) -I$(INC) $(SRC)insertionSort.c -o $(BIN)insertionSort.o

$(BIN)mergeSort.o: $(SRC)mergeSort.c $(INC)mergeSort.h 
	gcc -c $(CFLAGS) -I$(INC) $(SRC)mergeSort.c -o $(BIN)mergeSort.o

$(BIN)usefulFncs.o: $(SRC)usefulFncs.c $(INC)usefulFncs.h
	gcc -c $(CFLAGS) -I$(INC) $(SRC)usefulFncs.c -o $(BIN)usefulFncs.o

clean:
	rm $(BIN)*.o