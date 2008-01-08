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
echo "Compiling C code in C14"
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

OBJECTS = big_file_C14_c.obj 

OLDOBJECTS =  ds2255.o ds2255d.o ds2260.o ds2260d.o ds2256.o ds2256d.o ds2259.o \
	ds2259d.o ds2258.o ds2258d.o ds2254.o ds2254d.o ds2257.o ds2257d.o \
	ds2246.o ds2246d.o kl2253.o kl2253d.o ds2261.o ds2261d.o ds2240.o \
	ds2240d.o ds2230.o ds2230d.o ds2247.o ds2247d.o ki2245.o ki2245d.o \
	ki2245f.o ki2244.o ki2244d.o ki2244f.o ds2239.o ds2239d.o ds2231.o \
	ds2231d.o ds2248.o ds2248d.o ds2241.o ds2241d.o ds2241f.o ds2236.o \
	ds2236d.o ds2262.o ds2262d.o ds2237.o ds2237d.o ds2232.o ds2232d.o \
	ds2249.o ds2249d.o ds2234.o ds2234d.o ds2251.o ds2251d.o ds2242.o \
	ds2242d.o ds2242f.o ds2243.o ds2243d.o ds2243f.o ds2235.o ds2235d.o \
	ds2252.o ds2252d.o ds2238.o ds2238d.o kl2233.o kl2233d.o kl2250.o \
	kl2250d.o 

all: Cobj14.o

Cobj14.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj14.o $(OBJECTS)
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

