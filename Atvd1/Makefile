all:test

test: LSeq.o main.o
	g++ -o executavel LSeq.o main.o
	./executavel

objs: LSeq.cpp main.cpp
	g++ -c LSeq.cpp main.cpp

clean:
	rm executavel
	rm main.o
	rm LSeq.o