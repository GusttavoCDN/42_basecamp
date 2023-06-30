# Exercise 00
    
- Write a function that displays characters passed as parameter.
- This is how it should be prototyped:

```c
    void ft_putchar(char c);
```

- Allowed function: write

# Write()

The function write takes 3 parameters like arguments.

- First: **File Descriptor**
    - A file descriptor is basically a number that represents some place in the system where some action will be performed. On linux system everything
    is considered a file. There is 3 standard file descriptors to be used.
    ```
        - 0 = Standard Input => Represents the keyboard.
        - 1 = Standard Output.
        - 2 = Standard Error.
    ```
  
- Second: **Address to a buffer**
    - The address in memory that points to a string. Note the syntax below:

    ```c
        write(1, "Hello World\n", 12);
    ```
  When we passed the second parameter like this the compiler will find a place in memory to put it and use it address to write the string. 
  We can think that all string is also a address in memory.


- Third: **The length**: Number of bytes to print on fd.

## References:

- [The Write system call function](https://www.youtube.com/watch?v=i_qs1w6DBHo)
- [System Calls](https://www.youtube.com/watch?v=PIb2aShU_H4&t=0s)
- [What are functions](https://www.youtube.com/watch?v=cyhyasYlN0E)
