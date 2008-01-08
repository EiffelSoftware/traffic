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

OBJECTS = big_file_C2_c.obj 

OLDOBJECTS =  tr1847.obj tr1847d.obj tr1847f.obj tr1848.obj tr1848d.obj tr1848f.obj tr1846.obj \
	tr1846d.obj tr1846f.obj tr1841.obj tr1841d.obj tr1841f.obj c_1844.obj c_1844d.obj \
	c_1844f.obj tr1842.obj tr1842d.obj tr1842f.obj tr1843.obj tr1843d.obj tr1843f.obj \
	tr1840.obj tr1840d.obj tr1840f.obj gr1839.obj gr1839d.obj gr1839f.obj xm1866.obj \
	xm1866d.obj xm1866f.obj xm1864.obj xm1864d.obj xm1864f.obj xm1862.obj xm1862d.obj \
	xm1862f.obj xm1865.obj xm1865d.obj xm1865f.obj xm1836.obj xm1836d.obj xm1836f.obj \
	xm1835.obj xm1835d.obj xm1835f.obj xm1860.obj xm1860d.obj xm1860f.obj xm1834.obj \
	xm1834d.obj xm1834f.obj kl1845.obj kl1845d.obj kl1845f.obj uc1859.obj uc1859d.obj \
	uc1859f.obj xm1853.obj xm1853d.obj xm1853f.obj xm1838.obj xm1838d.obj xm1838f.obj \
	kl1858.obj kl1858d.obj kl1858f.obj xm1856.obj xm1856d.obj xm1856f.obj xm1863.obj \
	xm1863d.obj xm1863f.obj xm1861.obj xm1861d.obj xm1861f.obj xm1855.obj xm1855d.obj \
	xm1855f.obj xm1854.obj xm1854d.obj xm1854f.obj uc1852.obj uc1852d.obj uc1852f.obj \
	xm1837.obj xm1837d.obj xm1837f.obj xm1857.obj xm1857d.obj xm1857f.obj xm1849.obj \
	xm1849d.obj xm1849f.obj xm1851.obj xm1851d.obj xm1851f.obj xm1850.obj xm1850d.obj \
	xm1850f.obj 

all::  Cobj2.lib

Cobj2.lib: $(OBJECTS) Makefile
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

