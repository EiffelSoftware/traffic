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

OBJECTS = big_file_C1_c.obj 

OLDOBJECTS =  tr1816.obj tr1816d.obj tr1816f.obj tr1815.obj tr1815d.obj tr1815f.obj tr1814.obj \
	tr1814d.obj tr1814f.obj tr1813.obj tr1813d.obj tr1813f.obj tr1812.obj tr1812d.obj \
	tr1812f.obj tr1811.obj tr1811d.obj tr1811f.obj re1810.obj re1810d.obj re1810f.obj \
	kl1809.obj kl1809d.obj kl1809f.obj tr1808.obj tr1808d.obj tr1808f.obj tr1807.obj \
	tr1807d.obj tr1807f.obj tr1806.obj tr1806d.obj tr1806f.obj xm1833.obj xm1833d.obj \
	xm1833f.obj kl1829.obj kl1829d.obj kl1829f.obj xm1832.obj xm1832d.obj xm1832f.obj \
	xm1805.obj xm1805d.obj xm1805f.obj kl1828.obj kl1828d.obj kl1828f.obj kl1830.obj \
	kl1830d.obj kl1830f.obj da1823.obj da1823d.obj da1823f.obj xm1804.obj xm1804d.obj \
	xm1804f.obj ki1827.obj ki1827d.obj ki1827f.obj ks1826.obj ks1826d.obj ks1826f.obj \
	ks1825.obj ks1825d.obj ks1825f.obj ki1824.obj ki1824d.obj ki1824f.obj uc1831.obj \
	uc1831d.obj uc1831f.obj da1822.obj da1822d.obj da1822f.obj kl1803.obj kl1803d.obj \
	kl1803f.obj yy1821.obj yy1821d.obj yy1821f.obj kl1802.obj kl1802d.obj kl1802f.obj \
	kl1820.obj kl1820d.obj kl1820f.obj dt1819.obj dt1819d.obj dt1819f.obj yy1817.obj \
	yy1817d.obj yy1817f.obj yy1818.obj yy1818d.obj yy1818f.obj 

all::  Cobj1.lib

Cobj1.lib: $(OBJECTS) Makefile
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

