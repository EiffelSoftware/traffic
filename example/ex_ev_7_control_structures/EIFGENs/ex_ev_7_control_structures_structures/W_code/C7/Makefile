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

OBJECTS = big_file_C7_c.obj 

OLDOBJECTS =  tr2011.obj tr2011d.obj tr2011f.obj ki2027.obj ki2027d.obj ki2027f.obj ki2009.obj \
	ki2009d.obj ki2009f.obj xm1999.obj xm1999d.obj xm1999f.obj xm2025.obj xm2025d.obj \
	xm2025f.obj xm2010.obj xm2010d.obj xm2010f.obj kl2002.obj kl2002d.obj kl2002f.obj \
	ki2004.obj ki2004d.obj ki2004f.obj ki2006.obj ki2006d.obj ki2006f.obj uc2007.obj \
	uc2007d.obj uc2007f.obj ki2005.obj ki2005d.obj ki2005f.obj xm2031.obj xm2031d.obj \
	xm2031f.obj xm2024.obj xm2024d.obj xm2024f.obj dt2021.obj dt2021d.obj dt2021f.obj \
	ki2001.obj ki2001d.obj ki2001f.obj ki2003.obj ki2003d.obj ki2003f.obj uc2008.obj \
	uc2008d.obj uc2008f.obj ks2000.obj ks2000d.obj ks2000f.obj xm2026.obj xm2026d.obj \
	xm2026f.obj dt2028.obj dt2028d.obj dt2028f.obj kl2020.obj kl2020d.obj kl2020f.obj \
	uc2019.obj uc2019d.obj uc2019f.obj dt2030.obj dt2030d.obj dt2030f.obj dt2029.obj \
	dt2029d.obj dt2029f.obj dt2023.obj dt2023d.obj dt2023f.obj uc2018.obj uc2018d.obj \
	uc2018f.obj yy2014.obj yy2014d.obj yy2014f.obj dt2022.obj dt2022d.obj dt2022f.obj \
	uc2017.obj uc2017d.obj uc2017f.obj uc2016.obj uc2016d.obj uc2016f.obj uc2015.obj \
	uc2015d.obj uc2015f.obj yy2013.obj yy2013d.obj yy2013f.obj yy2012.obj yy2012d.obj \
	yy2012f.obj 

all::  Cobj7.lib

Cobj7.lib: $(OBJECTS) Makefile
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

