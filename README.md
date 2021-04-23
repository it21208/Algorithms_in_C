#### Algorithms_in_C
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
1. 1 Most commands of most programs are executed once or at most very few times. If all commands of a program have this capacity we consider that the execution time of the program is constant.
2. logN
3. N
4. NlogN
5. N<sup>2</sup>
6. N<sup>3</sup>
7. 2<sup>N</sup>
