all:
	for FILE in `ls *.c`; \
	       	do \
		gcc -I.. $$FILE ../common/err_hdlr.o -o `basename $${FILE} .c`.out; \
	       	done
	
clean:
	-rm *.out
	
