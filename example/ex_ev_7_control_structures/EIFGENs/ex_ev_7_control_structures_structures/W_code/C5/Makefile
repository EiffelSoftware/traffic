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

OBJECTS = big_file_C5_c.obj 

OLDOBJECTS =  tr1950.obj tr1950d.obj tr1950f.obj tr1961.obj tr1961d.obj tr1961f.obj tr1947.obj \
	tr1947d.obj tr1947f.obj tr1959.obj tr1959d.obj tr1959f.obj dr1936.obj dr1936d.obj \
	dr1936f.obj tr1949.obj tr1949d.obj tr1949f.obj tr1951.obj tr1951d.obj tr1951f.obj \
	tr1956.obj tr1956d.obj tr1956f.obj tr1960.obj tr1960d.obj tr1960f.obj kl1964.obj \
	kl1964d.obj kl1964f.obj tr1958.obj tr1958d.obj tr1958f.obj tr1948.obj tr1948d.obj \
	tr1948f.obj tr1953.obj tr1953d.obj tr1953f.obj tr1957.obj tr1957d.obj tr1957f.obj \
	tr1952.obj tr1952d.obj tr1952f.obj tr1954.obj tr1954d.obj tr1954f.obj dr1934.obj \
	dr1934d.obj dr1934f.obj tr1955.obj tr1955d.obj tr1955f.obj tr1944.obj tr1944d.obj \
	tr1944f.obj tr1943.obj tr1943d.obj tr1943f.obj tr1942.obj tr1942d.obj tr1942f.obj \
	tr1941.obj tr1941d.obj tr1941f.obj tr1945.obj tr1945d.obj tr1945f.obj tr1946.obj \
	tr1946d.obj tr1946f.obj dr1938.obj dr1938d.obj dr1938f.obj tr1940.obj tr1940d.obj \
	tr1940f.obj dr1939.obj dr1939d.obj dr1939f.obj dr1935.obj dr1935d.obj dr1935f.obj \
	dr1962.obj dr1962d.obj dr1962f.obj dr1937.obj dr1937d.obj dr1937f.obj kl1963.obj \
	kl1963d.obj kl1963f.obj uc1933.obj uc1933d.obj uc1933f.obj uc1965.obj uc1965d.obj \
	uc1965f.obj 

all::  Cobj5.lib

Cobj5.lib: $(OBJECTS) Makefile
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

