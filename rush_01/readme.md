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
- [] The program should fail if receives more than 1 parameter.
- [] The program should fail if not receive parameter.


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

	(N + D + 2) - B = i

	N: size of board
	D: distance of board
	B: Value of board 
	i: Initial impossible value each position of board

Fourth Step: complete the coluns and rows
w
	After discard impossible values, complete the coluns and rows with single candidates

Fifth step  	   

	based on edge pairs, discart impossible positions
		
		"A¹¹, A¹²,  A¹³, A¹, A¹², A¹², A¹², A¹², A¹², A¹², A¹²" 

## TIPS

```sh
  echo $?
```

-- This command returns the exit status of the last command.