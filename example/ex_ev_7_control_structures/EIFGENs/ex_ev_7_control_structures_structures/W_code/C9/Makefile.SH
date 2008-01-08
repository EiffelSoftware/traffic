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
echo "Compiling C code in C9"
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

OBJECTS = big_file_C9_c.obj 

OLDOBJECTS =  co2068.o co2068d.o co2068f.o to2067.o to2067d.o to2067f.o kl2080.o \
	kl2080d.o kl2080f.o to2066.o to2066d.o to2066f.o kl2082.o kl2082d.o \
	kl2082f.o kl2081.o kl2081d.o kl2081f.o tr2085.o tr2085d.o tr2085f.o \
	kl2077.o kl2077d.o kl2077f.o kl2076.o kl2076d.o kl2076f.o da2096.o \
	da2096d.o da2096f.o ti2097.o ti2097d.o ti2097f.o kl2079.o kl2079d.o \
	kl2079f.o kl2074.o kl2074d.o kl2074f.o kl2078.o kl2078d.o kl2078f.o \
	kl2073.o kl2073d.o kl2073f.o tr2084.o tr2084d.o tr2084f.o tr2083.o \
	tr2083d.o tr2083f.o kl2075.o kl2075d.o kl2075f.o da2094.o da2094d.o \
	da2094f.o fi2095.o fi2095d.o fi2095f.o kl2072.o kl2072d.o kl2072f.o \
	tr2065.o tr2065d.o tr2065f.o kl2071.o kl2071d.o kl2071f.o kl2069.o \
	kl2069d.o kl2069f.o da2093.o da2093d.o da2093f.o kl2070.o kl2070d.o \
	kl2070f.o xm2086.o xm2086d.o xm2086f.o xm2090.o xm2090d.o xm2090f.o \
	xm2092.o xm2092d.o xm2092f.o xm2091.o xm2091d.o xm2091f.o xm2088.o \
	xm2088d.o xm2088f.o xm2089.o xm2089d.o xm2089f.o xm2087.o xm2087d.o \
	xm2087f.o 

all: Cobj9.o

Cobj9.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj9.o $(OBJECTS)
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

