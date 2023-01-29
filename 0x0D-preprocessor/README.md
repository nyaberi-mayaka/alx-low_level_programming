<h1 class="gap">0x0D. C - Preprocessor</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/X0ithSsqlz_D0c8V8uA1HQ" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="/rltoken/kaqIw352MSJ8xoi1xU09ZA" title="Object-like Macros" target="_blank">Object-like Macros</a> </li>
<li><a href="/rltoken/wcQZzunlgjepxExZFc2ORQ" title="Macro Arguments" target="_blank">Macro Arguments</a> </li>
<li><a href="/rltoken/S4zfCHzg82fUAxdt8_SaZQ" title="Pre Processor Directives in C" target="_blank">Pre Processor Directives in C</a> </li>
<li><a href="/rltoken/G33GiOIZofiIN4Tx9_acbQ" title="The C Preprocessor" target="_blank">The C Preprocessor</a> </li>
<li><a href="/rltoken/0OYhpL2cJfsIMBWhTuZsAA" title="Standard Predefined Macros" target="_blank">Standard Predefined Macros</a> </li>
<li><a href="/rltoken/oF2vgIZNePdU965jCEZLHA" title="include guard" target="_blank">include guard</a> </li>
<li><a href="/rltoken/ROl5xAMKX-JpenEqmf7FnQ" title="Common Predefined Macros" target="_blank">Common Predefined Macros</a> </li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="/rltoken/ipbpW8pLm91jdr3YD-AENg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are macros and how to use them</li>
<li>What are the most common predefined macros</li>
<li>How to include guard your header files</li>
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
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. Object-like Macro
    </h3>
    <div class="panel-body">
    <p>Create a header file that defines a macro named <code>SIZE</code> as an abbreviation for the token <code>1024</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      1. Pi
    </h3>

<div class="panel-body">
    <p>Create a header file that defines a macro named <code>PI</code> as an abbreviation for the token <code>3.14159265359</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      2. File name
    </h3>

<div class="panel-body">
    <p>Write a program that prints the name of the file it was compiled from, followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      3. Function-like macro
    </h3>

<div class="panel-body">
    <p>Write a function-like macro <code>ABS(x)</code> that computes the absolute value of a number <code>x</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

  </div>

<h3 class="panel-title">
      4. SUM
    </h3>
<div class="panel-body">
    <p>Write a function-like macro <code>SUM(x, y)</code> that computes the sum of the numbers <code>x</code> and <code>y</code>.</p>

<pre><code>julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
</code></pre>

  </div>
