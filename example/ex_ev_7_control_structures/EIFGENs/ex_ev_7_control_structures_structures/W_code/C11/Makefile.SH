case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C11"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH = -I"\$(ISE_LIBRARY)\library\vision2\spec\include" -I"\$(ISE_LIBRARY)\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $ccflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $cppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = ex_ev_7_control_structures$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C11_c.obj 

OLDOBJECTS =  ds2145.o ds2145d.o ds2145f.o ds2148.o ds2148d.o ds2148f.o ds2154.o \
	ds2154d.o ds2154f.o ds2146.o ds2146d.o ds2146f.o ds2149.o ds2149d.o \
	ds2149f.o ds2152.o ds2152d.o ds2152f.o ds2151.o ds2151d.o ds2151f.o \
	ds2161.o ds2161d.o ds2161f.o ds2147.o ds2147d.o ds2147f.o ds2156.o \
	ds2156d.o ds2156f.o ds2150.o ds2150d.o ds2150f.o kl2153.o kl2153d.o \
	kl2153f.o ds2155.o ds2155d.o ds2155f.o ds2162.o ds2162d.o ds2162f.o \
	ds2163.o ds2163d.o ds2163f.o ds2157.o ds2157d.o ds2157f.o ds2160.o \
	ds2160d.o ds2160f.o xm2138.o xm2138d.o xm2138f.o ds2158.o ds2158d.o \
	ds2158f.o xm2143.o xm2143d.o xm2143f.o xm2137.o xm2137d.o xm2137f.o \
	dt2141.o dt2141d.o dt2141f.o dt2140.o dt2140d.o dt2140f.o dt2142.o \
	dt2142d.o dt2142f.o uc2144.o uc2144d.o uc2144f.o kl2159.o kl2159d.o \
	kl2159f.o xm2135.o xm2135d.o xm2135f.o xm2136.o xm2136d.o xm2136f.o \
	xm2134.o xm2134d.o xm2134f.o xm2133.o xm2133d.o xm2133f.o xm2131.o \
	xm2131d.o xm2131f.o dt2139.o dt2139d.o dt2139f.o xm2132.o xm2132d.o \
	xm2132f.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

