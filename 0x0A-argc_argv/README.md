<h1 class="gap">0x0A. C - argc, argv</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/Jip_nI4tv2ybQZ-jV3fqJg" title="Arguments to main" target="_blank">Arguments to main</a> </li>
<li><a href="/rltoken/31aLwv8qsXuiUZrOk9Djqg" title="argc and argv" target="_blank">argc and argv</a> </li>
<li><a href="/rltoken/A0pzqslB6Z3Y3OV3hJQ6Tw" title="What does argc and argv mean?" target="_blank">What does argc and argv mean?</a> </li>
<li><a href="/rltoken/MkOUE1ndq1UAx9Erk-AVbg" title="how to compile with unused variables" target="_blank">how to compile with unused variables</a> </li>
</ul>
<h3>General</h3>
<ul>
<li>How to use arguments passed to your program</li>
<li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other</li>
<li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>You are allowed to use the standard library</li>
</ul>
<h2 class="gap">Tasks</h2>
<div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. It ain't what they call you, it's what you answer to
    </h3>
  </div>
    <p>Write a program that prints its name, followed by a new line.</p>

<ul>
<li>If you rename the program, it will print the new name, without having to compile it again</li>
<li>You should not remove the path before the name of the program</li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$
</code></pre>

  </div>
  <h3 class="panel-title">
      1. Silence is argument carried out by other means
    </h3>
    <div class="panel-body">
    <p>Write a program that prints the number of arguments passed into it.</p>

<ul>
<li>Your program should print a number, followed by a new line</li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      2. The best argument against democracy is a five-minute conversation with the average voter
    </h3>
    <div class="panel-body">
    <p>Write a program that prints all arguments it receives.</p>

<ul>
<li>All arguments should be printed, including the first one</li>
<li>Only print one argument per line, ending with a new line</li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      3. Neither irony nor sarcasm is argument
    </h3>
    <div class="panel-body">
    <p>Write a program that multiplies two numbers.</p>

<ul>
<li>Your program should print the result of the multiplication, followed by a new line</li>
<li>You can assume that the two numbers and result of the multiplication can be stored in an integer</li>
<li>If the program does not receive two arguments, your program should print <code>Error</code>, followed by a new line, and return <code>1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. To infinity and beyond
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a program that adds positive numbers.</p>

<ul>
<li>Print the result, followed by a new line</li>
<li>If no number is passed to the program, print <code>0</code>, followed by a new line</li>
<li>If one of the number contains symbols that are not digits, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>You can assume that numbers and the addition of all the numbers can be stored in an <code>int</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. Minimal Number of Coins for Change
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a program that prints the minimum number of coins to make change for an amount of money.</p>

<ul>
<li>Usage: <code>./change cents</code></li>
<li>where <code>cents</code> is the amount of cents you need to give back</li>
<li>if the number of arguments passed to your program is not exactly <code>1</code>, print <code>Error</code>, followed by a new line, and return <code>1</code></li>
<li>you should use <code>atoi</code> to parse the parameter passed to your program</li>
<li>If the number passed as the argument is negative, print <code>0</code>, followed by a new line</li>
<li>You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent</li>
</ul>

<pre><code>julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
