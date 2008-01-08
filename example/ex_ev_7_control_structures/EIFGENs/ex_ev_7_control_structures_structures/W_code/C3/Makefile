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

OBJECTS = big_file_C3_c.obj 

OLDOBJECTS =  tr1895.obj tr1895d.obj tr1895f.obj tr1899.obj tr1899d.obj tr1899f.obj tr1898.obj \
	tr1898d.obj tr1898f.obj tr1897.obj tr1897d.obj tr1897f.obj tr1890.obj tr1890d.obj \
	tr1890f.obj tr1891.obj tr1891d.obj tr1891f.obj kl1889.obj kl1889d.obj kl1889f.obj \
	tr1888.obj tr1888d.obj tr1888f.obj tr1893.obj tr1893d.obj tr1893f.obj tr1887.obj \
	tr1887d.obj tr1887f.obj ti1870.obj ti1870d.obj ti1870f.obj tr1886.obj tr1886d.obj \
	tr1886f.obj tr1885.obj tr1885d.obj tr1885f.obj tr1884.obj tr1884d.obj tr1884f.obj \
	ki1880.obj ki1880d.obj ki1880f.obj da1876.obj da1876d.obj da1876f.obj da1871.obj \
	da1871d.obj da1871f.obj ti1869.obj ti1869d.obj ti1869f.obj ti1868.obj ti1868d.obj \
	ti1868f.obj tr1896.obj tr1896d.obj tr1896f.obj tr1894.obj tr1894d.obj tr1894f.obj \
	tr1892.obj tr1892d.obj tr1892f.obj tr1882.obj tr1882d.obj tr1882f.obj tr1883.obj \
	tr1883d.obj tr1883f.obj ki1879.obj ki1879d.obj ki1879f.obj kl1878.obj kl1878d.obj \
	kl1878f.obj uc1877.obj uc1877d.obj uc1877f.obj co1875.obj co1875d.obj co1875f.obj \
	ti1867.obj ti1867d.obj ti1867f.obj da1873.obj da1873d.obj da1873f.obj ki1881.obj \
	ki1881d.obj ki1881f.obj da1874.obj da1874d.obj da1874f.obj da1872.obj da1872d.obj \
	da1872f.obj 

all::  Cobj3.lib

Cobj3.lib: $(OBJECTS) Makefile
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

