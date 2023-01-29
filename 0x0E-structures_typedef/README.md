<h1 class="gap">0x0E. C - Structures, typedef</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a href="/rltoken/giS4eNQT2BQ9RLK0PMhgJQ" title="0x0d. Structures.pdf" target="_blank">0x0d. Structures.pdf</a></li>
<li><a href="/rltoken/MinJEDOHpeZs31qaXU8v1w" title="struct (C programming language)" target="_blank">struct (C programming language)</a> </li>
<li><a href="/rltoken/GiGFlaP5uUxeWLwfzdH15w" title="Documentation: structures" target="_blank">Documentation: structures</a> </li>
<li><a href="/rltoken/TGQ3RopVP7CjUTzF-XDXUw" title="0x0d. Typedef and structures.pdf" target="_blank">0x0d. Typedef and structures.pdf</a></li>
<li><a href="/rltoken/aqqM2t7PLG5cyHaKwm5nBg" title="typedef" target="_blank">typedef</a> </li>
<li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em></li>
<li><a href="/rltoken/emb4ohNT7XKi8Peep5lyeA" title="The Lost Art of C Structure Packing" target="_blank">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="/rltoken/qkcS8PT80wmgcNlCEdBzrQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are structures, when, why and how to use them</li>
<li>How to use <code>typedef</code></li>
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
<li>The only C standard library functions allowed are <code>printf</code>, <code>malloc</code>, <code>free</code> and <code>exit</code>. </li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. Poppy
    </h3>
    <div class="panel-body">
<p>Define a new type <code>struct dog</code> with the following elements:</p>

<ul>
<li><code>name</code>, type = <code>char *</code></li>
<li><code>age</code>, type = <code>float</code></li>
<li><code>owner</code>, type = <code>char *</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>

<h3 class="panel-title">
      1. A dog is the only thing on earth that loves you more than you love yourself
    </h3>
    <div class="panel-body">
    <p>Write a function that initialize a variable of type <code>struct dog</code></p>

<ul>
<li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&amp;my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>
  <h3 class="panel-title">
      2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
    </h3>
    <div class="panel-body">
<p>Write a function that prints a <code>struct dog</code></p>

<ul>
<li>Prototype: <code>void print_dog(struct dog *d);</code></li>
<li>Format: see example bellow</li>
<li>You are allowed to use the standard library</li>
<li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
<li>If <code>d</code> is <code>NULL</code> print nothing.</li>
</ul>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&amp;my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>

<h3 class="panel-title">
      3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
    </h3>

<div class="panel-body">
<p>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.</p>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>

<h3 class="panel-title">
      4. A door is what a dog is perpetually on the wrong side of
    </h3>

<div class="panel-body">
<p>Write a function that creates a new dog.</p>

<ul>
<li>Prototype: <code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
<li>You have to store a copy of <code>name</code> and <code>owner</code></li>
<li>Return <code>NULL</code> if the function fails</li>
</ul>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog-&gt;name, my_dog-&gt;age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>

<h3 class="panel-title">
      5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
    </h3>

<div class="panel-body">
<p>Write a function that frees dogs.</p>

<ul>
<li>Prototype: <code>void free_dog(dog_t *d);</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include &lt;stdio.h&gt;
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog-&gt;name, my_dog-&gt;age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
</code></pre>

  </div>
