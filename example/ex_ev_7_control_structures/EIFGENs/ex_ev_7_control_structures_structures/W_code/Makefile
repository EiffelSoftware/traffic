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

SUBDIRS = C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17 E1

EXTERNALS =  \
	"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\vision2\spec\msc\windows\lib\vision2.lib" \
	"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\vision2\spec\msc\windows\lib\zlib.lib" \
	"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\vision2\spec\msc\windows\lib\libpng.lib" \
	"C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\library\wel\spec\msc\windows\lib\wel.lib"

all:: ex_ev_7_control_structures.exe
	echo done > completed.eif

C1\Cobj1.lib: Makefile E1\estructure.h
	cd C1
	$(START_TEST) $(MAKE) Cobj1.lib $(END_TEST)
	cd ..

C2\Cobj2.lib: Makefile E1\estructure.h
	cd C2
	$(START_TEST) $(MAKE) Cobj2.lib $(END_TEST)
	cd ..

C3\Cobj3.lib: Makefile E1\estructure.h
	cd C3
	$(START_TEST) $(MAKE) Cobj3.lib $(END_TEST)
	cd ..

C4\Cobj4.lib: Makefile E1\estructure.h
	cd C4
	$(START_TEST) $(MAKE) Cobj4.lib $(END_TEST)
	cd ..

C5\Cobj5.lib: Makefile E1\estructure.h
	cd C5
	$(START_TEST) $(MAKE) Cobj5.lib $(END_TEST)
	cd ..

C6\Cobj6.lib: Makefile E1\estructure.h
	cd C6
	$(START_TEST) $(MAKE) Cobj6.lib $(END_TEST)
	cd ..

C7\Cobj7.lib: Makefile E1\estructure.h
	cd C7
	$(START_TEST) $(MAKE) Cobj7.lib $(END_TEST)
	cd ..

C8\Cobj8.lib: Makefile E1\estructure.h
	cd C8
	$(START_TEST) $(MAKE) Cobj8.lib $(END_TEST)
	cd ..

C9\Cobj9.lib: Makefile E1\estructure.h
	cd C9
	$(START_TEST) $(MAKE) Cobj9.lib $(END_TEST)
	cd ..

C10\Cobj10.lib: Makefile E1\estructure.h
	cd C10
	$(START_TEST) $(MAKE) Cobj10.lib $(END_TEST)
	cd ..

C11\Cobj11.lib: Makefile E1\estructure.h
	cd C11
	$(START_TEST) $(MAKE) Cobj11.lib $(END_TEST)
	cd ..

C12\Cobj12.lib: Makefile E1\estructure.h
	cd C12
	$(START_TEST) $(MAKE) Cobj12.lib $(END_TEST)
	cd ..

C13\Cobj13.lib: Makefile E1\estructure.h
	cd C13
	$(START_TEST) $(MAKE) Cobj13.lib $(END_TEST)
	cd ..

C14\Cobj14.lib: Makefile E1\estructure.h
	cd C14
	$(START_TEST) $(MAKE) Cobj14.lib $(END_TEST)
	cd ..

C15\Cobj15.lib: Makefile E1\estructure.h
	cd C15
	$(START_TEST) $(MAKE) Cobj15.lib $(END_TEST)
	cd ..

C16\Cobj16.lib: Makefile E1\estructure.h
	cd C16
	$(START_TEST) $(MAKE) Cobj16.lib $(END_TEST)
	cd ..

C17\Cobj17.lib: Makefile E1\estructure.h
	cd C17
	$(START_TEST) $(MAKE) Cobj17.lib $(END_TEST)
	cd ..

E1\emain.obj:  Makefile E1\Makefile
	$(CP) "$(EIFTEMPLATES)\emain.template" E1\emain.c
	cd E1
	$(START_TEST) $(MAKE) emain.obj  $(END_TEST)
	cd ..

E1\eoption.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) eoption.obj  $(END_TEST)
	cd ..

E1\epattern.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) epattern.obj  $(END_TEST)
	cd ..

E1\efrozen.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) efrozen.obj  $(END_TEST)
	cd ..

E1\ecall.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) ecall.obj  $(END_TEST)
	cd ..

E1\eplug.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) eplug.obj  $(END_TEST)
	cd ..

E1\eskelet.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) eskelet.obj  $(END_TEST)
	cd ..

E1\evisib.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) evisib.obj  $(END_TEST)
	cd ..

E1\ececil.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) ececil.obj  $(END_TEST)
	cd ..

