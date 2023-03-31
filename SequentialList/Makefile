all:test

test: LSeq.o main.o
	g++ -o executavel LSeq.o main.o
	clear
	./executavel

objs: LSeq.cpp main.cpp
	g++ -c LSeq.cpp main.cpp

clean:
	rm main.o
	rm LSeq.o
	rm executavel