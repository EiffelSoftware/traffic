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
echo "Compiling C code in C7"
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

OBJECTS = big_file_C7_c.obj 

OLDOBJECTS =  tr2011.o tr2011d.o tr2011f.o ki2027.o ki2027d.o ki2027f.o ki2009.o \
	ki2009d.o ki2009f.o xm1999.o xm1999d.o xm1999f.o xm2025.o xm2025d.o \
	xm2025f.o xm2010.o xm2010d.o xm2010f.o kl2002.o kl2002d.o kl2002f.o \
	ki2004.o ki2004d.o ki2004f.o ki2006.o ki2006d.o ki2006f.o uc2007.o \
	uc2007d.o uc2007f.o ki2005.o ki2005d.o ki2005f.o xm2031.o xm2031d.o \
	xm2031f.o xm2024.o xm2024d.o xm2024f.o dt2021.o dt2021d.o dt2021f.o \
	ki2001.o ki2001d.o ki2001f.o ki2003.o ki2003d.o ki2003f.o uc2008.o \
	uc2008d.o uc2008f.o ks2000.o ks2000d.o ks2000f.o xm2026.o xm2026d.o \
	xm2026f.o dt2028.o dt2028d.o dt2028f.o kl2020.o kl2020d.o kl2020f.o \
	uc2019.o uc2019d.o uc2019f.o dt2030.o dt2030d.o dt2030f.o dt2029.o \
	dt2029d.o dt2029f.o dt2023.o dt2023d.o dt2023f.o uc2018.o uc2018d.o \
	uc2018f.o yy2014.o yy2014d.o yy2014f.o dt2022.o dt2022d.o dt2022f.o \
	uc2017.o uc2017d.o uc2017f.o uc2016.o uc2016d.o uc2016f.o uc2015.o \
	uc2015d.o uc2015f.o yy2013.o yy2013d.o yy2013f.o yy2012.o yy2012d.o \
	yy2012f.o 

all: Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj7.o $(OBJECTS)
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

