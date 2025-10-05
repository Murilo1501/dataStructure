#variables 

APP = ./app
SRC = ./src
INCLUDE = ./include 
obj = ./obj
BIN = ./bin

#compiling all files in macOS usgin clang
all: tad app

tad:
	clang -c $(SRC)/appName.c -I $(INCLUDE) -o .$(OBJ)/appName.o

app:
	clang $(APP)/app.c $(obj)/*.O -I $(INCLUDE) -o $(BIN)/app
#run the program compiled
run:
	echo "run program"
	$(BIN)/appName

#delete all files in bin and obj directory
clean:
	rm	./bin/* ./obj/*    