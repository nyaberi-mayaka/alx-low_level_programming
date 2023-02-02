<h1 class="gap">0x0F. C - Function pointers</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/yt8Q9jxzT_gyRAvnNkAgkw" title="Function Pointer in C" target="_blank">Function Pointer in C</a> </li>
<li><a href="/rltoken/wP-yWvo9IqbcQsywMmh_iQ" title="Pointers to functions" target="_blank">Pointers to functions</a> </li>
<li><a href="/rltoken/dAN27S1yyBPeBa8RGfvPNA" title="Function Pointers in C / C++" target="_blank">Function Pointers in C / C++</a> </li>
<li><a href="/rltoken/1vvWpH9Ux8axOLc9jPWcMw" title="why pointers to functions?" target="_blank">why pointers to functions?</a> </li>
<li><a href="/rltoken/G_0lQzs4LAd1e5tKhNMPiw" title="Everything you need to know about pointers in C" target="_blank">Everything you need to know about pointers in C</a> </li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="/rltoken/ITYG4BLMI4_5Unpdwue2tw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are function pointers and how to use them</li>
<li>What does a function pointer exactly hold</li>
<li>Where does a function pointer point to in the virtual memory</li>
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
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>function_pointers.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. What's my name
    </h3>
    <div class="panel-body">
    <p>Write a function that prints a name.</p>

<ul>
<li>Prototype: <code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] &gt;= 'a' &amp;&amp; name[i] &lt;= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

<h3 class="panel-title">
      1. If you spend too much time thinking about a thing, you'll never get it done
    </h3>

<div class="panel-body">
    <p>Write a function that executes a function given as a parameter on each element of an array.</p>

