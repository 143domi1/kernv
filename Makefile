all:
	mkdir -p build
	gcc -static kernv.c -o build/kernv

clean:
	rm -rf build
