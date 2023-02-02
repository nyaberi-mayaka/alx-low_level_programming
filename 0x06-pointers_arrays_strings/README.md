<h1 class="gap">0x06. C - More pointers, arrays and strings</h1>

<div class="panel-body">
<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/tkwwPs3MT3JT07FSsmXy-A" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

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

  </div>

<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. strcat
    </h3>

<div class="panel-body">
    <p>Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *_strcat(char *dest, char *src);</code></li>
<li>This function appends the <code>src</code> string to the <code>dest</code> string, overwriting the terminating null byte (<code>\0</code>) at the end of <code>dest</code>, and then adds a terminating null byte</li>
<li>Returns a pointer to the resulting string <code>dest</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strcat</code>. Run <code>man strcat</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x06$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      1. strncat
    </h3>

<div class="panel-body">
    <p>Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *_strncat(char *dest, char *src, int n);</code> </li>
<li>The <code>_strncat</code> function is similar to the <code>_strcat</code> function, except that

<ul>
<li>it will use at most <code>n</code> bytes from <code>src</code>; and</li>
<li><code>src</code> does not need to be null-terminated if it contains <code>n</code> or more bytes</li>
</ul></li>
<li>Return a pointer to the resulting string <code>dest</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strncat</code>. Run <code>man strncat</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x06$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      2. strncpy
    </h3>

<div class="panel-body">
    <p>Write a function that copies a string.</p>

<ul>
<li>Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code><br></li>
<li>Your function should work exactly like <code>strncpy</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strncpy</code>. Run <code>man strncpy</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x06$ cat 2-main.c
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
    int i;

    for (i = 0; i &lt; 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i &lt; 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) &amp;&amp; i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      3. strcmp
    </h3>

<div class="panel-body">
    <p>Write a function that compares two strings.</p>

<ul>
<li>Prototype: <code>int _strcmp(char *s1, char *s2);</code></li>
<li>Your function should work exactly like <code>strcmp</code></li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strcmp</code>. Run <code>man strcmp</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x06$ cat 3-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
    </h3>

<div class="panel-body">
    <p>Write a function that reverses the content of an array of integers.</p>

<ul>
<li>Prototype: <code>void reverse_array(int *a, int n);</code></li>
<li>Where <code>n</code> is the number of elements of the array</li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 4-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i &lt; n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
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
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      5. Always look up
    </h3>

<div class="panel-body">
    <p>Write a function that changes all lowercase letters of a string to uppercase.</p>

<ul>
<li>Prototype: <code>char *string_toupper(char *);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 5-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper 
LOOK UP!
LOOK UP!
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      6. Expect the best. Prepare for the worst. Capitalize on what comes
    </h3>

<div class="panel-body">
    <p>Write a function that capitalizes all words of a string.</p>

<ul>
<li>Prototype: <code>char *cap_string(char *);</code></li>
<li>Separators of words: space, tabulation, new line, <code>,</code>, <code>;</code>, <code>.</code>, <code>!</code>, <code>?</code>, <code>"</code>, <code>(</code>, <code>)</code>, <code>{</code>, and <code>}</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 6-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      7. Mozart composed his music not for the elite, but for everybody
    </h3>

<div class="panel-body">
    <p>Write a function that encodes a string into <a href="/rltoken/9v9KfpvWnL0GoMu5mozbug" title="1337" target="_blank">1337</a>.</p>

<ul>
<li>Letters <code>a</code> and <code>A</code> should be replaced by <code>4</code><br></li>
<li>Letters <code>e</code> and <code>E</code> should be replaced by <code>3</code><br></li>
<li>Letters <code>o</code> and <code>O</code> should be replaced by <code>0</code><br></li>
<li>Letters <code>t</code> and <code>T</code> should be replaced by <code>7</code><br></li>
<li>Letters <code>l</code> and <code>L</code> should be replaced by <code>1</code><br></li>
<li>Prototype: <code>char *leet(char *);</code></li>
<li>You can only use one <code>if</code> in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 7-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      8. rot13
    </h3>

<div class="panel-body">
    <p>Write a function that encodes a string using <a href="/rltoken/YRxmNA7BnP6yZhl09TKX3A" title="rot13" target="_blank">rot13</a>.</p>

<ul>
<li>Prototype: <code>char *rot13(char *);</code><br></li>
<li>You can only use <code>if</code> statement once in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use <code>switch</code></li>
<li>You are not allowed to use any ternary operation</li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 100-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
julien@ubuntu:~/0x06$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      9. Numbers have life; they're not just symbols on paper
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

<pre><code>julien@ubuntu:~/0x06$ cat 101-main.c
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
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x06$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
    </h3>

<div class="panel-body">
    <p><img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/21b4fc5c1b5df84e6ae4fe8807aa359d929e748a.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230202%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20230202T093038Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=9b9cfa6f6d1cc61c2dbb608494fd8b4db05d067dc55d102a90410e36ed0b2737" alt="" loading="lazy" style="">
<br><br>
Add one line to <a href="https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c" title="this code" target="_blank">this code</a>, so that the program prints <code>a[2] = 98</code>, followed by a new line.</p>

<ul>
<li>You are not allowed to use the variable <code>a</code> in your new line of code</li>
<li>You are not allowed to modify the variable <code>p</code></li>
<li>You can only write one statement</li>
<li>You are not allowed to use <code>,</code></li>
<li>You are not allowed to code anything else than the line of expected line of code at the expected line</li>
<li>Your code should be written at line 19, before the <code>;</code></li>
<li>Do not remove anything from the initial code (not even the comments)</li>
<li>and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)</li>
<li>You are allowed to use the standard library</li>
</ul>

  </div>

<h3 class="panel-title">
      11. It is the addition of strangeness to beauty that constitutes the romantic character in art
    </h3>

<div class="panel-body">
    <p>Write a function that adds two numbers.</p>

<ul>
<li>Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r);</code><br></li>
<li>Where <code>n1</code> and <code>n2</code> are the two numbers</li>
<li><code>r</code> is the buffer that the function will use to store the result</li>
<li><code>size_r</code> is the buffer size</li>
<li>The function returns a pointer to the result</li>
<li>You can assume that you will always get positive numbers, or <code>0</code></li>
<li>You can assume that there will be only digits in the strings <code>n1</code> and <code>n2</code></li>
<li><code>n1</code> and <code>n2</code> will never be empty</li>
<li>If the result can not be stored in <code>r</code> the function must return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 103-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
julien@ubuntu:~/0x06$ ./103-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

<h3 class="panel-title">
      12. Noise is a buffer, more effective than cubicles or booth walls
    </h3>

<div class="panel-body">
    <p>Write a function that prints a buffer.</p>

<ul>
<li>Prototype: <code>void print_buffer(char *b, int size);</code><br></li>
<li>The function must print the content of <code>size</code> bytes of the buffer pointed by <code>b</code><br></li>
<li>The output should print 10 bytes per line</li>
<li>Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with <code>0</code></li>
<li>Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space</li>
<li>Each line shows the content of the buffer.  If the byte is a printable character, print the letter, if not, print <code>.</code></li>
<li>Each line ends with a new line <code>\n</code></li>
<li>If <code>size</code> is 0 or less, the output should be a new line only <code>\n</code></li>
<li>You are allowed to use the standard library</li>
<li>The output should look like the following example, and formatted exactly the same way:</li>
</ul>

<pre><code>julien@ubuntu:~/0x06$ cat 104-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
julien@ubuntu:~/0x06$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
julien@ubuntu:~/0x06$ 
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
