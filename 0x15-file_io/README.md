<h1 class="gap">0x15. C - File I/O</h1>

<div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://en.wikipedia.org/wiki/File_descriptor" title="File descriptors" target="_blank">File descriptors</a> </li>
<li><a href="https://www.youtube.com/watch?v=e-srF6c3TJ8" title="C Programming in Linux Tutorial #024 - open() read() write() Functions" target="_blank">C Programming in Linux Tutorial #024 - open() read() write() Functions</a> </li>
<li><a href="https://pubs.opengroup.org/onlinepubs/9699919799/functions/fdopen.html#tag_16_126" title="fdopen() man page" target="_blank">fdopen() man page</a> </li>
<li><a href="https://pubs.opengroup.org/onlinepubs/9699919799/functions/fopen.html#tag_16_155" title="fopen() man page" target="_blank">fopen() man page</a> </li>
<li><a href="https://pubs.opengroup.org/onlinepubs/9699919799/functions/open.html#tag_16_357" title="open() man page" target="_blank">open() man page</a> </li>

</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>open</code></li>
<li><code>close</code></li>
<li><code>read</code></li>
<li><code>write</code></li>
<li><code>dprintf</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/kQg2-u-cAYxh6oJz2TWHWw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Look for the right source of information online</li>
<li>How to create, open, close, read and write files</li>
<li>What are file descriptors</li>
<li>What are the 3 standard file descriptors, what are their purpose and what are their <code>POSIX</code> names</li>
<li>How to use the I/O system calls <code>open</code>, <code>close</code>, <code>read</code> and <code>write</code></li>
<li>What are and how to use the flags <code>O_RDONLY</code>, <code>O_WRONLY</code>, <code>O_RDWR</code></li>
<li>What are file permissions, and how to set them when creating a file with the <code>open</code> system call</li>
<li>What is a system call</li>
<li>What is the difference between a function and a system call</li>
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
<li>Allowed syscalls: <code>read</code>, <code>write</code>, <code>open</code>, <code>close</code></li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Tip: always prefer using symbolic constants (<code>POSIX</code>) vs numbers when it makes sense. For instance <code>read(STDIN_FILENO, ...</code> vs <code>read(0, ...</code></li>
</ul>

  </div>

<h2 class="gap">Tasks</h2>

<h3 class="panel-title">
      0. Tread lightly, she is near
    </h3>

<div class="panel-body">
    <p>Write a function that reads a text file and prints it to the <code>POSIX</code> standard output.</p>

<ul>
<li>Prototype: <code>ssize_t read_textfile(const char *filename, size_t letters);</code></li>
<li>where letters is the number of letters it should read and print</li>
<li>returns the actual number of letters it could read and print</li>
<li>if the file can not be opened or read, return <code>0</code></li>
<li>if <code>filename</code> is <code>NULL</code> return <code>0</code></li>
<li>if <code>write</code> fails or does not write the expected amount of bytes, return <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/0x15. File descriptors and permissions$ ./a Requiescat
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/0x15. File descriptors and permissions$
</code></pre>

  </div>

<h3 class="panel-title">
      1. Under the snow
    </h3>

<div class="panel-body">
    <p>Create a function that creates a file.</p>

<ul>
<li>Prototype: <code>int create_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file to create and <code>text_content</code> is a <code>NULL</code> terminated string to write to the file</li>
<li>Returns: <code>1</code> on success, <code>-1</code> on failure (file can not be created, file can not be written, <code>write</code> “fails”, etc…)</li>
<li>The created file must have those permissions: <code>rw-------</code>. If the file already exists, do not change the permissions.</li>
<li>if the file already exists, truncate it</li>
<li>if <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>if <code>text_content</code> is <code>NULL</code> create an empty file</li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-&gt; %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
julien@ubuntu:~/0x15. File descriptors and permissions$ ./b hello world
-&gt; 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello
worldjulien@ubuntu:~/0x15. File descriptors and permis$
</code></pre>

  </div>

<h3 class="panel-title">
      2. Speak gently, she can hear
    </h3>

<div class="panel-body">
    <p>Write a function that appends text at the end of a file.</p>

<ul>
<li>Prototype: <code>int append_text_to_file(const char *filename, char *text_content);</code></li>
<li>where <code>filename</code> is the name of the file and <code>text_content</code> is the <code>NULL</code> terminated string to add at the end of the file</li>
<li>Return: <code>1</code> on success and <code>-1</code> on failure</li>
<li>Do not create the file if it does not exist</li>
<li>If <code>filename</code> is <code>NULL</code> return <code>-1</code></li>
<li>If <code>text_content</code> is <code>NULL</code>, do not add anything to the file. Return <code>1</code> if the file exists and <code>-1</code> if the file does not exist or if you do not have the required permissions to write the file</li>
</ul>

<pre><code>julien@ubuntu:~/0x15. File descriptors and permissions$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-&gt; %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ echo -n Hello &gt; hello
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
julien@ubuntu:~/0x15. File descriptors and permissions$ ./c hello " World!
&gt; "
-&gt; 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello
Hello World!
julien@ubuntu:~/0x15. File descriptors and permissions$
</code></pre>

  </div>
