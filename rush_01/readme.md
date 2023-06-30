# RUSH 01

## CONSTRANTS

### INPUT

  - [ ] Should accept only a string with the format  
    
    ```bash
      "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
    ```
- [x] The first argument should be the table size
- [x] The table size should be a digit from 4 to 9
- [x] The total size of the string must be the table (size * size) bytes.
- [x] The string should have only digits from 1 to 4.
- [x] The program should fail if not receive parameter.


First Step : Decid the size of board

	4x4 = 16 + 15 = 31 
	5x5 = 25 + 24 = 49 
	6x6 = 36 + 35 = 71
	7x7 = 49 + 48 = 97
	8x8 = 64 + 63 = 127
	9x9 = 81 + 80 = 161
	.
	.
	.
	NxN = N² + (N² - 1) = 2N² - 1

Second Step: imput the parameters of game

example: "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

Third Step: Discard all posibilities from "i" to "N"

	(5 + 0 + 2) - 3 = 4

	N: 5
	D: 0
	B: 3 

	4x1000
	5x10000

	podemos eliminar de 2 até 5

Fourth Step: complete the coluns and rows
w
	After discard impossible values, complete the coluns and rows with single candidates

---------------------------------------------------------------------------------------

para os números de cima o intervalo é            de  0 até  N - 1
para os números da direita o intervalo é         de  N até 2N - 1
Para os números de baixo o intervalo é           de 2N até 3N - 1
para os números da esquerda o intervalo é        de 3N até 4N - 1

	    0      1      2  ...(n-1)   
(4N-1)[][]   [][]   [][]   [][]  N
  14  [][]   [][]   [][]   [][]  5
  13  [][]   [][]   [][]   [][]  6
  3N  [][]   [][]   [][]   [][]  (2N - 1)
	 (3N-1)  10      9     2N 


-- This command returns the exit status of the last command.

<!-- "2 4 2 1 1 2 4 2 2 1 3 3 3 3 1 2" -->