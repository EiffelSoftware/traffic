                            TRAFFIC - TODO
                            Version TODO
                            http://TODO

1. General
2. Requirements
3. Installation
4. License
5. Thanks
6. Contact

1. General
____________________________________________________________

ESDL wraps and extends the Simple DirectMedia Layer library. 
SDL - (http://www.libsdl.org) is very popular among Linux game developers.
SDL is a multimedia library composed of various subsystems for graphics, 
sound, networking, threading etc. The aim of ESDL is to provide the Eiffel 
community with a wrapper of SDL that has an easy to understand API.
ESDL is being developed subsystem by subsystem at the moment the 
project is pre 1.0.0 and implements only parts of the graphical subsystem,
an event loop, collision detection, bitmap fonts, a frame_counter and many
supporting casses that facilitate game, demo and multimedia application
development.
In the examples directory you will find demos illustrating most of ESDL's 
current API.

2. Requirements
____________________________________________________________

General:
	- Eiffel Studio 5.5 for Linux and Windows
	- Eiffel Studio 5.4 for Mac
	
Linux, Mac and Source releases:
	- Setting ESDL up as source release is not as easy as using the
	  installer, but it can be done if you follow the instructions
	  here and in developer.txt
    - SDL library >= 1.2.8 & SDL Development library (see 
      http://se.inf.ethz.ch/download/games/developer/) for links to all required
      libraries for each platform and compiler :-)
	- SDL_image library >= 1.2.4 & SDL_image Development library 
	  (http://www.libsdl.org/projects/SDL_image/)
	- A working Gobo-CVS installation (http://www.gobosoft.com)
	  -> You will need to get the latest GOBO from its sourceforge CVS
	- A working EWG-CVS installation (http://ewg.sf.net)
	  -> You will need to get the latest EWG from its sourceforge CVS
	  
3. Installation
____________________________________________________________

Windows:

	- Use the installer to set ESDL up

	- Open and compile and ESDL example now by going to 
	  $ESDL/example/hello_world and opening 'ise.ace' with Eiffel Studio
	  
	  Note: Compiling graphics applications with assertion checking enabled
	  has significant performance impacts - in order to get your applications
	  running on full speed, you will need to finalize them without assertion
	  checking on.
	  
	- To start developing an application yourself start from one of these 
	  examples
	  
	- NOTE: ESDL needs to set a few environment variables. This should be
	  done automatically by the installer. If anything doesn't work the way 
	  you expect it see developer.txt for more info.

OSX & Linux:

	- You need to set environment variables with the script located in:
	  $ESDL/vars_gcc.sh
	  
	- You will need to have  the SDL and SDL_image and their development 
	  libraries installed.
	  On debian you would do this with the following commands:
	  apt-get install libsdl1.2debian
      apt-get install libsdl1.2-dev
      apt-get install libsdl-image1.2
      apt-get install libsdl-image1.2-dev
	  
	- Open and compile and ESDL example now by going to 
	  $ESDL/example/hello_world and opening 'ise.ace' with Eiffel Studio
	  
	  Note: Compiling graphics applications with assertion checking enabled
	  has significant performance impacts - in order to get your applications
	  running on full speed, you will need to finalize them without assertion
	  checking on.
	  
	- To start developing an application yourself start from one of these 
	  examples

4. License
____________________________________________________________

	Eiffel Forum License, version 2, see forum.txt

5. Thanks
____________________________________________________________

	Karine Arnout, Bertrand Meyer, Bernd Schoeller, Benno Baumgartner,
	Anreas Leitner, Patrick Ruckstuhl, Rolf Bruderer, Stephan Classen,
	Ralph Wiedemeier and all the beta testers and the CS students of 
	ETH Zurich

6. Contact
____________________________________________________________

	http://eiffelsdl.sf.net
	mailto:eiffelsdl-devel@lists.sourceforge.net	
	bugzilla: TODO
	Till G. Bay: http://se.inf.ethz.ch/people/bay

last change $Date$