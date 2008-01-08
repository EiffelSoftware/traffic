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

OBJECTS = big_file_C14_c.obj 

OLDOBJECTS =  ds2255.obj ds2255d.obj ds2260.obj ds2260d.obj ds2256.obj ds2256d.obj ds2259.obj \
	ds2259d.obj ds2258.obj ds2258d.obj ds2254.obj ds2254d.obj ds2257.obj ds2257d.obj \
	ds2246.obj ds2246d.obj kl2253.obj kl2253d.obj ds2261.obj ds2261d.obj ds2240.obj \
	ds2240d.obj ds2230.obj ds2230d.obj ds2247.obj ds2247d.obj ki2245.obj ki2245d.obj \
	ki2245f.obj ki2244.obj ki2244d.obj ki2244f.obj ds2239.obj ds2239d.obj ds2231.obj \
	ds2231d.obj ds2248.obj ds2248d.obj ds2241.obj ds2241d.obj ds2241f.obj ds2236.obj \
	ds2236d.obj ds2262.obj ds2262d.obj ds2237.obj ds2237d.obj ds2232.obj ds2232d.obj \
	ds2249.obj ds2249d.obj ds2234.obj ds2234d.obj ds2251.obj ds2251d.obj ds2242.obj \
	ds2242d.obj ds2242f.obj ds2243.obj ds2243d.obj ds2243f.obj ds2235.obj ds2235d.obj \
	ds2252.obj ds2252d.obj ds2238.obj ds2238d.obj kl2233.obj kl2233d.obj kl2250.obj \
	kl2250d.obj 

all::  Cobj14.lib

Cobj14.lib: $(OBJECTS) Makefile
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

