# Task_1

**Get binary array**: Take any text with a 1000 words, convert it into binary (you must be able to convert it back).

**Apply noise to the binary array**: Get a random number m, 0 <= m <= 100. Get array N of size m, where each number is between 0 and len(binary array).

For each value in N, say n, flip the n'th bit in the binary array. This is your noise.

Try to convert the binary back to text and spot the errors.

**Use hamming code to find the applied noise**: Apply hamming codes algorithm to find the positions and the number bits that were changed, i.e find m and N.

Of course, you compare the m and N you calculated with hamming codes with the m and N you actually generated from your code. 

Also, after you found m and N. Flip the bits and convert back to text and check for errors.

