01\01\2026
# chowka-bara

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>5x5 Grid Display Program in C++</title>
</head>
<body>

<h1>5×5 Grid Display Program in C++</h1>

<p>
This C++ program demonstrates how to represent and display a 5×5 grid using
a two-dimensional array. The grid visually displays <strong>X</strong> symbols
based on predefined values in the array.
</p>

<h2>Overview</h2>
<p>
The program uses a 2D integer array where:
</p>
<ul>
    <li><strong>1</strong> represents the character <strong>[X]</strong></li>
    <li><strong>0</strong> represents an empty cell <strong>[ ]</strong></li>
</ul>

<h2>Features</h2>
<ul>
    <li>Uses a 5×5 two-dimensional array</li>
    <li>Demonstrates nested <code>for</code> loops</li>
    <li>Displays formatted output in grid form</li>
    <li>Easy to modify grid values</li>
</ul>

<h2>How the Program Works</h2>
<ol>
    <li>A 5×5 integer array is initialized with values (0s and 1s).</li>
    <li>The program loops through each row and column.</li>
    <li>If the value is <code>1</code>, it prints <strong>[X]</strong>.</li>
    <li>If the value is <code>0</code>, it prints an empty cell <strong>[ ]</strong>.</li>
</ol>

<h2>Sample Output</h2>
<pre><code>
[ ][ ][X][ ][ ]
[ ][ ][ ][ ][ ]
[X][ ][X][ ][X]
[ ][ ][ ][ ][ ]
[ ][ ][X][ ][ ]
</code></pre>

<h2>C++ Source Code</h2>

<pre><code>#include &lt;iostream&gt;
using namespace std;

int main() {
    // 5*5 grid representation: 1 for 'X', 0 for empty
    int grid[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
    };

    // Display the grid
    for(int i = 0; i &lt; 5; i++) {
        for(int j = 0; j &lt; 5; j++) {
            if(grid[i][j] == 1)
                cout &lt;&lt; "[X]";
            else
                cout &lt;&lt; "[ ]";
        }
        cout &lt;&lt; endl;
    }

    return 0;
}
</code></pre>

<h2>Requirements</h2>
<ul>
    <li>C++ Compiler (GCC, MinGW, or any standard compiler)</li>
    <li>Basic understanding of ar
