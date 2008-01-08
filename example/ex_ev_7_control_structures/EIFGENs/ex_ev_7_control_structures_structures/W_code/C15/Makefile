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

OBJECTS = big_file_C15_c.obj 

OLDOBJECTS =  fu2274.obj fu2274d.obj bi2292.obj bi2292d.obj tw2291.obj tw2291d.obj su2281.obj \
	su2281d.obj su2279.obj su2279d.obj li2276.obj li2276d.obj ar2275.obj ar2275d.obj \
	tr2277.obj tr2277d.obj su2278.obj su2278d.obj tw2293.obj tw2293d.obj li2282.obj \
	li2282d.obj su2280.obj su2280d.obj kl2265.obj kl2265d.obj kl2269.obj kl2269d.obj \
	tr2271.obj tr2271d.obj tr2273.obj tr2273d.obj tr2271f.obj tr2272.obj tr2272d.obj \
	tr2272f.obj kl2266.obj kl2266d.obj kl2270.obj kl2270d.obj in2289.obj in2289d.obj \
	in2289f.obj li2283.obj li2283d.obj li2283f.obj no2288.obj no2288d.obj no2288f.obj \
	li2284.obj li2284d.obj li2284f.obj ds2268.obj ds2268d.obj ed2287.obj ed2287d.obj \
	ed2287f.obj gr2285.obj gr2285d.obj gr2285f.obj ds2267.obj ds2267d.obj gr2290.obj \
	gr2290d.obj gr2290f.obj un2295.obj un2295d.obj un2295f.obj to2294.obj to2294d.obj \
	to2294f.obj wa2286.obj wa2286d.obj wa2286f.obj ds2263.obj ds2263d.obj ds2264.obj \
	ds2264d.obj 

all::  Cobj15.lib

Cobj15.lib: $(OBJECTS) Makefile
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

