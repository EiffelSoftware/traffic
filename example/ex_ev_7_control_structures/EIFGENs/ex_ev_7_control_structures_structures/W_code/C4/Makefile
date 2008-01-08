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

OBJECTS = big_file_C4_c.obj 

OLDOBJECTS =  re1926.obj re1926d.obj re1926f.obj tr1925.obj tr1925d.obj tr1925f.obj tr1930.obj \
	tr1930d.obj tr1930f.obj tr1927.obj tr1927d.obj tr1927f.obj ti1924.obj ti1924d.obj \
	ti1924f.obj ab1920.obj ab1920d.obj ab1920f.obj kl1916.obj kl1916d.obj kl1916f.obj \
	tr1915.obj tr1915d.obj tr1915f.obj kl1914.obj kl1914d.obj kl1914f.obj du1917.obj \
	du1917d.obj du1917f.obj uc1923.obj uc1923d.obj uc1923f.obj da1919.obj da1919d.obj \
	da1919f.obj da1918.obj da1918d.obj da1918f.obj da1928.obj da1928d.obj da1928f.obj \
	kl1922.obj kl1922d.obj kl1922f.obj xm1905.obj xm1905d.obj xm1905f.obj xm1913.obj \
	xm1913d.obj xm1913f.obj xm1904.obj xm1904d.obj xm1904f.obj xm1908.obj xm1908d.obj \
	xm1908f.obj xm1912.obj xm1912d.obj xm1912f.obj xm1911.obj xm1911d.obj xm1911f.obj \
	uc1931.obj uc1931d.obj uc1931f.obj kl1929.obj kl1929d.obj kl1929f.obj xm1932.obj \
	xm1932d.obj xm1932f.obj xm1906.obj xm1906d.obj xm1906f.obj xm1907.obj xm1907d.obj \
	xm1907f.obj xm1910.obj xm1910d.obj xm1910f.obj xm1909.obj xm1909d.obj xm1909f.obj \
	dt1902.obj dt1902d.obj dt1902f.obj dt1901.obj dt1901d.obj dt1901f.obj dt1900.obj \
	dt1900d.obj dt1900f.obj dt1903.obj dt1903d.obj dt1903f.obj kl1921.obj kl1921d.obj \
	kl1921f.obj 

all::  Cobj4.lib

Cobj4.lib: $(OBJECTS) Makefile
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

