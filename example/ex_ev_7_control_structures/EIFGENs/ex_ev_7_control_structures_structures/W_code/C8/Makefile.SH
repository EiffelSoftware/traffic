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
echo "Compiling C code in C8"
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

OBJECTS = big_file_C8_c.obj 

OLDOBJECTS =  tr2044.o tr2044d.o tr2044f.o kl2039.o kl2039d.o kl2039f.o tr2043.o \
	tr2043d.o tr2043f.o tr2042.o tr2042d.o tr2042f.o kl2041.o kl2041d.o \
	kl2041f.o tr2040.o tr2040d.o tr2040f.o tr2047.o tr2047d.o tr2047f.o \
	kl2037.o kl2037d.o kl2037f.o tr2046.o tr2046d.o tr2046f.o tr2064.o \
	tr2064d.o tr2064f.o tr2063.o tr2063d.o tr2063f.o tr2062.o tr2062d.o \
	tr2062f.o tr2061.o tr2061d.o tr2061f.o tr2060.o tr2060d.o tr2060f.o \
	tr2059.o tr2059d.o tr2059f.o tr2058.o tr2058d.o tr2058f.o tr2057.o \
	tr2057d.o tr2057f.o tr2056.o tr2056d.o tr2056f.o tr2055.o tr2055d.o \
	tr2055f.o tr2054.o tr2054d.o tr2054f.o tr2053.o tr2053d.o tr2053f.o \
	tr2052.o tr2052d.o tr2052f.o tr2051.o tr2051d.o tr2051f.o tr2050.o \
	tr2050d.o tr2050f.o tr2049.o tr2049d.o tr2049f.o tr2048.o tr2048d.o \
	tr2048f.o tr2045.o tr2045d.o tr2045f.o dt2038.o dt2038d.o dt2038f.o \
	xm2033.o xm2033d.o xm2033f.o kl2036.o kl2036d.o kl2036f.o kl2035.o \
	kl2035d.o kl2035f.o kl2034.o kl2034d.o kl2034f.o xm2032.o xm2032d.o \
	xm2032f.o 

all: Cobj8.o

Cobj8.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj8.o $(OBJECTS)
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

