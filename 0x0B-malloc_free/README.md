<h1 class="gap">0x0B. C - malloc, free</h1>

<h2 class="gap">Tasks</h2>
<div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Float like a butterfly, sting like a bee
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a function that creates an array of chars, and initializes it with a specific char.</p>

<ul>
<li>Prototype: <code>char *create_array(unsigned int size, char c);</code></li>
<li>Returns <code>NULL</code> if size = <code>0</code></li>
<li>Returns a pointer to the array, or <code>NULL</code> if it fails</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

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
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

  </div>

<div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. The woman who has no imagination has no wings
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>

<ul>
<li>Prototype: <code>char *_strdup(char *str);</code></li>
<li>The <code>_strdup()</code> function returns a pointer to a new string which is a duplicate of the string <code>str</code>.  Memory for the new string is obtained with <code>malloc</code>, and can be freed with <code>free</code>.</li>
<li>Returns <code>NULL</code> if str = NULL</li>
<li>On success, the <code>_strdup</code> function returns a pointer to the duplicated string.  It returns <code>NULL</code> if insufficient memory was available</li>
</ul>

<p>FYI: The standard library provides a similar function: <code>strdup</code>. Run <code>man strdup</code> to learn more.</p>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s
ALX SE
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

  </div>

<div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. He who is not courageous enough to take risks will accomplish nothing in life
    </h3>
  </div>
  <div class="panel-body">
     <p>Write a function that concatenates two strings.</p>

<ul>
<li>Prototype: <code>char *str_concat(char *s1, char *s2);</code></li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of <code>s1</code>, followed by the contents of <code>s2</code>, and null terminated</li>
<li>if <code>NULL</code> is passed, treat it as an empty string</li>
<li>The function should return <code>NULL</code> on failure</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ ./c | cat -e
Betty Holberton$
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ 
</code></pre>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. If you even dream of beating me you'd better wake up and apologize
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>

<ul>
<li>Prototype: <code>int **alloc_grid(int width, int height);</code></li>
<li>Each element of the grid should be initialized to <code>0</code></li>
<li>The function should return <code>NULL</code> on failure</li>
<li>If <code>width</code> or <code>height</code> is <code>0</code> or negative, return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g
julien@ubuntu:~/0x0a. malloc, free$ ./g
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

0 0 0 98 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 402 0
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. It's not bragging if you can back it up
    </h3>
  </div>
  <div class="panel-body">
    <p>Write a function that frees a 2 dimensional grid previously created by your <code>alloc_grid</code> function.</p>

<ul>
<li>Prototype: <code>void free_grid(int **grid, int height);</code></li>
<li>Note that we will compile with your <code>alloc_grid.c</code> file. Make sure it compiles.</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h &lt; height)
    {
        w = 0;
        while (w &lt; width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
julien@ubuntu:~/0x0a. malloc, free$ valgrind ./f
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$ 
</code></pre>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
    </h3>
  </div>

<div class="panel-body">
    <p>Write a function that concatenates all the arguments of your program.</p>

<ul>
<li>Prototype: <code>char *argstostr(int ac, char **av);</code></li>
<li>Returns <code>NULL</code> if <code>ac == 0</code> or <code>av == NULL</code></li>
<li>Returns a pointer to a new string, or <code>NULL</code> if it fails</li>
<li>Each argument should be followed by a <code>\n</code> in the new string</li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 100-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

  </div>

<div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      6. I will show you how great I am
    </h3>
  </div>

<div class="panel-body">
    <p>Write a function that splits a string into words.</p>

<ul>
<li>Prototype: <code>char **strtow(char *str);</code></li>
<li>The function returns a pointer to an array of strings (words)</li>
<li>Each element of this array should contain a single word, null-terminated</li>
<li>The last element of the returned array should be <code>NULL</code></li>
<li>Words are separated by spaces</li>
<li>Returns <code>NULL</code> if <code>str == NULL</code> or <code>str == ""</code></li>
<li>If your function fails, it should return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0a. malloc, free$ cat 101-main.c
#include "main.h"
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
julien@ubuntu:~/0x0a. malloc, free$ ./strtow | cat -e
ALX$
School$
#cisfun$
julien@ubuntu:~/0x0a. malloc, free$
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
