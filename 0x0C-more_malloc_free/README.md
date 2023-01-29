<h1 class="gap">0x0C. C - More malloc, free</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/uKhvfzpF3v8Be10NCZlQtA" title="Do I cast the result of malloc?" target="_blank">Do I cast the result of malloc?</a> </li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>exit (3)</code></li>
<li><code>calloc</code></li>
<li><code>realloc</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="/rltoken/XQ_E28qyePVdJn1Irb_Dfg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>
<ul>
<li>How to use the <code>exit</code> function</li>
<li>What are the functions <code>calloc</code> and <code>realloc</code> from the standard library and how to use them</li>
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
</ul>
<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. Trust no one
    </h3>
    <div class="panel-body">
    <p>Write a function that allocates memory using <code>malloc</code>.</p>

<ul>
<li>Prototype: <code>void *malloc_checked(unsigned int b);</code></li>
<li>Returns a pointer to the allocated memory</li>
<li>if <code>malloc</code> fails, the <code>malloc_checked</code> function should cause normal process termination with a status value of <code>98</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;limits.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
julien@ubuntu:~/0x0b. more malloc, free$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
julien@ubuntu:~/0x0b. more malloc, free$ echo $?
98
julien@ubuntu:~/0x0b. more malloc, free$ 
</code></pre>

  </div>

<h3 class="panel-title">
      1. string_nconcat
    </h3>
    <div class="panel-body">
    <p>Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *string_nconcat(char *s1, char *s2, unsigned int n);</code></li>
<li>The returned pointer shall point to a newly allocated space in memory, which contains <code>s1</code>, followed by the first <code>n</code> bytes of <code>s2</code>, and null terminated</li>
<li>If the function fails, it should return <code>NULL</code></li>
<li>If <code>n</code> is greater or equal to the length of <code>s2</code> then use the entire string <code>s2</code></li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
</ul>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
julien@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
Best School
julien@ubuntu:~/0x0b. more malloc, free$ 
</code></pre>

  </div>

<h3 class="panel-title">
      2. _calloc
    </h3>

<div class="panel-body">
    <p>Write a function that allocates memory for an array, using <code>malloc</code>.</p>

<ul>
<li>Prototype: <code>void *_calloc(unsigned int nmemb, unsigned int size);</code></li>
<li>The <code>_calloc</code> function allocates memory for an array of <code>nmemb</code> elements of <code>size</code> bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If <code>nmemb</code> or <code>size</code> is <code>0</code>, then <code>_calloc</code> returns <code>NULL</code></li>
<li>If <code>malloc</code> fails, then <code>_calloc</code> returns <code>NULL</code></li>
</ul>

<p>FYI: The standard library provides a different function: <code>calloc</code>. Run <code>man calloc</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
julien@ubuntu:~/0x0b. more malloc, free$ ./2-calloc
0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
julien@ubuntu:~/0x0b. more malloc, free$ 
</code></pre>

  </div>

<h3 class="panel-title">
      3. array_range
    </h3>

<div class="panel-body">
    <p>Write a function that creates an array of integers.</p>

<ul>
<li>Prototype: <code>int *array_range(int min, int max);</code></li>
<li>The array created should contain all the values from <code>min</code> (included) to <code>max</code> (included), ordered from <code>min</code> to <code>max</code></li>
<li>Return: the pointer to the newly created array</li>
<li>If <code>min</code> &gt; <code>max</code>, return <code>NULL</code></li>
<li>If <code>malloc</code> fails, return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 3-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range
julien@ubuntu:~/0x0b. more malloc, free$ ./3-array_range
0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a
julien@ubuntu:~/0x0b. more malloc, free$ 
</code></pre>

  </div>

<h3 class="panel-title">
      4. _realloc
    </h3>

<div class="panel-body">
    <p>Write a function that reallocates a memory block using <code>malloc</code> and <code>free</code></p>

<ul>
<li>Prototype: <code>void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);</code></li>
<li>where <code>ptr</code> is a pointer to the memory previously allocated with a call to <code>malloc</code>: <code>malloc(old_size)</code></li>
<li><code>old_size</code> is the size, in bytes, of the allocated space for <code>ptr</code></li>
<li>and <code>new_size</code> is the new size, in bytes of the new memory block</li>
<li>The contents will be copied to the newly allocated space, in the range from the start of <code>ptr</code> up to the minimum of the old and new sizes</li>
<li>If <code>new_size</code> &gt; <code>old_size</code>, the “added” memory should not be initialized</li>
<li>If <code>new_size</code> == <code>old_size</code> do not do anything and return <code>ptr</code></li>
<li>If <code>ptr</code> is <code>NULL</code>, then the call is equivalent to <code>malloc(new_size)</code>, for all values of <code>old_size</code> and <code>new_size</code></li>
<li>If <code>new_size</code> is equal to zero, and <code>ptr</code> is not <code>NULL</code>, then the call is equivalent to <code>free(ptr)</code>. Return <code>NULL</code></li>
<li>Don’t forget to free <code>ptr</code> when it makes sense</li>
</ul>

<p>FYI: The standard library provides a different function: <code>realloc</code>. Run <code>man realloc</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ cat 100-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i &lt; size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i &lt; 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-realloc.c -o 100-realloc
julien@ubuntu:~/0x0b. more malloc, free$ ./100-realloc
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
0x62 0x62 0x62 0x62 0x62 0x62 0x62 0x62
julien@ubuntu:~/0x0b. more malloc, free$ 
</code></pre>

  </div>

<h3 class="panel-title">
      5. We must accept finite disappointment, but never lose infinite hope
    </h3>

<div class="panel-body">
    <p>Write a program that multiplies two positive numbers.</p>

<ul>
<li>Usage: <code>mul num1 num2</code></li>
<li><code>num1</code> and <code>num2</code> will be passed in base 10</li>
<li>Print the result, followed by a new line</li>
<li>If the number of arguments is incorrect, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li><code>num1</code> and <code>num2</code> should only be composed of digits. If not, print <code>Error</code>, followed by a new line, and exit with a status of <code>98</code></li>
<li>You are allowed to use more than 5 functions in your file</li>
</ul>

<p>You can use <code>bc</code> (<code>man bc</code>) to check your results.</p>

<pre><code>julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c _putchar.c -o 101-mul
julien@ubuntu:~/0x0b. more malloc, free$ ./101-mul 10 98
980
julien@ubuntu:~/0x0b. more malloc, free$ ./101-mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639235755891879970464524226159074760914989935413350556875770807019893069201247121855122836389417022552166316010013074258781583143870461182707893577849408672040555089482160343085482612348145322689883025225988799452329290281169927532160590651993511788518550547570284574715925006962738262888617840435389140329668772644708
6741363923575589187997046452422615907476091498993541335055687577080701989306920124712185512283638941702255216631601001307425878158314387046118270789357784940867204055508948216034308548261234814532268988302522598879945232929028116992753216059081057377926651337612618248332113256902485974371969385156015068813868274000683912187818601667058605418678284322237297213673482412392922068159291496274311170208689056585352782844484721140846367741649962638649229509281867896067208474178402156294978940712959518351846413859141792380853313812015295333546716634344284086426775480775747808150030732119704867805688704303461042373101473485092019906795014369069932
julien@ubuntu:~/0x0b. more malloc, free$
</code></pre>

  </div>
