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
echo "Compiling C code in C6"
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

OBJECTS = big_file_C6_c.obj 

OLDOBJECTS =  ap1979.o ap1979d.o ap1979f.o tr1976.o tr1976d.o tr1976f.o tr1983.o \
	tr1983d.o tr1983f.o tr1982.o tr1982d.o tr1982f.o tr1975.o tr1975d.o \
	tr1975f.o tr1974.o tr1974d.o tr1974f.o tr1978.o tr1978d.o tr1978f.o \
	tr1977.o tr1977d.o tr1977f.o zo1981.o zo1981d.o zo1981f.o kl1984.o \
	kl1984d.o kl1984f.o ca1980.o ca1980d.o ca1980f.o ki1971.o ki1971d.o \
	ki1971f.o ki1972.o ki1972d.o ki1972f.o kl1967.o kl1967d.o kl1967f.o \
	ki1970.o ki1970d.o ki1970f.o ki1969.o ki1969d.o ki1969f.o xm1998.o \
	xm1998d.o xm1998f.o ki1968.o ki1968d.o ki1968f.o xm1997.o xm1997d.o \
	xm1997f.o kl1996.o kl1996d.o kl1996f.o uc1966.o uc1966d.o uc1966f.o \
	xm1995.o xm1995d.o xm1995f.o xm1994.o xm1994d.o xm1994f.o xm1993.o \
	xm1993d.o xm1993f.o xm1992.o xm1992d.o xm1992f.o uc1973.o uc1973d.o \
	uc1973f.o kl1991.o kl1991d.o kl1991f.o xm1990.o xm1990d.o xm1990f.o \
	xm1989.o xm1989d.o xm1989f.o uc1988.o uc1988d.o uc1988f.o st1987.o \
	st1987d.o st1987f.o uc1986.o uc1986d.o uc1986f.o xm1985.o xm1985d.o \
	xm1985f.o 

all: Cobj6.o

Cobj6.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj6.o $(OBJECTS)
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

