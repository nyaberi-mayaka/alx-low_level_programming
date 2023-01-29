<h1 class="gap">0x00. C - Hello, World</h1>
<div class="panel panel-default">
    <div class="panel-heading">
      <h3 class="panel-title">Concepts</h3>
    </div>

<div class="panel panel-default" id="project-description">
  <div class="panel-body">
<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/P01aLj9BDfDUOv-y9x82Yw" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
<li><a href="/rltoken/YWFrRob_-Yo-_NQikMLI-g" title="Dennis Ritchie" target="_blank">Dennis Ritchie</a> </li>
<li><a href="/rltoken/W4oygfMgAp5Hyc7o6QuSYQ" title="&quot;C&quot; Programming Language: Brian Kernighan" target="_blank">“C” Programming Language: Brian Kernighan</a> </li>
<li><a href="/rltoken/WYdE1novaWa0yt5fzGvLBw" title="Why C Programming Is Awesome" target="_blank">Why C Programming Is Awesome</a> </li>
<li><a href="/rltoken/aE_pZLbexuLroHA0FmjLbw" title="Learning to program in C part 1" target="_blank">Learning to program in C part 1</a> </li>
<li><a href="/rltoken/3a5y1N-0FlTaPbKRxlRLlQ" title="Learning to program in C part 2" target="_blank">Learning to program in C part 2</a> </li>
<li><a href="/rltoken/idYJyVfQRZ9e5aljiT5UKg" title="Understanding C program Compilation Process" target="_blank">Understanding C program Compilation Process</a> </li>
<li><a href="/rltoken/Iu2Vb1CbDPMHuDJG1iILKA" title="Betty Coding Style" target="_blank">Betty Coding Style</a> </li>
<li><a href="/rltoken/zwv5CHLybXN6KFmsjbu_tg" title="Hash-bang under the hood" target="_blank">Hash-bang under the hood</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
<li><a href="/rltoken/JrokM8Pk6bd9wPqQvEfSAA" title="Linus Torvalds on C vs. C++" target="_blank">Linus Torvalds on C vs. C++</a> (<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>gcc</code></li>
<li><code>printf (3)</code></li>
<li><code>puts</code></li>
<li><code>putchar</code></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/VGWjGaWZbgcLYTwfLEBmmQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Why C programming is awesome </li>
<li>Who invented C</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
<li>What happens when you type <code>gcc main.c</code></li>
<li>What is an entry point</li>
<li>What is <code>main</code></li>
<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code></li>
<li>How to get the size of a specific type using the unary operator <code>sizeof</code></li>
<li>How to compile using <code>gcc</code></li>
<li>What is the default program name when compiling with <code>gcc</code></li>
<li>What is the official C coding style and how to check your code with <code>betty-style</code></li>
<li>How to find the right header to include in your source code when using a standard library function</li>
<li>How does the <code>main</code> function influence the return value of the program</li>
</ul>

<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file at the root of the repo, containing a description of the repository</li>
<li>A <code>README.md</code> file, at the root of the folder of <em>this</em> project, containing a description of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

<h3>Shell Scripts</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your scripts should be exactly two lines long (<code>$ wc -l file</code> should print 2)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
</ul>

<h2>More Info</h2>

<h3>Betty linter</h3>

<p>To run the Betty linter just with command <code>betty &lt;filename&gt;</code>:</p>

<ul>
<li>Go to the <a href="/rltoken/wQ4sMfsWfxvyfN67Sc11zA" title="Betty" target="_blank">Betty</a> repository</li>
<li>Clone the <a href="/rltoken/wQ4sMfsWfxvyfN67Sc11zA" title="repo" target="_blank">repo</a> to your local machine</li>
<li><code>cd</code> into the Betty directory</li>
<li>Install the linter with <code>sudo ./install.sh</code></li>
<li><code>emacs</code> or <code>vi</code> a new file called <code>betty</code>, and copy the script below:</li>
</ul>

<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
</code></pre>

<ul>
<li>Once saved, exit file and change permissions to apply to all users with <code>chmod a+x betty</code></li>
<li>Move the <code>betty</code> file into <code>/bin/</code> directory or somewhere else in your <code>$PATH</code> with <code>sudo mv betty /bin/</code></li>
</ul>

<p>You can now type <code>betty &lt;filename&gt;</code> to run the Betty linter!</p>

  </div>
</div>

<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. Preprocessor
    </h3>

<div class="panel-body">
    <p>Write a script that runs a C file through the preprocessor and save the result into another file.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output should be saved in the file <code>c</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      1. Compiler
    </h3>

<div class="panel-body">
    <p>Write a script that compiles a C file but does not link.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@&gt;^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 
</code></pre>

  </div>

<h3 class="panel-title">
      2. Assembler
    </h3>

<div class="panel-body">
    <p>Write a script that generates the assembly code of a C code and save it in an output file.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      3. Name
    </h3>

<div class="panel-body">
    <p>Write a script that compiles a C file and creates an executable named <code>cisfun</code>.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>
  <h3 class="panel-title">
      4. Hello, puts
    </h3>

<div class="panel-body">
    <p>Write a C program that prints exactly <code>"Programming is like building a multilingual puzzle</code>, followed by a new line.</p>

<ul>
<li>Use the function <code>puts</code></li>
<li>You are not allowed to use <code>printf</code></li>
<li>Your program should end with the value <code>0</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c &amp;&amp; ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      5. Hello, printf
    </h3>

<div class="panel-body">
    <p>Write a C program that prints exactly <code>with proper grammar, but the outcome is a piece of art,</code>, followed by a new line.</p>

<ul>
<li>Use the function <code>printf</code></li>
<li>You are not allowed to use the function <code>puts</code></li>
<li>Your program should return <code>0</code></li>
<li>Your program should compile without warning when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      6. Size is not grandeur, and territory does not make a nation
    </h3>

<div class="panel-body">
    <p>Write a C program that prints the size of various types on the computer it is compiled and run on.</p>

<ul>
<li>You should produce the exact same output as in the example</li>
<li>Warnings are allowed</li>
<li>Your program should return <code>0</code></li>
<li>You might have to install the package  <code>libc6-dev-i386</code> on your Linux to test the <code>-m32</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2&gt; /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2&gt; /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      7. Intel
    </h3>

<div class="panel-body">
    <p>Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code>.</li>
<li>The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>

<h3 class="panel-title">
      8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
    </h3>

<div class="panel-body">
    <p>Write a C program that prints exactly <code>and that piece of art is useful" - Dora Korpar, 2015-10-19</code>, followed by a new line, to the standard error.</p>

<ul>
<li>You are not allowed to use any functions listed in the NAME section of the man (3) <code>printf</code> or man (3) <code>puts</code></li>
<li>Your program should return 1</li>
<li>Your program should compile without any warnings when using the <code>-Wall</code> <code>gcc</code> option</li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2&gt; q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf &lt; 101-quote.c
julien@ubuntu:~/c/0x00$ grep put &lt; 101-quote.c
julien@ubuntu:~/c/0x00$
</code></pre>

  </div>
