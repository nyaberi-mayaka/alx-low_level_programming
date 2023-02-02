<h1 class="gap">0x01. C - Variables, if, else, while</h1>
<div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/PkAydT3D9u5pN3nPCAlNZQ" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.</em>)</li>
<li><a href="/rltoken/58ThnAAxwJv5s_ceKMMPhw" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
<li><a href="/rltoken/2sXkmDiD7BF7pNIOxMQWFA" title="integers" target="_blank">integers</a> </li>
<li><a href="/rltoken/S-b9MN2iELhSEwCI093Vzw" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
<li><a href="/rltoken/usvxrTB3ko5kGTq48p5fSA" title="If statements in C" target="_blank">If statements in C</a> </li>
<li><a href="/rltoken/CU6mSX1qdZKOhDEgmToUGA" title="if...else statement" target="_blank">if…else statement</a> </li>
<li><a href="/rltoken/O1N-qacaTC-BHXm3Dp3eUA" title="Relational operators" target="_blank">Relational operators</a> </li>
<li><a href="/rltoken/ndmvlsrk_wLgwBs-Yma9ag" title="Logical operators" target="_blank">Logical operators</a> </li>
<li><a href="/rltoken/mwx2_bj3gIFEgCqdwdTp4w" title="while loop in C" target="_blank">while loop in C</a> </li>
<li><a href="/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw" title="While loop" target="_blank">While loop</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ascii</code> (<em>You do not need to learn about <code>scanf</code>, <code>getc</code>, <code>getchar</code>, <code>EOF</code>, <code>EXIT_SUCCESS</code>, <code>time</code>, <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code>, <code>for</code> loops, <code>do...while</code> loops, functions.</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/qBrRkO5QsdzGun5FkaMooQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are the arithmetic operators and how to use them</li>
<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
<li>What the the relational operators and how to use them</li>
<li>What values are considered TRUE and FALSE in C</li>
<li>What are the boolean operators and how to use them</li>
<li>How to use the <code>if</code>, <code>if ... else</code> statements</li>
<li>How to use comments</li>
<li>How to declare variables of types <code>char</code>, <code>int</code>, <code>unsigned int</code></li>
<li>How to assign values to variables</li>
<li>How to print the values of variables of type <code>char</code>, <code>int</code>, <code>unsigned int</code> with <code>printf</code></li>
<li>How to use the <code>while</code> loop</li>
<li>How to use variables with the <code>while</code> loop</li>
<li>How to print variables using <code>printf</code></li>
<li>What is the <code>ASCII</code> character set</li>
<li>What are the purpose of the <code>gcc</code> flags <code>-m32</code> and <code>-m64</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

  </div>

<h2 class="gap">Tasks</h2>
<h3 class="panel-title">
      0. Positive anything is better than negative nothing
    </h3>

<div class="panel-body">
    <p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.</p>

<ul>
<li>You can find the source code <a href="/rltoken/rrqNDWjrCWdARnWFLPExPw" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you will run this program</li>
<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The number, followed by

<ul>
<li>if the number is greater than 0: <code>is positive</code></li>
<li>if the number is 0: <code>is zero</code></li>
<li>if the number is less than 0: <code>is negative</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative
0 is zero
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      1. The last digit
    </h3>

<div class="panel-body">
    <p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.</p>

<ul>
<li>You can find the source code <a href="/rltoken/5HWhPDsq3jq1yCRQFrLl4Q" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you run this program</li>
<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The string <code>Last digit of</code>, followed by</li>
<li><code>n</code>, followed by</li>
<li>the string <code>is</code>, followed by

<ul>
<li>if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code></li>
<li>if the last digit of <code>n</code> is 0: the string <code>and is 0</code></li>
<li>if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
    </h3>

<div class="panel-body">
    <p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      3. alphABET
    </h3>

<div class="panel-body">
    <p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      4. When I was having that alphabet soup, I never thought that it would pay off
    </h3>

<div class="panel-body">
    <p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>

<ul>
<li>Print all the letters except <code>q</code> and <code>e</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      5. Numbers
    </h3>

<div class="panel-body">
    <p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>

<ul>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers
0123456789
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      6. Numberz
    </h3>

<div class="panel-body">
    <p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>

<ul>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> twice in your code</li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz
0123456789
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      7. Smile in the mirror
    </h3>

<div class="panel-body">
    <p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      8. Hexadecimal
    </h3>

<div class="panel-body">
    <p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      9. Patience, persistence and perspiration make an unbeatable combination for success
    </h3>

<div class="panel-body">
    <p>Write a program that prints all possible combinations of single-digit numbers.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>Numbers should be printed in ascending order</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> four times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
    </h3>

<div class="panel-body">
    <p>Write a program that prints all possible different combinations of two digits.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The two digits must be different</li>
<li><code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code></li>
<li>Print only the smallest combination of two digits</li>
<li>Numbers should be printed in ascending order, with two digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> five times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      11. The success combination in business is: Do what you do better... and: do more of what you do...
    </h3>

<div class="panel-body">
    <p>Write a program that prints all possible different combinations of three digits.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The three digits must be different</li>
<li><code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code></li>
<li>Print only the smallest combination of three digits</li>
<li>Numbers should be printed in ascending order, with three digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> six times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$
</code></pre>

  </div>

<h3 class="panel-title">
      12. Software is eating the World
    </h3>

<div class="panel-body">
    <p>Write a program that prints all possible combinations of two two-digit numbers.</p>

<ul>
<li>The numbers should range from <code>0</code> to <code>99</code></li>
<li>The two numbers should be separated by a space</li>
<li>All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code></li>
<li>The combination of numbers must be separated by comma, followed by a space</li>
<li>The combinations of numbers should be printed in ascending order</li>
<li><code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> eight times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
</code></pre>

  </div>

## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka)
