all:
	for FILE in `ls *.c`; \
	       	do \
		gcc -I.. $$FILE ../common/err_hdlr.o -o $${FILE}.out; \
	       	done
	
clean:
	-rm *.out
	
