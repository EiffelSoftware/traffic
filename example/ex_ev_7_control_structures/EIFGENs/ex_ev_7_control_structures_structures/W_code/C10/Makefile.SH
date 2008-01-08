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
echo "Compiling C code in C10"
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

OBJECTS = big_file_C10_c.obj 

OLDOBJECTS =  tr2127.o tr2127d.o tr2127f.o ti2098.o ti2098d.o ti2098f.o tr2128.o \
	tr2128d.o tr2128f.o kl2126.o kl2126d.o kl2126f.o ki2125.o ki2125d.o \
	ki2125f.o da2101.o da2101d.o da2101f.o da2100.o da2100d.o da2100f.o \
	xm2118.o xm2118d.o xm2118f.o xm2110.o xm2110d.o xm2110f.o dt2124.o \
	dt2124d.o dt2124f.o da2099.o da2099d.o da2099f.o xm2108.o xm2108d.o \
	xm2108f.o xm2117.o xm2117d.o xm2117f.o xm2116.o xm2116d.o xm2116f.o \
	xm2115.o xm2115d.o xm2115f.o xm2109.o xm2109d.o xm2109f.o xm2111.o \
	xm2111d.o xm2111f.o xm2122.o xm2122d.o xm2122f.o dt2123.o dt2123d.o \
	dt2123f.o uc2121.o uc2121d.o uc2121f.o xm2114.o xm2114d.o xm2114f.o \
	xm2113.o xm2113d.o xm2113f.o xm2112.o xm2112d.o xm2112f.o yy2130.o \
	yy2130d.o yy2130f.o dt2105.o dt2105d.o dt2105f.o dt2104.o dt2104d.o \
	dt2104f.o dt2103.o dt2103d.o dt2103f.o dt2102.o dt2102d.o dt2102f.o \
	dt2107.o dt2107d.o dt2107f.o dt2106.o dt2106d.o dt2106f.o xm2120.o \
	xm2120d.o xm2120f.o xm2119.o xm2119d.o xm2119f.o yy2129.o yy2129d.o \
	yy2129f.o 

all: Cobj10.o

Cobj10.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj10.o $(OBJECTS)
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

