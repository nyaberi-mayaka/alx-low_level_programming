<h1 align="center">0x18. C - Dynamic libraries</h1>

***
## Resources
**Read or watch:**

* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [create dynamic libraries on Linux]()
* [Technical Writing](https://intranet.alxswe.com/concepts/225)
***
## Learning Objectives
### General
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

#### Notes
* `nm` - The `nm` command is used to display the symbol table of a compiled object file shared libraries, and executables. It can be used to examine a dynamic library to see what symbols it exports. This can be useful when trying to diagnose issues with linking or when trying to understand how a library is being used by other programs. To use `nm`, simply run the following command:
	```
	nm /path/to/library.so
	```
	- This will display a list of symbols that are defined in the library, including function names and variable names.
	- Example usage: `nm -D mylibrary.so`
		- This command will list all of the symbols exported by the dynamic library `mylibrary.so`.
	The -D flag in `nm -D mylibrary.so` tells the `nm` command to display dynamic symbols in the specified shared object file (`mylibrary.so`).

	Dynamic symbols are symbols that are available for use by other objects linked with the shared object file at runtime. This includes functions and variables that are exported from the shared object file, as well as any symbols that the shared object file imports from other shared object files or libraries.

	By default, `nm` displays all symbols in the specified file, including both static and dynamic symbols. The `-D` flag restricts the output to only dynamic symbols.

* `ldd` - The `ldd` command is used to display the shared libraries that a binary executable is linked against. This can be useful when trying to diagnose issues with missing dependencies or when trying to understand how a program is using shared libraries. It can be used to verify that all of the required libraries are available and to see the paths where the libraries are located. To use `ldd`, simply run the following command:
	```
	ldd /path/to/binary
	```
	- This will display a list of shared libraries that the binary is linked against, along with their paths.
	- Example usage: `ldd myprogram`
		- This command will display the shared library dependencies of the executable `myprogram`.

* `ldconfig` - The `ldconfig` command is used to configure the dynamic linker run-time bindings. This is necessary when installing a new shared library, as `ldconfig` needs to be run in order for the library to be found and loaded correctly. To use `ldconfig`, simply run the following command:
	```
	ldconfig -n /path/to/new/library
	```
	- This will add the new library to the `ldconfig` cache, so that it can be found and loaded by programs that depend on it. It's important to note that this command must be run as root, in order to have the necessary permissions to update the `ldconfig` cache.
	- Example usage: `sudo ldconfig /usr/local/lib/`
		- This command will update the shared library cache to include the libraries in the directory `/usr/local/lib/`.
***
## Requirements
### C
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
* Don’t forget to push your header file
### Bash
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line ([why?](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
* The first line of all your files should be exactly `#!/bin/bash`
* A `README.md` file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable
***
## Tasks
### 0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your `main.h` file in your repository, containing at least all the prototypes of the above functions.
```
julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
-rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
                 w __cxa_finalize
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
                 w __gmon_start__
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w _Jv_RegisterClasses
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
                 U write
julien@ubuntu:~/0x18. Dynamic libraries$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x18. Dynamic libraries$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len 
    linux-vdso.so.1 =>  (0x00007fff5d1d2000)
    libdynamic.so => not found
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
julien@ubuntu:~/0x18. Dynamic libraries$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
julien@ubuntu:~/0x18. Dynamic libraries$ ldd len
    linux-vdso.so.1 =>  (0x00007fff41ae9000)
    libdynamic.so => ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
julien@ubuntu:~/0x18. Dynamic libraries$ ./len 
10
julien@ubuntu:~/0x18. Dynamic libraries$ 
```

### 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
```
julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
0000000000000a90 T _abs
0000000000000aa9 T _atoi
0000000000202048 B __bss_start
0000000000202048 D _edata
0000000000202050 B _end
00000000000011f8 T _fini
0000000000000900 T _init
0000000000000bd7 T _isalpha
0000000000000c04 T _isdigit
0000000000000c25 T _islower
0000000000000c46 T _isupper
0000000000000c67 T _memcpy
0000000000000caa T _memset
0000000000000ce9 T _putchar
0000000000000d0e T _puts
0000000000000d4a T _strcat
0000000000000dcf T _strchr
0000000000000e21 T _strcmp
0000000000000e89 T _strcpy
0000000000000eeb T _strlen
0000000000000f15 T _strncat
0000000000000fa5 T _strncpy
0000000000001029 T _strpbrk
000000000000109d T _strspn
0000000000001176 T _strstr
julien@ubuntu:~/0x18. Dynamic libraries$ 
```
### 2. Let's call C functions from Python
I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
```
julien@ubuntu:~/0x18$ cat 100-tests.py
import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
66 + -76 = -10
66 - -76 = 142
66 x -76 = -5016
66 / -76 = 0
66 % -76 = 66
julien@ubuntu:~/0x18$ python3 100-tests.py 
-34 + -57 = -91
-34 - -57 = 23
-34 x -57 = 1938
-34 / -57 = 0
-34 % -57 = -34
julien@ubuntu:~/0x18$ python3 100-tests.py 
-5 + -72 = -77
-5 - -72 = 67
-5 x -72 = 360
-5 / -72 = 0
-5 % -72 = -5
julien@ubuntu:~/0x18$ python3 100-tests.py 
39 + -62 = -23
39 - -62 = 101
39 x -62 = -2418
39 / -62 = 0
39 % -62 = 39
julien@ubuntu:~/0x18$ 
```
#### Notes
To create a dynamic library that contains C functions that can be called from Python, you can follow these steps:

1. Write the C functions you want to include in the dynamic library. For example, let's say you have a function add that takes two integers as arguments and returns their sum.
	```
	int add(int a, int b)
	{
		return a + b;
	}
	```
2. Compile the source file with the `-fPIC` flag to generate position-independent code . Position-independent code can be loaded and executed at any memory address, which is necessary for shared libraries:
	```
	gcc -c -fPIC *myfunctions.c 
	```
3. Create a dynamic library using the object file:
	```
	gcc -shared -o libmylib.so *.o
	```
	This command compiles `mylib.c` into a shared object file named `libmylib.so`. The `-shared` flag tells GCC to create a shared object file instead of an executable, and the `-o` flag specifies the output filename.

4. Install the library by copying it to a system library directory:
	```
	 sudo cp libmylib.so /usr/local/lib/
	```
	This command installs the library by copying it to a system library directory, which is specified by `/usr/local/lib/` in this example. The `sudo` command is used to gain superuser privileges needed to copy the library to this system directory.

	5. Update the library cache:
	```
	 sudo ldconfig
	```
	This command updates the system library cache so that the new library is visible to the linker. The `sudo` command is again used to gain superuser privileges needed to update the library cache.

##### calling the library from a python function
After completing these steps, the C functions defined in `myfunctions.c` should be callable from Python by importing the `ctypes` library and loading the shared library using the `CDLL` function.

1. Create a Python wrapper for the C functions. This allows you to call the C functions from Python. For example:
	```
	import ctypes

	# Load the shared library
	mylib = ctypes.CDLL('/usr/local/lib/libmylib.so')

	def add(a, b):
		# Define the argument and return types of the add function
    		mylib.add.argtypes = (ctypes.c_int, ctypes.c_int)
    		mylib.add.restype = ctypes.c_int
    	
    		# Call the add function
    		return mylib.add(a, b)
	```

	This code imports the shared object file `libmylib.so` using the `ctypes` library. It then defines a Python function add that calls the `C` function add from the shared object file.

You can now use the add function from Python just like any other Python function:

	```
	>>> add(2, 3)
	5
	```
##### Calling the library from a c function
1. Calling the `C` dynamic library (from C)
	
	Let us assume the file `call_fct.c` is the C source file calling some functions of the `libmylib.so` library .

	To create the executable, you first compile the source file: 
	```
	gcc -c call_fct.c
	```
	and then link the created code call_fct.o with the library:
	```
	gcc -o call_dynamic call_fct.o -L./ -lmylib
	```
	The flag `-L` indicates where the library is to be found and the flag `-l` specifies the library, without the prepending `lib` and file extension `.so`.

	The executable `call_dynamic` is ready for a run.

5. Running a `C` executable linked to a `.so` file
Running the `call_dynamic` program should be `call_dynamic` or `./call_dynamic` if `./` (the current directory where `call_dynamic` is) is not in the `PATH` variable.

	But the shared library will not be found at runtime if its directory is not in the variable `LD_LIBRARY_PATH` (probably the case by default). Type the following line in the command shell:
	```
	if sh or bash shell:         export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
	if csh or tcsh shell:        setenv LD_LIBRARY_PATH .:$LD_LIBRARY_PATH
	```
	In this example the local directory (`./`) is added to the search. Mention in the first case that there is no space around the `=` sign.

	The new path list will be effective only in the shell where you applied the command. If you want the path to be set automatically, copy the line in your shell startup script of your home directory (e.g. `~/.bashrc` if you use a bash shell).

### 3. Code injection: Win the Giga Millions!
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
* Our mole got us a copy of the program, you can download it [here](https://github.com/holbertonschool/0x18.c). Our mole also gave us a piece of documentation:

```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
 ```
* You can’t modify the program `gm` itself as Master Sysadmin Sylvain (MSS) always checks its [MD5](https://github.com/holbertonschool/0x18.c/blob/master/101-md5_gm) before running it
* The system is an `Linux Ubuntu 16.04`
* The server has internet access
* Our mole will be only able to run two commands from a shell script, without being detected by MSS
* Your shell script should be maximum 3 lines long. You are not allowed to use `;`, `&&`, `||`, `|`, ` (it would be detected by MSS), and have a maximum of two commands
* Our mole has only the authorization to upload one file on the server. It will be your shell script
* Our mole will run your shell script this way: `mss@gm_server$ . ./101-make_me_win.sh`
* Our mole will run your shell script from the same directory containing the program `gm`, exactly 98 seconds before MSS runs `gm` with my numbers: `./gm 9 8 10 24 75 9`
* MSS will use the same terminal and session than our mole
* Before running the `gm` program, MSS always check the content of the directory
* MSS always exit after running the program `gm`
* TL;DR; This is what is going to happen
```
mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
```
Tip: `LD_PRELOAD`

#### Notes
##### LD_PRELOAD
* LD_PRELOAD is an environment variable in Linux and other Unix-like operating systems that allows a user to load a specific shared object file (i.e., a dynamic library) before executing a program.
* When a program is run, the dynamic linker/loader, called ld.so, searches for the necessary shared object files in the directories specified in the default search path (as defined in the ldconfig cache and/or the LD_LIBRARY_PATH environment variable). However, if the LD_PRELOAD environment variable is set, ld.so will first load any shared object files specified in LD_PRELOAD before loading the required shared object files from the default search path.
* This feature allows users to override some functions or variables used by a program with their own custom implementations. For example, a user can create a shared object file that provides alternative implementations of some standard C library functions and then use LD_PRELOAD to load that shared object file before running a specific program, causing the program to use the alternative implementations instead of the standard ones. This can be useful for debugging, testing, or other purposes.
***
## Author
* **[The_Quadzilla](https://github.com/nyaberi-mayaka/)**
***
