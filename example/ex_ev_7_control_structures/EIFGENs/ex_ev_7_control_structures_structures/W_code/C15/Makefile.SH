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
echo "Compiling C code in C15"
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

OBJECTS = big_file_C15_c.obj 

OLDOBJECTS =  fu2274.o fu2274d.o bi2292.o bi2292d.o tw2291.o tw2291d.o su2281.o \
	su2281d.o su2279.o su2279d.o li2276.o li2276d.o ar2275.o ar2275d.o \
	tr2277.o tr2277d.o su2278.o su2278d.o tw2293.o tw2293d.o li2282.o \
	li2282d.o su2280.o su2280d.o kl2265.o kl2265d.o kl2269.o kl2269d.o \
	tr2271.o tr2271d.o tr2273.o tr2273d.o tr2271f.o tr2272.o tr2272d.o \
	tr2272f.o kl2266.o kl2266d.o kl2270.o kl2270d.o in2289.o in2289d.o \
	in2289f.o li2283.o li2283d.o li2283f.o no2288.o no2288d.o no2288f.o \
	li2284.o li2284d.o li2284f.o ds2268.o ds2268d.o ed2287.o ed2287d.o \
	ed2287f.o gr2285.o gr2285d.o gr2285f.o ds2267.o ds2267d.o gr2290.o \
	gr2290d.o gr2290f.o un2295.o un2295d.o un2295f.o to2294.o to2294d.o \
	to2294f.o wa2286.o wa2286d.o wa2286f.o ds2263.o ds2263d.o ds2264.o \
	ds2264d.o 

all: Cobj15.o

Cobj15.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj15.o $(OBJECTS)
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

