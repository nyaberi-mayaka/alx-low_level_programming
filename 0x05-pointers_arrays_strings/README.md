<h1 class="gap">0x05. C - Pointers, arrays and strings</h1>
<div class="panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">Concepts</h3>
    </div>
    <div class="panel-body">
      <p>
        <em>For this project, we expect you to look at these concepts:</em></p>
      <ul>
          <li>
            <a href="/concepts/60">Pointers and arrays</a>
          </li>
          <li>
            <a href="/concepts/120">Data Structures</a>
          </li>
      </ul>
    </div>

<div class="panel-body">

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/PVi2XMuApOK3jfhsoqsyXw" title="C - Arrays" target="_blank">C - Arrays</a> </li>
<li><a href="/rltoken/oyHybzYBeFiLUMALpb_usA" title="C - Pointers" target="_blank">C - Pointers</a> </li>
<li><a href="/rltoken/sUeh9qDyW9pePOfJIpx_Bw" title="C - Strings" target="_blank">C - Strings</a> </li>
<li><a href="/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ" title="Memory Layout" target="_blank">Memory Layout</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/OLGzIaD19ia5NZ-WCMckeg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are pointers and how to use them</li>
<li>What are arrays and how to use them</li>
<li>What are the differences between pointers and arrays</li>
<li>How to use strings and how to manipulate them</li>
<li>Scope of variables</li>
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

<p>You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, <code>malloc</code> and <code>free</code> - yet.</p>

  </div>

<h2 class="gap">Tasks</h2>

<h3 class="panel-title">
      0. 98 Battery st.
    </h3>

<div class="panel-body">
    <p>Write a function that takes a pointer to an <code>int</code> as parameter and updates the value it points to to <code>98</code>.</p>

<ul>
<li>Prototype: <code>void reset_to_98(int *n);</code> </li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 0-main.c
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

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&amp;n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98
n=402
n=98
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      1. Don't swap horses in crossing a stream
    </h3>

<div class="panel-body">
    <p>Write a function that swaps the values of two integers.</p>

<ul>
<li>Prototype: <code>void swap_int(int *a, int *b);</code><br></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&amp;a, &amp;b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      2. This report, by its very length, defends itself against the risk of being read
    </h3>

<div class="panel-body">
    <p>Write a function that returns the length of a string.</p>

<ul>
<li>Prototype: <code>int _strlen(char *s);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strlen</code>. Run <code>man strlen</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen
16
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      3. I do not fear computers. I fear the lack of them
    </h3>
    <div class="panel-body">
    <p>Write a function that prints a string, followed by a new line, to <code>stdout</code>.</p>

<ul>
<li>Prototype: <code>void _puts(char *str);</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>puts</code>. Run <code>man puts</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x05$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$

</code></pre>

  </div>

<h3 class="panel-title">
      4. I can only go one way. I've not got a reverse gear
    </h3>
<div class="panel-body">
    <p>Write a function that prints a string, in reverse, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_rev(char *s);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
    </h3>

<div class="panel-body">
    <p>Write a function that reverses a string.  </p>

<ul>
<li>Prototype: <code>void rev_string(char *s);</code><br></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 5-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string
My School
loohcS yM
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      6. Half the lies they tell about me aren't true
    </h3>

<div class="panel-body">
    <p>Write a function that prints every other character of a string, starting with the first character, followed by a new line.</p>

<ul>
<li>Prototype: <code>void puts2(char *str);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2
02468
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      7. Winning is only half of it. Having fun is the other half
    </h3>

<div class="panel-body">
    <p>Write a function that prints half of a string, followed by a new line.</p>

<ul>
<li>Prototype: <code>void puts_half(char *str);</code></li>
<li>The function should print the second half of the string</li>
<li>If the number of characters is odd, the function should print the last <code>n</code> characters of the string, where <code>n = (length_of_the_string - 1) / 2</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half
56789
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      8. Arrays are not pointers
    </h3>

<div class="panel-body">
    <p>Write a function that prints <code>n</code> elements of an array of integers, followed by a new line.</p>

<ul>
<li>Prototype: <code>void print_array(int *a, int n);</code><br></li>
<li>where <code>n</code> is the number of elements of the array to be printed</li>
<li>Numbers must be separated by comma, followed by a space</li>
<li>The numbers should be displayed in the same order as they are stored in the array</li>
<li>You are allowed to use <code>printf</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      9. strcpy
    </h3>

<div class="panel-body">
    <ul>
<li>Prototype: <code>char *_strcpy(char *dest, char *src);</code> </li>
</ul>

<p>Write a function that copies the string pointed to by <code>src</code>, including the terminating null byte (<code>\0</code>), to the buffer pointed to by <code>dest</code>.</p>

<ul>
<li>Return value: the pointer to <code>dest</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strcpy</code>. Run <code>man strcpy</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$
</code></pre>

  </div>
<h3 class="panel-title">
      10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
    </h3>

<div class="panel-body">
    <p>Write a function that convert a string to an integer.</p>

<ul>
<li>Prototype: <code>int _atoi(char *s);</code></li>
<li>The number in the string can be preceded by an infinite number of characters</li>
<li>You need to take into account all the <code>-</code> and <code>+</code> signs before the number</li>
<li>If there are no numbers in the string, the function must return <code>0</code></li>
<li>You are not allowed to use <code>long</code></li>
<li>You are not allowed to declare new variables of “type” array</li>
<li>You are not allowed to hard-code special values</li>
<li>We will use the <code>-fsanitize=signed-integer-overflow</code> gcc flag to compile your code.</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>atoi</code>. Run <code>man atoi</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x05$ cat 100-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$
</code></pre>

  </div>

<h3 class="panel-title">
      11. Don't hate the hacker, hate the code
    </h3>

<div class="panel-body">
    <p>Create a program that generates random valid passwords for the program <a href="https://github.com/holbertonschool/0x04.c" title="101-crackme" target="_blank">101-crackme</a>.</p>

<ul>
<li>You are allowed to use the standard library</li>
<li>You don’t have to pass the <code>betty-style</code> tests (you still need to pass the <code>betty-doc</code> tests)</li>
<li>man <code>srand</code>, <code>rand</code>, <code>time</code></li>
<li><code>gdb</code> and <code>objdump</code> can help</li>
</ul>

<pre><code>julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/0x05$
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
