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
echo "Compiling C code in C2"
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

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  tr1847.o tr1847d.o tr1847f.o tr1848.o tr1848d.o tr1848f.o tr1846.o \
	tr1846d.o tr1846f.o tr1841.o tr1841d.o tr1841f.o c_1844.o c_1844d.o \
	c_1844f.o tr1842.o tr1842d.o tr1842f.o tr1843.o tr1843d.o tr1843f.o \
	tr1840.o tr1840d.o tr1840f.o gr1839.o gr1839d.o gr1839f.o xm1866.o \
	xm1866d.o xm1866f.o xm1864.o xm1864d.o xm1864f.o xm1862.o xm1862d.o \
	xm1862f.o xm1865.o xm1865d.o xm1865f.o xm1836.o xm1836d.o xm1836f.o \
	xm1835.o xm1835d.o xm1835f.o xm1860.o xm1860d.o xm1860f.o xm1834.o \
	xm1834d.o xm1834f.o kl1845.o kl1845d.o kl1845f.o uc1859.o uc1859d.o \
	uc1859f.o xm1853.o xm1853d.o xm1853f.o xm1838.o xm1838d.o xm1838f.o \
	kl1858.o kl1858d.o kl1858f.o xm1856.o xm1856d.o xm1856f.o xm1863.o \
	xm1863d.o xm1863f.o xm1861.o xm1861d.o xm1861f.o xm1855.o xm1855d.o \
	xm1855f.o xm1854.o xm1854d.o xm1854f.o uc1852.o uc1852d.o uc1852f.o \
	xm1837.o xm1837d.o xm1837f.o xm1857.o xm1857d.o xm1857f.o xm1849.o \
	xm1849d.o xm1849f.o xm1851.o xm1851d.o xm1851f.o xm1850.o xm1850d.o \
	xm1850f.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
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

