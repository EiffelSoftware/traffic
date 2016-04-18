## EiffelStudio issues

### All platforms 

#### Precompilation problems

If you encountered precompilation problems during installation and you think you have fixed them, before precompiling again you may want to delete the EiffelStudio generated directory (EIFGENs), which might contain corrupted files at this point. 
The exact location of the EIFGENs directory for precompiled libraries is platform-specific: 
* **Windows 7**: `C:\Users\<your user name>\Documents\Eiffel User Files\7.1\precomp\spec\windows\EIFGENs`
* **Linux**: `${HOME}/.es/eiffel_user_files/7.1/precomp/spec/linux-x86/EIFGENs`

#### Scripts from assignment 1

If you copy-pasted a script from the assignment pdf and you are getting unexpected behavior when running it, the reason might be that you also copy-pasted some invisible symbols together with the script. In this case, either use a text editor that shows invisible symbols in order to remove them, or type the script by hand, without copy-pasting it.  
