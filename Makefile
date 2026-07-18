CC = gcc
CFLAGS = -Wall -Wextra -O2 -Iinclude

all:
	mkdir -p bin
	xxd -i assets/logo.txt include/logo_asset.h
	$(CC) $(CFLAGS) src/main.c src/matrix.c src/bmp.c src/cli.c -o bin/pixmat

clean:
	rm -rf bin
