CC = gcc
CFLAGS = -Wfatal-errors -Wall -Wextra -Wpedantic -Wconversion -Wshadow

BIN = run

BUILD_DIR = ./build
#SRC = api.c $(wildcard dir1/*.cpp) $(wildcard dir2/*.cpp)
SRC =  $(wildcard src/*.c)
OBJ = $(SRC:%.c=$(BUILD_DIR)/%.o)
DEP = $(OBJ:%.o=%.d)

$(BIN) : $(BUILD_DIR)/$(BIN)

$(BUILD_DIR)/$(BIN) : $(OBJ)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $^ -o $@

-include $(DEP)

# The potential dependency on header files is covered
# by calling `-include $(DEP)`.
$(BUILD_DIR)/%.o : %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

.PHONY : clean
clean :
	rm -f $(BUILD_DIR)/$(BIN) $(OBJ) $(DEP)
