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

OBJECTS = big_file_C8_c.obj 

OLDOBJECTS =  tr2044.obj tr2044d.obj tr2044f.obj kl2039.obj kl2039d.obj kl2039f.obj tr2043.obj \
	tr2043d.obj tr2043f.obj tr2042.obj tr2042d.obj tr2042f.obj kl2041.obj kl2041d.obj \
	kl2041f.obj tr2040.obj tr2040d.obj tr2040f.obj tr2047.obj tr2047d.obj tr2047f.obj \
	kl2037.obj kl2037d.obj kl2037f.obj tr2046.obj tr2046d.obj tr2046f.obj tr2064.obj \
	tr2064d.obj tr2064f.obj tr2063.obj tr2063d.obj tr2063f.obj tr2062.obj tr2062d.obj \
	tr2062f.obj tr2061.obj tr2061d.obj tr2061f.obj tr2060.obj tr2060d.obj tr2060f.obj \
	tr2059.obj tr2059d.obj tr2059f.obj tr2058.obj tr2058d.obj tr2058f.obj tr2057.obj \
	tr2057d.obj tr2057f.obj tr2056.obj tr2056d.obj tr2056f.obj tr2055.obj tr2055d.obj \
	tr2055f.obj tr2054.obj tr2054d.obj tr2054f.obj tr2053.obj tr2053d.obj tr2053f.obj \
	tr2052.obj tr2052d.obj tr2052f.obj tr2051.obj tr2051d.obj tr2051f.obj tr2050.obj \
	tr2050d.obj tr2050f.obj tr2049.obj tr2049d.obj tr2049f.obj tr2048.obj tr2048d.obj \
	tr2048f.obj tr2045.obj tr2045d.obj tr2045f.obj dt2038.obj dt2038d.obj dt2038f.obj \
	xm2033.obj xm2033d.obj xm2033f.obj kl2036.obj kl2036d.obj kl2036f.obj kl2035.obj \
	kl2035d.obj kl2035f.obj kl2034.obj kl2034d.obj kl2034f.obj xm2032.obj xm2032d.obj \
	xm2032f.obj 

all::  Cobj8.lib

Cobj8.lib: $(OBJECTS) Makefile
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

