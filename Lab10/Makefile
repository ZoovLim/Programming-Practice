CC = gcc

TADIR = TA_obj
TESTIN = testin.txt
REFOUT = refout.txt
USEROUT = myout.txt

# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# !!! You don't have to understand this!!!
# !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#
# You can use these macros with 'make (macro)'
# Example) make insert
# Example) make stest
# Example) make clean

# Create Reference Program. All components are TA's object.
reference :
	gcc -o reference main.c $(TADIR)/TA_insert.o $(TADIR)/TA_search.o $(TADIR)/TA_delete.o

# Generate Reference Output. Make sure your input file correct.
refrun : reference
	./reference < $(TESTIN) > $(REFOUT)

# Compile your insert, search, delete and create executable file.
insert : insert.c
	gcc -o runinsert main.c insert.c $(TADIR)/TA_search.o $(TADIR)/TA_delete.o

search : search.c
	gcc -o runsearch main.c search.c $(TADIR)/TA_insert.o $(TADIR)/TA_delete.o

delete : delete.c
	gcc -o rundelete main.c delete.c $(TADIR)/TA_insert.o $(TADIR)/TA_search.o


# Test your program
itest : refrun insert
	./runinsert < $(TESTIN) > $(USEROUT)
	diff -Z --report-identical-files $(REFOUT) $(USEROUT)

stest : refrun search
	./runsearch < $(TESTIN) > $(USEROUT)
	diff -Z --report-identical-files $(REFOUT) $(USEROUT)

dtest : refrun delete
	./rundelete < $(TESTIN) > $(USEROUT)
	diff -Z --report-identical-files $(REFOUT) $(USEROUT)

# Delete unnecessary files.
clean :
	rm -f runinsert runsearch rundelete reference refout.txt myout.txt
