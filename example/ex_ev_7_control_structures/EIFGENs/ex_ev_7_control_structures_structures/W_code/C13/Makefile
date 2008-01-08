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

OBJECTS = big_file_C13_c.obj 

OLDOBJECTS =  tr2197.obj tr2197d.obj tr2197f.obj tr2201.obj tr2201d.obj tr2201f.obj tr2200.obj \
	tr2200d.obj tr2200f.obj tr2198.obj tr2198d.obj tr2198f.obj tr2202.obj tr2202d.obj \
	tr2202f.obj tr2203.obj tr2203d.obj tr2203f.obj ds2219.obj ds2219d.obj ds2229.obj \
	ds2229d.obj ds2219f.obj in2199.obj in2199d.obj in2199f.obj ds2228.obj ds2228d.obj \
	ds2228f.obj ds2220.obj ds2220d.obj ds2220f.obj ds2227.obj ds2227d.obj ds2227f.obj \
	ds2221.obj ds2221d.obj ds2221f.obj ds2204.obj ds2204d.obj ds2204f.obj ds2224.obj \
	ds2224d.obj ds2224f.obj ds2225.obj ds2225d.obj ds2225f.obj ds2222.obj ds2222d.obj \
	ds2222f.obj ds2209.obj ds2209d.obj ds2209f.obj ds2213.obj ds2213d.obj ds2213f.obj \
	ds2205.obj ds2205d.obj ds2205f.obj ds2214.obj ds2214d.obj ds2214f.obj ds2210.obj \
	ds2210d.obj ds2210f.obj ds2226.obj ds2226d.obj ds2226f.obj kl2223.obj kl2223d.obj \
	kl2223f.obj ds2217.obj ds2217d.obj ds2217f.obj ds2218.obj ds2218d.obj ds2218f.obj \
	ds2212.obj ds2212d.obj ds2212f.obj ds2206.obj ds2206d.obj ds2206f.obj ds2215.obj \
	ds2215d.obj ds2215f.obj ds2216.obj ds2216d.obj ds2216f.obj ds2211.obj ds2211d.obj \
	ds2211f.obj ds2207.obj ds2207d.obj ds2207f.obj ds2208.obj ds2208d.obj ds2208f.obj 

all::  Cobj13.lib

Cobj13.lib: $(OBJECTS) Makefile
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

