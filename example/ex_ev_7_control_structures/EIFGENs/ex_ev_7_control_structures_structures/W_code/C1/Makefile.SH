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
echo "Compiling C code in C1"
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

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  tr1816.o tr1816d.o tr1816f.o tr1815.o tr1815d.o tr1815f.o tr1814.o \
	tr1814d.o tr1814f.o tr1813.o tr1813d.o tr1813f.o tr1812.o tr1812d.o \
	tr1812f.o tr1811.o tr1811d.o tr1811f.o re1810.o re1810d.o re1810f.o \
	kl1809.o kl1809d.o kl1809f.o tr1808.o tr1808d.o tr1808f.o tr1807.o \
	tr1807d.o tr1807f.o tr1806.o tr1806d.o tr1806f.o xm1833.o xm1833d.o \
	xm1833f.o kl1829.o kl1829d.o kl1829f.o xm1832.o xm1832d.o xm1832f.o \
	xm1805.o xm1805d.o xm1805f.o kl1828.o kl1828d.o kl1828f.o kl1830.o \
	kl1830d.o kl1830f.o da1823.o da1823d.o da1823f.o xm1804.o xm1804d.o \
	xm1804f.o ki1827.o ki1827d.o ki1827f.o ks1826.o ks1826d.o ks1826f.o \
	ks1825.o ks1825d.o ks1825f.o ki1824.o ki1824d.o ki1824f.o uc1831.o \
	uc1831d.o uc1831f.o da1822.o da1822d.o da1822f.o kl1803.o kl1803d.o \
	kl1803f.o yy1821.o yy1821d.o yy1821f.o kl1802.o kl1802d.o kl1802f.o \
	kl1820.o kl1820d.o kl1820f.o dt1819.o dt1819d.o dt1819f.o yy1817.o \
	yy1817d.o yy1817f.o yy1818.o yy1818d.o yy1818f.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
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

