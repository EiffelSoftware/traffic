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
echo "Compiling C code in C12"
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

OBJECTS = big_file_C12_c.obj 

OLDOBJECTS =  ds2168.o ds2168d.o ds2191.o ds2191d.o ds2168f.o tr2196.o tr2196d.o \
	tr2196f.o ds2171.o ds2171d.o ds2177.o ds2177d.o ds2188.o ds2188d.o \
	ds2193.o ds2193d.o ds2188f.o kl2189.o kl2189d.o kl2194.o kl2194d.o \
	kl2189f.o ds2169.o ds2169d.o ds2187.o ds2187d.o ds2192.o ds2192d.o \
	ds2187f.o ds2164.o ds2164d.o ds2164f.o ds2165.o ds2165d.o ds2165f.o \
	ds2172.o ds2172d.o ds2175.o ds2175d.o ds2174.o ds2174d.o ds2184.o \
	ds2184d.o kl2190.o kl2190d.o kl2195.o kl2195d.o kl2190f.o ds2170.o \
	ds2170d.o ds2179.o ds2179d.o ds2173.o ds2173d.o ds2166.o ds2166d.o \
	ds2166f.o kl2176.o kl2176d.o ds2178.o ds2178d.o ds2185.o ds2185d.o \
	ds2186.o ds2186d.o ds2180.o ds2180d.o ds2183.o ds2183d.o ds2181.o \
	ds2181d.o kl2182.o kl2182d.o ds2167.o ds2167d.o ds2167f.o 

all: Cobj12.o

Cobj12.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj12.o $(OBJECTS)
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

