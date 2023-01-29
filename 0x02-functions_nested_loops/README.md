<h1 class="gap">0x02. C - Functions, nested loops</h1>
<div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/_4aLZ5nW24njUT2VbSZdQQ" title="Nested while loops" target="_blank">Nested while loops</a> </li>
<li><a href="/rltoken/Vg1zzzrxLhPh71405uggSg" title="C - Functions" target="_blank">C - Functions</a> </li>
<li><a href="/rltoken/jveXtnJII2S0z7a06c7-JA" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
<li><a href="/rltoken/XZ--UJZO76ZoUWNA9bTmbg" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
<li><a href="/rltoken/AS8JW4ObD5gmyX2mgtqV0A" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the “Once-Only Headers” paragraph</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/-ERX2Jh115GIdTUsSixnnA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

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

<h2 class="gap">Tasks</h2>

<h3 class="panel-title">
      0. _putchar
    </h3>

<div class="panel-body">
    <p>Write a program that prints <code>_putchar</code>, followed by a new line.</p>

<ul>
<li>The program should return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar
_putchar
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
    </h3>

<div class="panel-body">
    <p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_alphabet(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      2. 10 x alphabet
    </h3>

<div class="panel-body">
    <p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_alphabet_x10(void);</code></li>
<li>You can only use <code>_putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      3. islower
    </h3>

<div class="panel-body">
    <p>Write a function that checks for lowercase character. </p>

<ul>
<li>Prototype: <code>int _islower(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is lowercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>islower</code>. Run <code>man islower</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x02$ cat 3-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower
011
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      4. isalpha
    </h3>

<div class="panel-body">
    <p>Write a function that checks for alphabetic character. </p>

<ul>
<li>Prototype: <code>int _isalpha(int c);</code></li>
<li>Returns <code>1</code> if <code>c</code> is a letter, lowercase or uppercase</li>
<li>Returns <code>0</code> otherwise</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>isalpha</code>. Run <code>man isalpha</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x02$ cat 4-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha
1110
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      5. Sign
    </h3>

<div class="panel-body">
    <p>Write a function that prints the sign of a number.</p>

<ul>
<li>Prototype: <code>int print_sign(int n);</code></li>
<li>Returns <code>1</code> and prints <code>+</code> if <code>n</code> is greater than zero</li>
<li>Returns <code>0</code> and prints <code>0</code> if <code>n</code> is zero</li>
<li>Returns <code>-1</code> and prints <code>-</code> if <code>n</code> is less than zero</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 5-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/0x02$ ./5-sign
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
    </h3>

<div class="panel-body">
    <p>Write a function that computes the absolute value of an integer.</p>

<ul>
<li>Prototype: <code>int _abs(int);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>abs</code>. Run <code>man abs</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x02$ cat 6-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/0x02$ ./6-abs
1
0
1
98
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
    </h3>

<div class="panel-body">
    <p>Write a function that prints the last digit of a number.</p>

<ul>
<li>Prototype: <code>int print_last_digit(int);</code></li>
<li>Returns the value of the last digit</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/0x02$ ./7-last_digit
8044
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      8. I'm federal agent Jack Bauer, and today is the longest day of my life
    </h3>

<div class="panel-body">
    <p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</p>

<ul>
<li>Prototype: <code>void jack_bauer(void);</code></li>
<li>You can listen to <a href="/rltoken/aNwRcWg7MPM1J2lYuuuBjA" title="this soundtrack" target="_blank">this soundtrack</a> while coding :)</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 8-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      9. Learn your times table
    </h3>

<div class="panel-body">
    <p>Write a function that prints the 9 times table, starting with 0.</p>

<ul>
<li>Prototype: <code>void times_table(void);</code></li>
<li>Format: see example</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      10. a + b
    </h3>

<div class="panel-body">
    <p>Write a function that adds two integers and returns the result.</p>

<ul>
<li>Prototype: <code>int add(int, int);</code></li>
</ul>

<pre><code>julien@ubuntu:~/$ cat 10-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/0x02$ ./10-add
98
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      11. 98 Battery Street, the OG
    </h3>

<div class="panel-body">
    <p>Write a function that prints all natural numbers from <code>n</code> to <code>98</code>, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_to_98(int n);</code></li>
<li>Numbers must be separated by a comma, followed by a space</li>
<li>Numbers should be printed in order</li>
<li>The first printed number should be the number passed to your function</li>
<li>The last printed number should be <code>98</code></li>
<li>You are allowed to use the standard library</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 11-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/0x02$ ./11-98
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
    </h3>

<div class="panel-body">
    <p>Write a function that prints the <code>n</code> times table, starting with 0.</p>

<ul>
<li>Prototype: <code>void print_times_table(int n);</code></li>
<li>If <code>n</code> is greater than <code>15</code> or less than <code>0</code> the function should not print anything</li>
<li>Format: see example</li>
</ul>

<pre><code>julien@ubuntu:~/0x02$ cat 100-main.c
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$
</code></pre>

  </div>

<h3 class="panel-title">
      13. Nature made the natural numbers; All else is the work of women
    </h3>

<div class="panel-body">
    <p>If we list all the natural numbers below <code>10</code> that are multiples of <code>3</code> or <code>5</code>, we get <code>3</code>, <code>5</code>, <code>6</code> and <code>9</code>. The sum of these multiples is <code>23</code>. Write a program that computes and prints the sum of all the multiples of <code>3</code> or <code>5</code> below <code>1024</code> (excluded), followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

  </div>

<h3 class="panel-title">
      14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
    </h3>

<div class="panel-body">
    <p>Write a program that prints the first 50 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p>

<ul>
<li>The numbers must be separated by comma, followed by a space <code>,&nbsp;</code></li>
<li>You are allowed to use the standard library</li>
</ul>

  </div>

<h3 class="panel-title">
      15. Even Liber Abbaci
    </h3>

<div class="panel-body">
    <p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with <code>1</code> and <code>2</code>, the first 10 terms will be: <code>1, 2, 3, 5, 8, 13, 21, 34, 55, 89</code>. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</p>

<ul>
<li>You are allowed to use the standard library</li>
</ul>

  </div>

<h3 class="panel-title">
      16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
    </h3>

<div class="panel-body">
    <p>Write a program that finds and prints the first 98 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p>

<ul>
<li>The numbers should be separated by comma, followed by a space  <code>,</code></li>
<li>You are allowed to use the standard library</li>
<li>You are not allowed to use any other library (You can’t use <code>GMP</code> etc…)</li>
<li>You are not allowed to use <code>long long</code>, <code>malloc</code>, pointers, arrays/tables, or structures</li>
<li>You are not allowed to hard code any Fibonacci number (except for <code>1</code> and <code>2</code>)</li>
</ul>

  </div>
