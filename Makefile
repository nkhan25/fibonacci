.PHONY: clean All

All:
	@echo "----------Building project:[ fibonacciproject - Debug ]----------"
	@cd "4-3" && "$(MAKE)" -f  "fibonacciproject.mk"
clean:
	@echo "----------Cleaning project:[ fibonacciproject - Debug ]----------"
	@cd "4-3" && "$(MAKE)" -f  "fibonacciproject.mk" clean
