#.DEFAULT_GOAL := generate

.PHONY: all say_hello generate clean

all: say_hello generate

say_hello:
	@echo "Hello World"

generate:
	@echo "Creating empty text files..."
	@for i in $$(seq 1 10); do \
        touch file-$$i.txt; \
    done

clean:
	@echo "Cleaning up..."
	@rm *.txt
