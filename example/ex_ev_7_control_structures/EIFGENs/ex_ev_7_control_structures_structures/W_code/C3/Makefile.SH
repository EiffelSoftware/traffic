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
echo "Compiling C code in C3"
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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  tr1895.o tr1895d.o tr1895f.o tr1899.o tr1899d.o tr1899f.o tr1898.o \
	tr1898d.o tr1898f.o tr1897.o tr1897d.o tr1897f.o tr1890.o tr1890d.o \
	tr1890f.o tr1891.o tr1891d.o tr1891f.o kl1889.o kl1889d.o kl1889f.o \
	tr1888.o tr1888d.o tr1888f.o tr1893.o tr1893d.o tr1893f.o tr1887.o \
	tr1887d.o tr1887f.o ti1870.o ti1870d.o ti1870f.o tr1886.o tr1886d.o \
	tr1886f.o tr1885.o tr1885d.o tr1885f.o tr1884.o tr1884d.o tr1884f.o \
	ki1880.o ki1880d.o ki1880f.o da1876.o da1876d.o da1876f.o da1871.o \
	da1871d.o da1871f.o ti1869.o ti1869d.o ti1869f.o ti1868.o ti1868d.o \
	ti1868f.o tr1896.o tr1896d.o tr1896f.o tr1894.o tr1894d.o tr1894f.o \
	tr1892.o tr1892d.o tr1892f.o tr1882.o tr1882d.o tr1882f.o tr1883.o \
	tr1883d.o tr1883f.o ki1879.o ki1879d.o ki1879f.o kl1878.o kl1878d.o \
	kl1878f.o uc1877.o uc1877d.o uc1877f.o co1875.o co1875d.o co1875f.o \
	ti1867.o ti1867d.o ti1867f.o da1873.o da1873d.o da1873f.o ki1881.o \
	ki1881d.o ki1881f.o da1874.o da1874d.o da1874f.o da1872.o da1872d.o \
	da1872f.o 

all: Cobj3.o

Cobj3.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj3.o $(OBJECTS)
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

