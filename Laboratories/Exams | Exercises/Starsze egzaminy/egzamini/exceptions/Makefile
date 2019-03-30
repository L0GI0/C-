# ==================================================================================================================================

EXEC = KatarzynaMyrek

SOURCES = $(wildcard *.cpp)

ADDITIONAL_LINKED_OBJ =

# ==================================================================================================================================

CFLAGS = -g -Wall -pedantic

# not need 'O3' etc. in deps searching phase:
MM_CFLAGS =
LFLAGS = -g -Wall -pedantic

CO = g++
LD = $(CO)

CIACH = sed 's/\(.\{100\}\).*/\1.../'

# ==================================================================================================================================

%.o: %.cpp Makefile
        # $<   The name of the first prerequisite. 
        # $@   The file name of the target of the rule. 
        # $*   The stem with which an implicit rule matches (see How Patterns Match). If the target is dir/a.foo.b and the target 
        #      pattern is a.%.b then the stem is dir/foo. The stem is useful for constructing names of related files. In a static 
        #      pattern rule, the stem is part of the file name that matched the `%' in the target pattern.

	@echo ">> Wykrywam zaleznosci dla '$<':"
	@`which echo` -n "   "
	$(CO) -MM $(MM_CFLAGS) $< | sed "s/$*\.o/$*.o $*.d/" > $*.d
	@echo ">> Wykryte zaleznosci (w zwiazku z '$<'):"
	@`which echo` -n "   "
	@cat $*.d | sed 's/ \\//' | sed -e ':a' -e 'N' -e '$$!ba' -e 's/ *\n.\?//g'
	@echo ">> Kompiluje '$<':"
	@`which echo` -n "   "
	$(CO) -c $(CFLAGS) $< -o $@

# ==================================================================================================================================

.PHONY: all rebuild clean run docs-before odstep_przed odstep_po docs-quiet docs
all: odstep_przed $(EXEC) docs-quiet odstep_po

# A substitution reference substitutes the value of a variable with alterations that you specify. 
# It has the form `$(var:a=b)' (or `${var:a=b}') and its meaning is to take the value of the variable var, 
# replace every a at the end of a word with b in that value, and substitute the resulting string.
$(EXEC): $(SOURCES:.cpp=.o) $(ADDITIONAL_LINKED_OBJ)
	@echo ">> Linkuje program glowny ('$<'):"
	@`which echo` -n "   "
	$(CO) $(LFLAGS) $^ -o $@

# ==================================================================================================================================




# ==================================================================================================================================

odstep_przed:
	@echo ""
	@echo ">> Rozpoczynam budowanie programu..."
	@echo ">> Wykryte pliki z kodem zrodlowym:"
	@`which echo` -n "   "
	@echo $(SOURCES)

odstep_po:
	@echo ">> Gotowe, program zbudowany!"
	@echo ""

run:    odstep_przed $(EXEC) odstep_po
	@sleep 1
	@echo ">> Uruchamiam program..."
	@`which echo` -n "   "
	./${EXEC}

clean:     
	@echo ""
	@echo ">> Kasuje wszystkie smieci:"
	@`which echo` -n "   "
	rm -rf doc *.o  *~ *.a \#* core a.out *.d $(EXEC)
	@echo ""

rebuild: odstep_przed clean $(EXEC) docs-quiet odstep_po

docs-before:
	@echo
	@echo ">> Generuje dokumentacje kodu:"
	@`which echo` -n "   "

docs-quiet: docs-before
	@echo
	#===doxygen Doxyfile &>/dev/null

docs: docs-before
	@echo
	doxygen Doxyfile

cp:
	wget http://fatcat.ftj.agh.edu.pl/~malinowski/main.cpp

zip:
	tar -zcvf MyrekKatarzyna.tar.gz *

send:
	iceweasel http://fatcat.ftj.agh.edu.pl/~malinowski/Lab/

# z manuala GNU make:
#
# If you want make to simply ignore a makefile which does not exist and cannot be remade, 
# with no error message, use the -include directive instead of include, like this:
#
#     -include filenames...
#
# This acts like include in every way except that there is no error (not even a warning) if 
# any of the filenames do not exist. For compatibility with some other make implementations, sinclude is another name for -include. 

-include $(SOURCES:.cpp=.d)

# ==================================================================================================================================
