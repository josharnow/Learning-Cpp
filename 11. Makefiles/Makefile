math: math_stuff.o math_utils.o # Lefthand side is the "destination," righthand side is the "source"
	g++ math_stuff.o math_utils.o -o math

math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

clean: # Removes residual files
	rm *.o math