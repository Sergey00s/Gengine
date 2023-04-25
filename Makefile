

ifeq ($(OS),Windows_NT)
	RM = del /Q
	NAME=Engine.exe
else
	RM = rm -rf
	NAME=Engine
endif

CC=g++
SRC= $(wildcard src/*.cpp) main.cpp
OBJ = $(patsubst %.cpp,%.o,$(notdir $(SRC)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o build\$(NAME) obj\$(OBJ) -lSDL2main -lSDL2

%.o: %.cpp
	$(CC) -o obj\$@ -c $<


clean:
	$(RM) obj\$(OBJ)

fclean: clean
	$(RM) build\$(NAME)


run : all
	build\$(NAME)