SUBDIRS := algorithm modoo stl

.PHONY: all clean

all:
	@for dir in $(SUBDIRS); do \
		if [ -f $$dir/Makefile ]; then \
			$(MAKE) -C $$dir; \
		else \
			echo "Skipping $$dir (no Makefile)"; \
		fi \
	done

clean:
	@for dir in $(SUBDIRS); do \
		if [ -f $$dir/Makefile ]; then \
			$(MAKE) -C $$dir clean; \
		else \
			echo "Skipping $$dir (no Makefile)"; \
		fi \
	done

