<h1 class="gap">0x04. C - More functions, more nested loops</h1>

<div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/aDRkFzUkVysnD94Dpm3w5g" title="Nested while loops" target="_blank">Nested while loops</a> </li>
<li><a href="/rltoken/zf4IZeoe0yFZL2X7_nznQQ" title="C - Functions" target="_blank">C - Functions</a> </li>
<li><a href="/rltoken/iQ87CI4Lf41U_uRh9QsoQA" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
<li><a href="/rltoken/pUXhvD6-xl5BbWyj1AhCEA" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
<li><a href="/rltoken/IFY075ffrszSJvHqPAa-zQ" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the “Once-Only Headers” paragraph</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/Ya6FG69nkA7hRf_WG4E8gQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are nested loops and how to use them</li>
<li>What is a function and how do you use functions</li>
<li>What is the difference between a declaration and a definition of a function</li>
<li>What is a prototype</li>
<li>Scope of variables</li>
<li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra -std=gnu89</code></li>
<li>What are header files and how to to use them with <code>#include</code></li>
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
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>

<h2>More Info</h2>

<p>You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>

  </div>
</div>

<h2 class="gap">Tasks</h2>

<h3 class="panel-title">
      0. isupper
    </h3>

<div class="panel-body">
    <p>Write a function that checks for uppercase character.</p>

<ul>
<li>Prototype: <code>int _isupper(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>isupper</code>. Run <code>man isupper</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper
A: 1
a: 0
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      1. isdigit
    </h3>

<div class="panel-body">
    <p>Write a function that checks for a digit (<code>0</code> through <code>9</code>).</p>

<ul>
<li>Prototype: <code>int _isdigit(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a digit</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.</p>

<pre><code>julien@ubuntu:~/0x04$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit
0: 1
a: 0
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      2. Collaboration is multiplication
    </h3>

<div class="panel-body">
    <p>Write a function that multiplies two integers.</p>

<ul>
<li>Prototype: <code>int mul(int a, int b);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul
100352
-1646592
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      3. The numbers speak for themselves
    </h3>

<div class="panel-body">
    <p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_numbers(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x04$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      4. I believe in numbers and signs
    </h3>

<div class="panel-body">
    <p>Write a function that prints the numbers, from <code>0</code> to <code>9</code>, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_most_numbers(void);</code></li>
<li>Do not print <code>2</code> and <code>4</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x04$ ./4-print_most_numbers
01356789
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      5. Numbers constitute the only universal language
    </h3>

<div class="panel-body">
    <p>Write a function that prints 10 times the numbers, from <code>0</code> to <code>14</code>, followed by a new line.</p>

<ul>
<li>Prototype: <code>void more_numbers(void);</code></li>
<li>You can only use <code>_putchar</code> three times in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x04$ ./5-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x04
</code></pre>

  </div>

<h3 class="panel-title">
      6. The shortest distance between two points is a straight line
    </h3>

<div class="panel-body">
    <p>Write a function that draws a straight line in the terminal.</p>

<ul>
<li>Prototype: <code>void print_line(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>_</code> should be printed</li>
<li>The line should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print <code>\n</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x04$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      7. I feel like I am diagonally parked in a parallel universe
    </h3>

<div class="panel-body">
    <p>Write a function that draws a diagonal line on the terminal.</p>

<ul>
<li>Prototype: <code>void print_diagonal(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>n</code> is the number of times the character <code>\</code> should be printed</li>
<li>The diagonal should end with a <code>\n</code></li>
<li>If <code>n</code> is <code>0</code> or less, the function should only print a <code>\n</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x04$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      8. You are so much sunshine in every square inch
    </h3>

<div class="panel-body">
    <p>Write a function that prints a square, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_square(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the square</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the square</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 8-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x04$ ./8-squares
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      9. Fizz-Buzz
    </h3>

<div class="panel-body">
    <p>The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.</p>

<p>Write a program that prints the numbers from <code>1</code> to <code>100</code>, followed by a new line. But for multiples of three print <code>Fizz</code> instead of the number and for the multiples of five print <code>Buzz</code>. For numbers which are multiples of both three and five print <code>FizzBuzz</code>.</p>

<ul>
<li>Each number or word should be separated by a space</li>
<li>You are allowed to use the standard library</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x04$ ./9-fizz_buzz
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      10. Triangles
    </h3>

<div class="panel-body">
    <p>Write a function that prints a triangle, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_triangle(int size);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>Where <code>size</code> is the size of the triangle</li>
<li>If <code>size</code> is <code>0</code> or less, the function should print only a new line</li>
<li>Use the character <code>#</code> to print the triangle</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 10-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
julien@ubuntu:~/0x04$ ./10-triangles
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

julien@ubuntu:~/0x04$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x04$
</code></pre>

  </div>

<h3 class="panel-title">
      11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
    </h3>

<div class="panel-body">
    <p>The prime factors of <code>1231952</code> are <code>2</code>, <code>2</code>, <code>2</code>, <code>2</code>, <code>37</code> and <code>2081</code>. </p>

<p>Write a program that finds and prints the largest prime factor of the number <code>612852475143</code>, followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
<li>Your program will be compiled with this command: <code>gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm</code></li>
</ul>

  </div>

<h3 class="panel-title">
      12. Numbers have life; they're not just symbols on paper
    </h3>

<div class="panel-body">
    <p>Write a function that prints an integer.</p>

<ul>
<li>Prototype: <code>void print_number(int n);</code></li>
<li>You can only use <code>_putchar</code> function to print</li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to use arrays or pointers</li>
<li>You are not allowed to hard-code special values</li>
</ul>

<pre><code>julien@ubuntu:~/0x04$ cat 101-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x04$ ./101-print_numbers
98
402
1024
0
-98
julien@ubuntu:~/0x04$
</code></pre>

  </div>
