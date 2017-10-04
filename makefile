compile: skrt.c
	gcc skrt.c
run: compile
	./a.out
clean:
	rm * .o	
	rm * ~	
