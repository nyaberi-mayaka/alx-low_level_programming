<h1 class="gap">0x14. C - Bit manipulation</h1>

<div class="panel-body">
    <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG"></p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://www.tutorialspoint.com/ansi_c/c_bits_manipulation.htm" title="tutorials point/" target="_blank"Tutorials Point/</a> </li>
<li><a href="https://www.youtube.com/watch?v=htX69j1jf5U" title="Youtube" target="_blank">Youtube</a> </li>
<li><a href="https://youtu.be/egUyaWtsQc0" title="Youtube" target="_blank">Youtube</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://fs.blog/feynman-learning-technique/" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information without too much help</li>
<li>How to manipulate bits and use bitwise operators</li>
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
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

  </div>

<h2 class="gap">Tasks</h2>

<h3 class="panel-title">
      0. 0
    </h3>

<div class="panel-body">
    <p>Write a function that converts a binary number to an <code>unsigned int</code>.</p>

<ul>
<li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
<li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
<li>Return: the converted number, or 0 if

<ul>
<li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
<li><code>b</code> is <code>NULL</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

  </div>

<h3 class="panel-title">
      1. 1
    </h3>

<div class="panel-body">
    <p>Write a function that prints the binary representation of a number.</p>

<ul>
<li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
<li>Format: see example</li>
<li>You are not allowed to use arrays</li>
<li>You are not allowed to use <code>malloc</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 &lt;&lt; 10) + 1);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
julien@ubuntu:~/0x14. Binary$ ./b 
0
1
1100010
10000000000
10000000001
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

  </div>

<h3 class="panel-title">
      2. 10
    </h3>

<div class="panel-body">
    <p>Write a function that returns the value of a bit at a given index.</p>

<ul>
<li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
<li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
julien@ubuntu:~/0x14. Binary$ ./c
1
1
0
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

  </div>

<h3 class="panel-title">
      3. 11
    </h3>

<div class="panel-body">
    <p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p>

<ul>
<li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&amp;n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&amp;n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&amp;n, 0);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
julien@ubuntu:~/0x14. Binary$ ./d
1056
1024
99
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

  </div>

<h3 class="panel-title">
      4. 100
    </h3>

<div class="panel-body">
    <p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p>

<ul>
<li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
<li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
<li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&amp;n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&amp;n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&amp;n, 1);
    printf("%lu\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
julien@ubuntu:~/0x14. Binary$ ./e
0
0
96
julien@ubuntu:~/0x14. Binary$ 
</code></pre>

  </div>

<h3 class="panel-title">
      5. 101
    </h3>

<div class="panel-body">
    <p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>

<ul>
<li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
<li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
</ul>

<pre><code>julien@ubuntu:~/0x14. Binary$ cat 5-main.c
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
julien@ubuntu:~/0x14. Binary$ ./f
2
5
3
1
julien@ubuntu:~/0x14. Binary$
</code></pre>

  </div>
