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

OBJECTS = big_file_C12_c.obj 

OLDOBJECTS =  ds2168.obj ds2168d.obj ds2191.obj ds2191d.obj ds2168f.obj tr2196.obj tr2196d.obj \
	tr2196f.obj ds2171.obj ds2171d.obj ds2177.obj ds2177d.obj ds2188.obj ds2188d.obj \
	ds2193.obj ds2193d.obj ds2188f.obj kl2189.obj kl2189d.obj kl2194.obj kl2194d.obj \
	kl2189f.obj ds2169.obj ds2169d.obj ds2187.obj ds2187d.obj ds2192.obj ds2192d.obj \
	ds2187f.obj ds2164.obj ds2164d.obj ds2164f.obj ds2165.obj ds2165d.obj ds2165f.obj \
	ds2172.obj ds2172d.obj ds2175.obj ds2175d.obj ds2174.obj ds2174d.obj ds2184.obj \
	ds2184d.obj kl2190.obj kl2190d.obj kl2195.obj kl2195d.obj kl2190f.obj ds2170.obj \
	ds2170d.obj ds2179.obj ds2179d.obj ds2173.obj ds2173d.obj ds2166.obj ds2166d.obj \
	ds2166f.obj kl2176.obj kl2176d.obj ds2178.obj ds2178d.obj ds2185.obj ds2185d.obj \
	ds2186.obj ds2186d.obj ds2180.obj ds2180d.obj ds2183.obj ds2183d.obj ds2181.obj \
	ds2181d.obj kl2182.obj kl2182d.obj ds2167.obj ds2167d.obj ds2167f.obj 

all::  Cobj12.lib

Cobj12.lib: $(OBJECTS) Makefile
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

