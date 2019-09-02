.PHONY: clean All

All:
	@echo "----------Building project:[ fibonnacciproject - Debug ]----------"
	@cd "4-3" && "$(MAKE)" -f  "fibonnacciproject.mk"
clean:
	@echo "----------Cleaning project:[ fibonnacciproject - Debug ]----------"
	@cd "4-3" && "$(MAKE)" -f  "fibonnacciproject.mk" clean
