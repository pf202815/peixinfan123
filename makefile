
all: taskb
taskb: main.o

main.o: main.cc 
	g++ -c main.cc

clean:
	-rm *.o
	-rm -rf html
	-rm -rf latex
