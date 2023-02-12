cc = gcc 		# the C compiler
CFLAGS = -O -std=gnu11 	# options for the C compiler
LDLIBS = -lm 		# libaries to link

default: out.txt 	# default target is to make out.txt
	cat out.txt 	# run , output goes into out.txt

out.txt: math			# out.txt needs 
	./math > out.txt	# run , output goes into out.txt

math: math.o				#  needs .o
	$(CC) -o math math.o $(LDLIBS)	# link .o into 

math.o: math.c				# .o needs .c
	$(CC) $(CFLAGS) -c math.c	# compile .c

.PHONEY: clean
clean:					# clean is a phoney target
	$(RM) math.o math out.txt	# clean up the directory

.PHONEY: test
test:			# test target used for debugging
	echo $(LDLIBS)
	echo $(CC)
	echo $(RM)
