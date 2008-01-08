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
echo "Compiling C code in C16"
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

OBJECTS = big_file_C16_c.obj 

OLDOBJECTS =  tw2306.o tw2306d.o su2302.o su2302d.o su2300.o su2300d.o dy2308.o \
	dy2308d.o li2307.o li2307d.o ci2309.o ci2309d.o li2297.o li2297d.o \
	ar2296.o ar2296d.o tr2298.o tr2298d.o su2299.o su2299d.o li2303.o \
	li2303d.o su2301.o su2301d.o tr2316.o tr2316d.o tr2316f.o ds2324.o \
	ds2324d.o ds2327.o ds2327d.o ds2328.o ds2328d.o li2312.o li2312d.o \
	li2312f.o li2305.o li2305d.o li2305f.o dr2313.o dr2313d.o dr2313f.o \
	ds2325.o ds2325d.o ds2321.o ds2321d.o ds2326.o ds2326d.o ds2322.o \
	ds2322d.o we2311.o we2311d.o we2311f.o li2304.o li2304d.o li2304f.o \
	kl2323.o kl2323d.o ds2320.o ds2320d.o we2310.o we2310d.o we2310f.o \
	ki2315.o ki2315d.o ki2314.o ki2314d.o ds2317.o ds2317d.o ds2318.o \
	ds2318d.o ds2319.o ds2319d.o 

all: Cobj16.o

Cobj16.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj16.o $(OBJECTS)
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