E1\einit.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) einit.obj  $(END_TEST)
	cd ..

E1\eparents.obj : Makefile E1\Makefile
	cd E1
	$(START_TEST) $(MAKE) eparents.obj  $(END_TEST)
	cd ..

OBJECTS = E1\eparents.obj  E1\einit.obj  E1\ececil.obj  E1\evisib.obj  E1\eskelet.obj  E1\eplug.obj  E1\ecall.obj  E1\efrozen.obj  E1\epattern.obj  E1\eoption.obj  C17\Cobj17.lib C16\Cobj16.lib C15\Cobj15.lib C14\Cobj14.lib C13\Cobj13.lib C12\Cobj12.lib C11\Cobj11.lib C10\Cobj10.lib C9\Cobj9.lib C8\Cobj8.lib C7\Cobj7.lib C6\Cobj6.lib C5\Cobj5.lib C4\Cobj4.lib C3\Cobj3.lib C2\Cobj2.lib C1\Cobj1.lib 

C_OBJECTS = C17\Cobj17.lib C16\Cobj16.lib C15\Cobj15.lib C14\Cobj14.lib C13\Cobj13.lib C12\Cobj12.lib C11\Cobj11.lib C10\Cobj10.lib C9\Cobj9.lib C8\Cobj8.lib C7\Cobj7.lib C6\Cobj6.lib C5\Cobj5.lib C4\Cobj4.lib C3\Cobj3.lib C2\Cobj2.lib C1\Cobj1.lib 

EOBJECTS = E1\eparents.obj  E1\einit.obj  E1\ececil.obj  E1\evisib.obj  E1\eskelet.obj  E1\eplug.obj  E1\ecall.obj  E1\efrozen.obj  E1\epattern.obj  E1\eoption.obj  

PRECOMP_OBJECTS= "c:\program files\eiffel software\eiffelstudio 6.0 gpl\precomp\spec\windows\EIFGENs\vision2\W_code\msc\precomp.lib"


ex_ev_7_control_structures.exe: ex_ev_7_control_structures.lnk ex_ev_7_control_structures.res
	$(COMMAND_MAKEFILE)
	link @ex_ev_7_control_structures.lnk

..\..\..\ex_ev_7_control_structures.rc:
	if not exist ..\..\..\ex_ev_7_control_structures.rc $(MV) "C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\config\windows\msc\eiffel.rc" ..\..\..\ex_ev_7_control_structures.rc

ex_ev_7_control_structures.res: ..\..\..\ex_ev_7_control_structures.rc Makefile
	rc -r -foex_ev_7_control_structures.res ..\..\..\ex_ev_7_control_structures.rc

ex_ev_7_control_structures.lnk: $(OBJECTS) e1\emain.obj ex_ev_7_control_structures.res Makefile
	if exist $@ $(RM) $@
	@echo $(LDFLAGS) $(CCLDFLAGS) -OUT:ex_ev_7_control_structures.exe > $@
	@echo e1\emain.obj >> $@
	@echo $(EIFLIB) $(EXTERNALS) >> $@
	@echo USER32.lib WSOCK32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB $(ISE_SHAREDLIBS) $(PRECOMP_OBJECTS) >> $@
	@echo ex_ev_7_control_structures.res >> $@
	echo E1\eparents.obj  E1\einit.obj  E1\ececil.obj  E1\evisib.obj  E1\eskelet.obj   >> $@ 
	echo E1\eplug.obj  E1\ecall.obj  E1\efrozen.obj  E1\epattern.obj  E1\eoption.obj   >> $@ 
	echo C17\Cobj17.lib C16\Cobj16.lib C15\Cobj15.lib C14\Cobj14.lib C13\Cobj13.lib  >> $@ 
	echo C12\Cobj12.lib C11\Cobj11.lib C10\Cobj10.lib C9\Cobj9.lib C8\Cobj8.lib  >> $@ 
	echo C7\Cobj7.lib C6\Cobj6.lib C5\Cobj5.lib C4\Cobj4.lib C3\Cobj3.lib  >> $@ 
	echo C2\Cobj2.lib C1\Cobj1.lib  >> $@ 


