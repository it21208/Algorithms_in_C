#### Algorithms in C
##### A bunch of useful pieces of code written in C to address algorithmic issues. 


3 Reasons why we should perform mathematical analysis of algorithms:
1. To compare different algorithms which execute the same job.
2. To predict the algorithms performances in new environments.
3. To set the values for the algorithms parameters.
<hr /> 

##### Retroactive equations:

###### Mathematical formula for the retroactive equation presented for a retroactive program which executes a loop in the input data for the removal of an object.

C<sub>N</sub> = C<sub>N-1</sub> + N  <br />
           &nbsp; &nbsp;   = C<sub>N-2</sub> + (N-1) + N  <br />
           &nbsp; &nbsp;   = C<sub>N-3</sub> + (N-2) + (N-1) + N  <br />
           &nbsp; &nbsp;   . <br />
           &nbsp; &nbsp;   . <br />
           &nbsp; &nbsp;   . <br /> 
           &nbsp; &nbsp;   = C<sub>1</sub> + 2 + ... + (N-2) + (N-1) + N <br />
           &nbsp; &nbsp;   = 1 + 2 + ... + (N-2) + (N-1) + N <br />
          &nbsp; &nbsp;    = N(N+1)/2

<hr /> 
Most of the algorithms contain a primary parameter symbolized with N which affects primarily the execution time.
Algorithms usually have execution times which are analogous to the following equations:
1. **1** Most commands of most programs are executed once or at most very few times. If all commands of a program have this capacity we consider that the execution time of the program is constant.
2. **logN** When the execution time of a program is logarithmic the execution slows down a bit since the N increases. This execution times is presented often in programs that solve a large problem by breaking it into a sequence of smaller problems that way reducing the problem size in each step by a fixed percentage.  
3. **N** When the execution time of a program is linear what applies in general is that in each input element a small part of the complete process is done.
4. **NlogN** This execution time is presented when the algorithms for solving  a problem differentiate the problem into smaller sub-problems, solving it independently and afterward combining the independent solutions. e.g. when N = 1000000 NlogN is 20000000, but when N doubles the execution time NlogN more than doubles (but is not far from the value it would have if it was doubled this is why is called linearithmic).  
5. **N<sup>2</sup>** When the execution time is quadratic, this specific algorithm is practically useful only in situations of reletively small programs. The quadratic execution times are usually presented in algorithms that process all data pairs (potentially in double nested loop) When N is 1000 then the execution time is 1000000 (quadruples).
6. **N<sup>3</sup>** Cubic execution time which processes triads of elements (perhaps in triple nested loop) has a cubic execution time and it is practically useful only in small problem cases. 
7. **2<sup>N</sup>** Few algorithms with exponential execution time might be considered suitable to be used in practical applications, even though such algorithms are characterised as brute-force solution in a variert of problems. When N is 20 the execution time is 1000000, if N boubles the execution time is squared.
<hr /> 

In C language we construct all programs with the following few and basic data types:
1. int, long int, short int
2. float or double
3. char
