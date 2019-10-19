sources=$(wildcard *.solution.c)

all: ${sources:.solution.c=.c} ../tasks.zip


%.c: %.solution.c
	echo $^
	sed '/\/\/ BEGIN SOLUTION/,/\/\/ END SOLUTION/d' $^ > $@

../tasks.zip: ${sources:.solution.c=.c} CMakeLists.txt 
	rm $@ || true
	zip $@ $^



