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

OBJECTS = big_file_C9_c.obj 

OLDOBJECTS =  co2068.obj co2068d.obj co2068f.obj to2067.obj to2067d.obj to2067f.obj kl2080.obj \
	kl2080d.obj kl2080f.obj to2066.obj to2066d.obj to2066f.obj kl2082.obj kl2082d.obj \
	kl2082f.obj kl2081.obj kl2081d.obj kl2081f.obj tr2085.obj tr2085d.obj tr2085f.obj \
	kl2077.obj kl2077d.obj kl2077f.obj kl2076.obj kl2076d.obj kl2076f.obj da2096.obj \
	da2096d.obj da2096f.obj ti2097.obj ti2097d.obj ti2097f.obj kl2079.obj kl2079d.obj \
	kl2079f.obj kl2074.obj kl2074d.obj kl2074f.obj kl2078.obj kl2078d.obj kl2078f.obj \
	kl2073.obj kl2073d.obj kl2073f.obj tr2084.obj tr2084d.obj tr2084f.obj tr2083.obj \
	tr2083d.obj tr2083f.obj kl2075.obj kl2075d.obj kl2075f.obj da2094.obj da2094d.obj \
	da2094f.obj fi2095.obj fi2095d.obj fi2095f.obj kl2072.obj kl2072d.obj kl2072f.obj \
	tr2065.obj tr2065d.obj tr2065f.obj kl2071.obj kl2071d.obj kl2071f.obj kl2069.obj \
	kl2069d.obj kl2069f.obj da2093.obj da2093d.obj da2093f.obj kl2070.obj kl2070d.obj \
	kl2070f.obj xm2086.obj xm2086d.obj xm2086f.obj xm2090.obj xm2090d.obj xm2090f.obj \
	xm2092.obj xm2092d.obj xm2092f.obj xm2091.obj xm2091d.obj xm2091f.obj xm2088.obj \
	xm2088d.obj xm2088f.obj xm2089.obj xm2089d.obj xm2089f.obj xm2087.obj xm2087d.obj \
	xm2087f.obj 

all::  Cobj9.lib

Cobj9.lib: $(OBJECTS) Makefile
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

