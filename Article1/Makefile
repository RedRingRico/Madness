ifeq ($(strip $(PNDSDK)),)
$(error Please set PNDSDK to point to your Pandora toolchain root directory)
endif
.PHONY: all

all:
	pandora-gcc -o hellopandora -I$(PNDSDK)/usr/include -I. *.c \
	-L$(PNDSDK)/usr/lib -lncurses
