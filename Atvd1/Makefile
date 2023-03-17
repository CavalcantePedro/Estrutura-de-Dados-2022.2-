all:test

test: LSeq.cpp main.cpp
	g++ -o executavel LSeq.cpp main.cpp
	./executavel

objs: LSeq.cpp main.cpp
	g++ -c LSeq.cpp main.cpp

clean:
	rm executavel