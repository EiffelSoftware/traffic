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
echo "Compiling C code in C4"
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

OBJECTS = big_file_C4_c.obj 

OLDOBJECTS =  re1926.o re1926d.o re1926f.o tr1925.o tr1925d.o tr1925f.o tr1930.o \
	tr1930d.o tr1930f.o tr1927.o tr1927d.o tr1927f.o ti1924.o ti1924d.o \
	ti1924f.o ab1920.o ab1920d.o ab1920f.o kl1916.o kl1916d.o kl1916f.o \
	tr1915.o tr1915d.o tr1915f.o kl1914.o kl1914d.o kl1914f.o du1917.o \
	du1917d.o du1917f.o uc1923.o uc1923d.o uc1923f.o da1919.o da1919d.o \
	da1919f.o da1918.o da1918d.o da1918f.o da1928.o da1928d.o da1928f.o \
	kl1922.o kl1922d.o kl1922f.o xm1905.o xm1905d.o xm1905f.o xm1913.o \
	xm1913d.o xm1913f.o xm1904.o xm1904d.o xm1904f.o xm1908.o xm1908d.o \
	xm1908f.o xm1912.o xm1912d.o xm1912f.o xm1911.o xm1911d.o xm1911f.o \
	uc1931.o uc1931d.o uc1931f.o kl1929.o kl1929d.o kl1929f.o xm1932.o \
	xm1932d.o xm1932f.o xm1906.o xm1906d.o xm1906f.o xm1907.o xm1907d.o \
	xm1907f.o xm1910.o xm1910d.o xm1910f.o xm1909.o xm1909d.o xm1909f.o \
	dt1902.o dt1902d.o dt1902f.o dt1901.o dt1901d.o dt1901f.o dt1900.o \
	dt1900d.o dt1900f.o dt1903.o dt1903d.o dt1903f.o kl1921.o kl1921d.o \
	kl1921f.o 

all: Cobj4.o

Cobj4.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj4.o $(OBJECTS)
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

