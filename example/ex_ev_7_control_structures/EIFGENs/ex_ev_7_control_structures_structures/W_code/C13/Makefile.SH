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
echo "Compiling C code in C13"
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

OBJECTS = big_file_C13_c.obj 

OLDOBJECTS =  tr2197.o tr2197d.o tr2197f.o tr2201.o tr2201d.o tr2201f.o tr2200.o \
	tr2200d.o tr2200f.o tr2198.o tr2198d.o tr2198f.o tr2202.o tr2202d.o \
	tr2202f.o tr2203.o tr2203d.o tr2203f.o ds2219.o ds2219d.o ds2229.o \
	ds2229d.o ds2219f.o in2199.o in2199d.o in2199f.o ds2228.o ds2228d.o \
	ds2228f.o ds2220.o ds2220d.o ds2220f.o ds2227.o ds2227d.o ds2227f.o \
	ds2221.o ds2221d.o ds2221f.o ds2204.o ds2204d.o ds2204f.o ds2224.o \
	ds2224d.o ds2224f.o ds2225.o ds2225d.o ds2225f.o ds2222.o ds2222d.o \
	ds2222f.o ds2209.o ds2209d.o ds2209f.o ds2213.o ds2213d.o ds2213f.o \
	ds2205.o ds2205d.o ds2205f.o ds2214.o ds2214d.o ds2214f.o ds2210.o \
	ds2210d.o ds2210f.o ds2226.o ds2226d.o ds2226f.o kl2223.o kl2223d.o \
	kl2223f.o ds2217.o ds2217d.o ds2217f.o ds2218.o ds2218d.o ds2218f.o \
	ds2212.o ds2212d.o ds2212f.o ds2206.o ds2206d.o ds2206f.o ds2215.o \
	ds2215d.o ds2215f.o ds2216.o ds2216d.o ds2216f.o ds2211.o ds2211d.o \
	ds2211f.o ds2207.o ds2207d.o ds2207f.o ds2208.o ds2208d.o ds2208f.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
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

