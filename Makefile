

RM=/bin/rm -f

all:	main2
	echo "I made them all!"

main2:	main2.o greetlib.o
	g++ main2.o greetlib.o -o main2

main2.o: main2.cpp greetLib.h
	g++ -c main2.cpp

clean:
	${RM} *.o
	${RM} hello
	${RM} main1
	${RM} main2
	${RM} file.txt
