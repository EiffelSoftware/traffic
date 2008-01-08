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

OBJECTS = big_file_C6_c.obj 

OLDOBJECTS =  ap1979.obj ap1979d.obj ap1979f.obj tr1976.obj tr1976d.obj tr1976f.obj tr1983.obj \
	tr1983d.obj tr1983f.obj tr1982.obj tr1982d.obj tr1982f.obj tr1975.obj tr1975d.obj \
	tr1975f.obj tr1974.obj tr1974d.obj tr1974f.obj tr1978.obj tr1978d.obj tr1978f.obj \
	tr1977.obj tr1977d.obj tr1977f.obj zo1981.obj zo1981d.obj zo1981f.obj kl1984.obj \
	kl1984d.obj kl1984f.obj ca1980.obj ca1980d.obj ca1980f.obj ki1971.obj ki1971d.obj \
	ki1971f.obj ki1972.obj ki1972d.obj ki1972f.obj kl1967.obj kl1967d.obj kl1967f.obj \
	ki1970.obj ki1970d.obj ki1970f.obj ki1969.obj ki1969d.obj ki1969f.obj xm1998.obj \
	xm1998d.obj xm1998f.obj ki1968.obj ki1968d.obj ki1968f.obj xm1997.obj xm1997d.obj \
	xm1997f.obj kl1996.obj kl1996d.obj kl1996f.obj uc1966.obj uc1966d.obj uc1966f.obj \
	xm1995.obj xm1995d.obj xm1995f.obj xm1994.obj xm1994d.obj xm1994f.obj xm1993.obj \
	xm1993d.obj xm1993f.obj xm1992.obj xm1992d.obj xm1992f.obj uc1973.obj uc1973d.obj \
	uc1973f.obj kl1991.obj kl1991d.obj kl1991f.obj xm1990.obj xm1990d.obj xm1990f.obj \
	xm1989.obj xm1989d.obj xm1989f.obj uc1988.obj uc1988d.obj uc1988f.obj st1987.obj \
	st1987d.obj st1987f.obj uc1986.obj uc1986d.obj uc1986f.obj xm1985.obj xm1985d.obj \
	xm1985f.obj 

all::  Cobj6.lib

Cobj6.lib: $(OBJECTS) Makefile
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

