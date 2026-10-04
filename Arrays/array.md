<h3>Arrays means simple it is the collection of same element and also same datatype </h3>
┌────┬────┬────┬────┬────┐ <br>
│ 10 │ 20 │ 30 │ 40 │ 50 │<br>
└────┴────┴────┴────┴────┘<br>
   0    1    2    3    4<br>

<code>Syntax : int marks[array_size];</code>

<h1>2. Putting values into an array</h1>
<code>
#include <stdio.h>
int main()
{
    int marks[5];

    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;

    return 0;
} <br>
In Shorter Ways -> int marks[5] = {10, 20, 30, 40, 50};
</code>
<h1>3. How do we access an element?</h1>
<code>
int marks[5] = {10, 20, 30, 40, 50};<br>
printf("%d", marks[2]);
</code>