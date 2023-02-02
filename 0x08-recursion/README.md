<h1 class="gap">0x08. C - Recursion</h1>
<div class="panel-body">
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/dzZB83Hm3lO7dScjhebAxw" title="0x08. Recursion, introduction" target="_blank">0x08. Recursion, introduction</a></li>
<li><a href="/rltoken/xYjKl3024oN58Bi_621_vQ" title="What on Earth is Recursion?" target="_blank">What on Earth is Recursion?</a> </li>
<li><a href="/rltoken/u4ojc5CZpf4qiuQvmXCiOA" title="C - Recursion" target="_blank">C - Recursion</a> </li>
<li><a href="/rltoken/Wv-wffgpXelN9ZTrbmiOyA" title="C Programming Tutorial 85, Recursion pt.1" target="_blank">C Programming Tutorial 85, Recursion pt.1</a> </li>
<li><a href="/rltoken/7GVdI-KT-M1vOIzwEjSahQ" title="C Programming Tutorial 86, Recursion pt.2" target="_blank">C Programming Tutorial 86, Recursion pt.2</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/Uip4OgfLQdGP921TAMtCHQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is recursion</li>
<li>How to implement recursion</li>
<li>In what situations you should implement recursion</li>
<li>In what situations you shouldn’t implement recursion</li>
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
<li><strong>You are not allowed to use any kind of loops</strong></li>
<li>You are not allowed to use <code>static</code> variables</li>
</ul>

  </div>

<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
    </h3>

<div class="panel-body">
    <p>Write a function that prints a string, followed by a new line.</p>

<ul>
<li>Prototype: <code>void _puts_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion
Puts with recursion
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>
<h3 class="panel-title">
      1. Why is it so important to dream? Because, in my dreams we are together
    </h3>

<div class="panel-body">
    <p>Write a function that prints a string in reverse.</p>

<ul>
<li>Prototype: <code>void _print_rev_recursion(char *s);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion
reklaW notloC
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
    </h3>
<div class="panel-body">
    <p>Write a function that returns the length of a string.</p>

<ul>
<li>Prototype: <code>int _strlen_recursion(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 2-main.c
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

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion
14
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>
<h3 class="panel-title">
    <p>Write a function that returns the factorial of a given number.</p>

<ul>
<li>Prototype: <code>int factorial(int n);</code><br></li>
<li>If <code>n</code> is lower than <code>0</code>, the function should return <code>-1</code> to indicate an error<br></li>
<li>Factorial of <code>0</code> is <code>1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
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

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      4. Once an idea has taken hold of the brain it's almost impossible to eradicate
    </h3>

<div class="panel-body">
    <p>Write a function that returns the value of <code>x</code> raised to the power of <code>y</code>.</p>

<ul>
<li>Prototype: <code>int _pow_recursion(int x, int y);</code><br></li>
<li>If <code>y</code> is lower than <code>0</code>, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>pow</code>. Run <code>man pow</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
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

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x08. Recursion$ ./4-pow
1
1
65536
25
-1
-125
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      5. Your subconscious is looking for the dreamer
    </h3>

<div class="panel-body">
    <p>Write a function that returns the natural square root of a number.</p>

<ul>
<li>Prototype: <code>int _sqrt_recursion(int n);</code><br></li>
<li>If <code>n</code> does not have a natural square root, the function should return <code>-1</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>sqrt</code>. Run <code>man sqrt</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 5-main.c
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

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x08. Recursion$ ./5-sqrt
1
32
4
-1
5
-1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      6. Inception. Is it possible?
    </h3>
    <div class="panel-body">
    <p>Write a function that returns <code>1</code> if the input integer is a <a href="/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw" title="prime number" target="_blank">prime number</a>, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int is_prime_number(int n);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
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

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x08. Recursion$ ./6-prime
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
    </h3>

<div class="panel-body">
    <p>Write a function that returns <code>1</code> if a string is a palindrome and <code>0</code> if not.</p>

<ul>
<li>Prototype: <code>int is_palindrome(char *s);</code><br></li>
<li>An empty string is a palindrome</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
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

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
julien@ubuntu:~/0x08. Recursion$ ./100-palindrome
1
1
0
1
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

<h3 class="panel-title">
      8. Inception. Now, before you bother telling me it's impossible...
    </h3>

<div class="panel-body">
    <p>Write a function that compares two strings and returns <code>1</code> if the strings can be considered identical, otherwise return <code>0</code>.</p>

<ul>
<li>Prototype: <code>int wildcmp(char *s1, char *s2);</code></li>
<li><code>s2</code> can contain the special character <code>*</code>.</li>
<li>The special char <code>*</code> can replace any string (including an empty string)</li>
</ul>

<pre><code>julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
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

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
