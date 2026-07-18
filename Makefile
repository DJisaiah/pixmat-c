CC = gcc
CFLAGS = -Wall -Wextra -O0 -Iinclude # 02 in prod

all:
	mkdir -p bin
	xxd -i assets/logo.txt include/logo_asset.h
	$(CC) $(CFLAGS) src/main.c src/matrix.c src/bmp.c src/cli.c -o bin/pixmat

clean:
	rm -rf bin
