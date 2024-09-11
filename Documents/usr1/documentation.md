# Aeonic Iridium OS User Guide
## Initial setup
Iridium OS&trade; by Aeonic, formerly known as BestPenguin Disk by E11, is a high-level OS constructed out of `pure` C++. In order to use it, you must:
* Fork the repl
* Enter your name
* Enter an app name
* and then enjoy as much as you like! No BS guaranteed!

Note: You may consider downloading it right to your machine if you do not want your files visible to the public. Or, just get the Repl.it hacker plan/some cycles and make your fork `private`. Note that some libraries will not work if you use Xcode on Mac.
## Accessing the Features
### The Login screen
In order to get to the list of apps, known as the appscreen, you must wait for the loading animation to complete. You will then be greeted with the login screen. Type in [1] and press enter. A loading animation will show up, and the appscreen will appear.
### The Appscreen
The appscreen lists all of the default applications (see Extensions for more applications) in a table, organised into 4 categories, Important, Office, Utilities, and Games. At this point, you may use the TUI (textual user interface) or the CLI (command line interface).
## Basics of the Command Line Interface (CLI)
After navigating to the appscreen, the CLI can be used. There are a bunch of basic commands which will be shown here. Commas in the name mean that multiple commans can be used to do the same thing. Visible hashes (if this documentation is being viewed inside Iridium) are not part of the command.
### 5
Closes the running app.
## action, do, perform
Do a file-related action related to this
## calc
Perform a calculation. Type an operation (add, subtract, multiply, divide, sqrt, log, sin, cos, tan, circle) and then type in each number required, separaated by a space, NOT the operand. Then press enter. If there is only one number to enter,  only type in that one number and enter. Either way, that will lead you to the answer of your calculation.
## Final info
### List of Important System Files
* main.cpp (critical for booting of OS)
* Applications/tabulate (library that allows tables to function, like appscreen)
* Applications/Libraries/basiclib.hpp (critical for function of bpaf.hpp)
* Applications/Libraries/bpaf.hpp (contains preinstalled apps, the appscreen, and important critical functions)
* Applications/Libraries/bpdlogin.hpp (contains the login screen and allows logging in)
* Applications/Libraries/libraries.hpp (contains index of libraries for the other files)
* Applications/Libraries/platinum.h (contains basic things like the animations and clear screen function, and used in order to develop applications)
### Licensing
Aeonic Iridium OS is FOSS (*F*ree and *O*pen *S*ource *S*oftware)! However, it may not be distributed within the Imperial Republic of Timonoucitiland due to the fact that it has TCW-D. In all other areas of the world, it may be distributed, but the name and copyrighted app names `must` be changed due to them being intellectual property of Aeonic, formerly E11.
Aeonic Corporation is not responsible for any damage to your system. All of that's on you. The liscense used to protect this Software is known as TCW-D, and information may be found on the official TCW website, https://tcw.ebp11.repl.co. TCW-D allows warranty, so Iridium OS is provided with UNLIMITED WARRANTY. However, if you modify or delete system files (namely the main ones, main.cpp, basiclib.hpp, bpaf.hpp, libraries.hpp, iridium.hpp and platinum.hpp), you're on your own. Tabulate is a third-party library included within Iridium OS and is not endorsed with Aeonic. Tabulate goes under the GNU public liscence () and any issues with it will not be covered with Iridium OS's warranty.