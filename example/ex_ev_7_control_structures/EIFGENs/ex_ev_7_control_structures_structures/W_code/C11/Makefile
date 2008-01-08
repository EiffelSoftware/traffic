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

OBJECTS = big_file_C11_c.obj 

OLDOBJECTS =  ds2145.obj ds2145d.obj ds2145f.obj ds2148.obj ds2148d.obj ds2148f.obj ds2154.obj \
	ds2154d.obj ds2154f.obj ds2146.obj ds2146d.obj ds2146f.obj ds2149.obj ds2149d.obj \
	ds2149f.obj ds2152.obj ds2152d.obj ds2152f.obj ds2151.obj ds2151d.obj ds2151f.obj \
	ds2161.obj ds2161d.obj ds2161f.obj ds2147.obj ds2147d.obj ds2147f.obj ds2156.obj \
	ds2156d.obj ds2156f.obj ds2150.obj ds2150d.obj ds2150f.obj kl2153.obj kl2153d.obj \
	kl2153f.obj ds2155.obj ds2155d.obj ds2155f.obj ds2162.obj ds2162d.obj ds2162f.obj \
	ds2163.obj ds2163d.obj ds2163f.obj ds2157.obj ds2157d.obj ds2157f.obj ds2160.obj \
	ds2160d.obj ds2160f.obj xm2138.obj xm2138d.obj xm2138f.obj ds2158.obj ds2158d.obj \
	ds2158f.obj xm2143.obj xm2143d.obj xm2143f.obj xm2137.obj xm2137d.obj xm2137f.obj \
	dt2141.obj dt2141d.obj dt2141f.obj dt2140.obj dt2140d.obj dt2140f.obj dt2142.obj \
	dt2142d.obj dt2142f.obj uc2144.obj uc2144d.obj uc2144f.obj kl2159.obj kl2159d.obj \
	kl2159f.obj xm2135.obj xm2135d.obj xm2135f.obj xm2136.obj xm2136d.obj xm2136f.obj \
	xm2134.obj xm2134d.obj xm2134f.obj xm2133.obj xm2133d.obj xm2133f.obj xm2131.obj \
	xm2131d.obj xm2131f.obj dt2139.obj dt2139d.obj dt2139f.obj xm2132.obj xm2132d.obj \
	xm2132f.obj 

all::  Cobj11.lib

Cobj11.lib: $(OBJECTS) Makefile
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

