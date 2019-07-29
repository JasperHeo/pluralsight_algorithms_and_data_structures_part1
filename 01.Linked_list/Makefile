CFLAGS=-Wall -g
OBJ_DIR=./out
SRC_DIR=./src
SRC= $(wildcard src/*.c)
#OBJ= $(SRC:%.c=$(OBJ_DIR)/%.o)
OBJ= $(SRC:%.c=%.o)

all: test
test: $(OBJ)
	gcc $(CFLAGS) $^ -o $@

depend: .depend

.depend: $(SRC)
	rm -f ./.depend
	$(CC) $(CFLAGS) -MM $^ -MF  ./.depend;

-include .depend

#%(OBJ_DIR)/%.o : %.c
%.o : %.c
#	mkdir -p $(OBJ_DIR)
	gcc $(CFLAGS) -c $< -o $@

clean:
	#rm -f $(OJB_DIR) test .depend
	rm -f ./src/*.o test .depend