RCECIL = wmalloc.obj wgarcol.obj wlocal.obj wexcept.obj wstore.obj wretrieve.obj whash.obj \
	wtraverse.obj whashin.obj wtools.obj winternal.obj wplug.obj wcopy.obj wequal.obj \
	wlmalloc.obj wout.obj wtimer.obj wurgent.obj wsig.obj whector.obj wcecil.obj \
	wbits.obj wfile.obj wdir.obj wmisc.obj werror.obj wumain.obj wmemory.obj wargv.obj \
	wboolstr.obj wsearch.obj wmain.obj debug.obj interp.obj woption.obj update.obj \
	wbench.obj wrun_idr.obj wcompress.obj wconsole.obj wpath_name.obj wobject_id.obj \
	weif_threads.obj weif_rw_lock.obj wgen_conf.obj weif_type_id.obj wrout_obj.obj \
	weif_project.obj idrs.obj network.obj ipc.obj 


#STATIC_CECIL PART
STATIC_CECIL = libex_ev_7_control_structures.lib
cecil: $(STATIC_CECIL)
$(STATIC_CECIL): $(OBJECTS) $(EIFLIB) 
	if exist $@ $(RM) $@
	lib -nologo -OUT:$(STATIC_CECIL) $(OBJECTS) $(EXTERNALS) $(EIFLIB) $(PRECOMP_OBJECTS)



#SHARED_CECIL PART
SHARED_CECIL = libex_ev_7_control_structures$(SHARED_SUFFIX)
dynamic_cecil: $(SHARED_CECIL) 
DEF_FILE= c_ex_ev_7_control_structures.def 
c_ex_ev_7_control_structures.def: 
	if exist $@ $(RM) $@
	echo LIBRARY c_ex_ev_7_control_structures.dll > $@
	echo DESCRIPTION 'c_ex_ev_7_control_structures.dll' >> $@
	type "C:\Program Files\Eiffel Software\EiffelStudio 6.0 GPL\studio\spec\windows\templates\cecil.def"  >> $@

SHARED_CECIL_OBJECT = $(OBJECTS) \
		E1/emain.obj
SHARED_FLAGS = $(LDSHAREDFLAGS) \
	/def:$(DEF_FILE) \
	/OUT:$(SHARED_CECIL) /IMPLIB:c_dll_ex_ev_7_control_structures.lib

$(SHARED_CECIL): $(SHARED_CECIL_OBJECT)  $(DEF_FILE)
	$(RM) $(SHARED_CECIL) 
	$(SHAREDLINK) $(SHAREDFLAGS) $(SHARED_CECIL_OBJECT) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 

#SYSTEM_IN_DYNAMIC_LIB PART

DEF_FILE= ex_ev_7_control_structures.def
dynlib: $(SYSTEM_IN_DYNAMIC_LIB) 
E1\egc_dynlib.obj: Makefile
	$(CP) "$(EIFTEMPLATES)\egc_dynlib.template" E1\egc_dynlib.c
	cd E1
	$(MAKE) egc_dynlib.obj
	cd ..
E1\edynlib.obj: Makefile E1\edynlib.c 
	cd E1
	$(MAKE) edynlib.obj
	cd ..

SYSTEM_IN_DYNAMIC_LIB_OBJ = $(OBJECTS) \
		E1\edynlib.obj E1\egc_dynlib.obj 
DYNLIBSHAREDFLAGS = $(LDSHAREDFLAGS) \
	/def:$(DEF_FILE) \
	/OUT:$(SYSTEM_IN_DYNAMIC_LIB) /IMPLIB:dll_ex_ev_7_control_structures.lib ex_ev_7_control_structures.res

$(SYSTEM_IN_DYNAMIC_LIB): $(SYSTEM_IN_DYNAMIC_LIB_OBJ)  $(DEF_FILE)
	$(FILE_EXIST) $(SYSTEM_IN_DYNAMIC_LIB) 	$(RM) $(SYSTEM_IN_DYNAMIC_LIB) 
	$(SHAREDLINK) $(DYNLIBSHAREDFLAGS) $(SYSTEM_IN_DYNAMIC_LIB_OBJ) $(PRECOMP_OBJECTS) $(EXTERNALS) $(EIFLIB) $(SHAREDLIBS) 



clean: sub_clean local_clean
clobber: sub_clobber local_clobber

local_clean::
	$(RM) core finished *.obj *.so *.a

local_clobber:: local_clean
	$(RM) Makefile config.sh finish_freezing

sub_clean::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i\Makefile ]; then \
			(cd $$i ; $(MAKE) clean); \
		fi; \
	done

sub_clobber::
	for i in $(SUBDIRS); \
	do \
		if [ -r $$i\Makefile ]; then \
			(cd $$i ; $(MAKE) clobber); \
		fi; \
	done

