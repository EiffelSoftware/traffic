INCLUDE_PATH = -I"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\vision2\spec\include" -I"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\wel\spec\windows\include"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -Zi -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -DNONAMELESSUNION -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\spec\windows\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -Zi -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -DNONAMELESSUNION -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\spec\windows\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\spec\windows\lib\msc\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\config\windows\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\spec\windows\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WSOCK32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = ex_ev_7_control_structures.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C10_c.obj 

OLDOBJECTS =  tr2127.obj tr2127d.obj tr2127f.obj ti2098.obj ti2098d.obj ti2098f.obj tr2128.obj \
	tr2128d.obj tr2128f.obj kl2126.obj kl2126d.obj kl2126f.obj ki2125.obj ki2125d.obj \
	ki2125f.obj da2101.obj da2101d.obj da2101f.obj da2100.obj da2100d.obj da2100f.obj \
	xm2118.obj xm2118d.obj xm2118f.obj xm2110.obj xm2110d.obj xm2110f.obj dt2124.obj \
	dt2124d.obj dt2124f.obj da2099.obj da2099d.obj da2099f.obj xm2108.obj xm2108d.obj \
	xm2108f.obj xm2117.obj xm2117d.obj xm2117f.obj xm2116.obj xm2116d.obj xm2116f.obj \
	xm2115.obj xm2115d.obj xm2115f.obj xm2109.obj xm2109d.obj xm2109f.obj xm2111.obj \
	xm2111d.obj xm2111f.obj xm2122.obj xm2122d.obj xm2122f.obj dt2123.obj dt2123d.obj \
	dt2123f.obj uc2121.obj uc2121d.obj uc2121f.obj xm2114.obj xm2114d.obj xm2114f.obj \
	xm2113.obj xm2113d.obj xm2113f.obj xm2112.obj xm2112d.obj xm2112f.obj yy2130.obj \
	yy2130d.obj yy2130f.obj dt2105.obj dt2105d.obj dt2105f.obj dt2104.obj dt2104d.obj \
	dt2104f.obj dt2103.obj dt2103d.obj dt2103f.obj dt2102.obj dt2102d.obj dt2102f.obj \
	dt2107.obj dt2107d.obj dt2107f.obj dt2106.obj dt2106d.obj dt2106f.obj xm2120.obj \
	xm2120d.obj xm2120f.obj xm2119.obj xm2119d.obj xm2119f.obj yy2129.obj yy2129d.obj \
	yy2129f.obj 

all::  Cobj10.lib

Cobj10.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