<ul>
<li>Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
<li>where <code>size</code> is the size of the array</li>
<li>and <code>action</code> is a pointer to the function you need to use</li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &amp;print_elem);
    array_iterator(array, 5, &amp;print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$
</code></pre>

  </div>

<h3 class="panel-title">
      2. To hell with circumstances; I create opportunities
    </h3>

<div class="panel-body">
    <p>Write a function that searches for an integer.</p>

<ul>
<li>Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
<li>where <code>size</code> is the number of elements in the array <code>array</code></li>
<li><code>cmp</code> is a pointer to the function to be used to compare values</li>
<li><code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code></li>
<li>If no element matches, return <code>-1</code></li>
<li>If size &lt;= <code>0</code>, return <code>-1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem &gt; 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c
2
1
2
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

<h3 class="panel-title">
      3. A goal is not always meant to be reached, it often serves simply as something to aim at
    </h3>

<div class="panel-body">
    <p>Write a program that performs simple operations.</p>

<ul>
<li>You are allowed to use the standard library</li>
<li>Usage: <code>calc num1 operator num2</code></li>
<li>You can assume <code>num1</code> and <code>num2</code> are integers, so use the <code>atoi</code> function to convert them from the string input to <code>int</code></li>
<li><code>operator</code> is one of the following:

<ul>
<li><code>+</code>: addition</li>
<li><code>-</code>: subtraction</li>
<li><code>*</code>: multiplication</li>
<li><code>/</code>: division</li>
<li><code>%</code>: modulo</li>
</ul></li>
<li>The program prints the result of the operation, followed by a new line</li>
<li>You can assume that the result of all operations can be stored in an <code>int</code></li>
<li>if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code></li>
<li>if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code></li>
<li>if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code></li>
</ul>

<p>This task requires that you create four different files.</p>

<p><strong>3-calc.h</strong></p>

<p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure:</p>

<pre><code>/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code></pre>

<p><strong>3-op_functions.c</strong></p>

<p>This file should contain the 5 following functions (not more):</p>

<ul>
<li><code>op_add</code>: returns the sum of <code>a</code> and <code>b</code>. Prototype: <code>int op_add(int a, int b);</code></li>
<li><code>op_sub</code>: returns the difference of <code>a</code> and <code>b</code>. Prototype: <code>int op_sub(int a, int b);</code></li>
<li><code>op_mul</code>: returns the product of <code>a</code> and <code>b</code>. Prototype: <code>int op_mul(int a, int b);</code></li>
<li><code>op_div</code>: returns the result of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_div(int a, int b);</code></li>
<li><code>op_mod</code>: returns the remainder of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_mod(int a, int b);</code></li>
</ul>

<p><strong>3-get_op_func.c</strong></p>

<p>This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.</p>

<ul>
<li>Prototype: <code>int (*get_op_func(char *s))(int, int);</code></li>
<li>where <code>s</code> is the operator passed as argument to the program</li>
<li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code>get_op_func("+")</code> should return a pointer to the function <code>op_add</code></li>
<li>You are not allowed to use <code>switch</code> statements</li>
<li>You are not allowed to use <code>for</code> or <code>do ... while</code> loops</li>
<li>You are not allowed to use <code>goto</code></li>
<li>You are not allowed to use <code>else</code></li>
<li>You are not allowed to use more than one <code>if</code> statement in your code</li>
<li>You are not allowed to use more than one <code>while</code> loop in your code</li>
<li>If <code>s</code> does not match any of the 5 expected operators (<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>, <code>%</code>), return <code>NULL</code></li>
<li>You are only allowed to declare these two variables in this function:</li>
</ul>

<pre><code>    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
</code></pre>

<p><strong>3-main.c</strong></p>

<p>This file should contain your <code>main</code> function only.</p>

<ul>
<li>You are not allowed to code any other function than <code>main</code> in this file</li>
<li>You are not allowed to directly call <code>op_add</code>, <code>op_sub</code>, <code>op_mul</code>, <code>op_div</code> or <code>op_mod</code> from the <code>main</code> function</li>
<li>You have to use <code>atoi</code> to convert arguments to <code>int</code></li>
<li>You are not allowed to use any kind of loop</li>
<li>You are allowed to use a maximum of 3 <code>if</code> statements</li>
</ul>

<p><strong>Compilation and examples</strong></p>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

<h3 class="panel-title">
      4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
    </h3>

<div class="panel-body">
    <p>Write a program that prints the <a href="/rltoken/5eSu8Ohx0ddeNGmaeDo_zQ" title="opcodes" target="_blank">opcodes</a> of its own main function.</p>

<ul>
<li>Usage: <code>./main number_of_bytes</code></li>
<li>Output format:

<ul>
<li>the opcodes should be printed in hexadecimal, lowercase</li>
<li>each opcode is two char long</li>
<li>listing ends with a new line</li>
<li>see example</li>
</ul></li>
<li>You are allowed to use <code>printf</code> and <code>atoi</code></li>
<li>You have to use <code>atoi</code> to convert the argument to an <code>int</code></li>
<li>If the number of argument is not the correct one, print <code>Error</code>, followed by a new line, and exit with the status <code>1</code></li>
<li>If the number of bytes is negative, print <code>Error</code>, followed by a new line, and exit with the status <code>2</code></li>
<li>You do not have to compile with any flags</li>
</ul>

<p>Note: if you want to translate your opcodes to assembly instructions, you can use, for instance <a href="/rltoken/jUyzrqbp0AUZBdiTKdVExA" title="udcli" target="_blank">udcli</a>.</p>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main
julien@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
julien@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 &lt;main&gt;:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f &lt;main+0x29&gt;
[...]
julien@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp
00000000004005f7 4889e5           mov rbp, rsp
00000000004005fa 4883ec30         sub rsp, 0x30
00000000004005fe 897ddc           mov [rbp-0x24], edi
0000000000400601 488975d0         mov [rbp-0x30], rsi
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

<ul>
<li><em>Note 0: <code>je</code> is equivalent to <code>jz</code></em></li>
<li><em>Note 1: depending on how you write your <code>main</code> function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example</em></li>
</ul>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
