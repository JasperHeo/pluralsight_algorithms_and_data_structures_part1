all: test

OBJ_DIR=./out
SRC_DIR=./src
SRC= $(wildcard src/*.c)
#OBJ= $(SRC:%.c=$(OBJ_DIR)/%.o)
OBJ= $(SRC:%.c=%.o)

test: $(OBJ)
	gcc -Wall $^ -o $@

depend: .depend

.depend: $(SRC)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^ -MF  ./.depend;

-include .depend

#%(OBJ_DIR)/%.o : %.c
%.o : %.c
#	mkdir -p $(OBJ_DIR)
	gcc -Wall -c $< -o $@

clean:
	#rm -f $(OJB_DIR) test .depend
	rm -f ./src/*.o test .depend
