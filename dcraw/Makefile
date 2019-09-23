CFLAGS:=-O2 -fPIC

LIBLCMS:=-llcms2
LIBJASPER:=-ljasper
LIBJPEG:=-ljpeg

ifeq ($(NOLCMS),1)
CFLAGS+=-DNO_LCMS=1
LIBLCMS:=
endif

ifeq  ($(NOJASPER),1)
CFLAGS+=-DNO_JASPER=1
LIBJASPER:=
endif

ifeq  ($(NOJPEG),1)
CFLAGS+=-DNO_JPEG=1
LIBJPEG=
endif

OPTLIBS:=$(LIBLCMS) $(LIBJPEG) $(LIBJASPER)

ifeq  ($(NODEPS),1)
CFLAGS+=-DNODEPS=1
OPTLIBS:=
endif

.DEFAULT: dcraw

dcraw : dcraw.o
	$(CC) -o $@ $< $(OPTLIBS) -lm

.PHONY: clean
clean:
	rm dcraw dcraw.o
