CC := gcc
CFLAGS := -Wall -O3
Libs = -lpthread
Target := address
Source := $(wildcard src/*.c)
Objs := $(patsubst %.c,%.o,$(Source))
Modules += main interface add delete search display clean insert quit error
AllObjs := $(addsuffix /src/*.o,$(Modules))

