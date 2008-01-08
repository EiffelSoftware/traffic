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
echo "Compiling C code in C5"
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

OBJECTS = big_file_C5_c.obj 

OLDOBJECTS =  tr1950.o tr1950d.o tr1950f.o tr1961.o tr1961d.o tr1961f.o tr1947.o \
	tr1947d.o tr1947f.o tr1959.o tr1959d.o tr1959f.o dr1936.o dr1936d.o \
	dr1936f.o tr1949.o tr1949d.o tr1949f.o tr1951.o tr1951d.o tr1951f.o \
	tr1956.o tr1956d.o tr1956f.o tr1960.o tr1960d.o tr1960f.o kl1964.o \
	kl1964d.o kl1964f.o tr1958.o tr1958d.o tr1958f.o tr1948.o tr1948d.o \
	tr1948f.o tr1953.o tr1953d.o tr1953f.o tr1957.o tr1957d.o tr1957f.o \
	tr1952.o tr1952d.o tr1952f.o tr1954.o tr1954d.o tr1954f.o dr1934.o \
	dr1934d.o dr1934f.o tr1955.o tr1955d.o tr1955f.o tr1944.o tr1944d.o \
	tr1944f.o tr1943.o tr1943d.o tr1943f.o tr1942.o tr1942d.o tr1942f.o \
	tr1941.o tr1941d.o tr1941f.o tr1945.o tr1945d.o tr1945f.o tr1946.o \
	tr1946d.o tr1946f.o dr1938.o dr1938d.o dr1938f.o tr1940.o tr1940d.o \
	tr1940f.o dr1939.o dr1939d.o dr1939f.o dr1935.o dr1935d.o dr1935f.o \
	dr1962.o dr1962d.o dr1962f.o dr1937.o dr1937d.o dr1937f.o kl1963.o \
	kl1963d.o kl1963f.o uc1933.o uc1933d.o uc1933f.o uc1965.o uc1965d.o \
	uc1965f.o 

all: Cobj5.o

Cobj5.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj5.o $(OBJECTS)
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

