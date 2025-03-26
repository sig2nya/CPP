.PHONY: all clean

SUBDIRS := ch1 ch2 ch3 ch4 ch10  # 여기에 존재하는 챕터 디렉토리를 나열

all:
	@for dir in $(SUBDIRS); do \
		echo "Building in $$dir..."; \
		$(MAKE) -C $$dir; \
	done

clean:
	@for dir in $(SUBDIRS); do \
		echo "Cleaning in $$dir..."; \
		$(MAKE) -C $$dir clean; \
	done
