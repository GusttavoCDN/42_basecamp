# Exercise 00: display_file

- Create a `program` called `ft_display_file` that displays, on the standard output, only the content of the file given as argument.
- The submission directory should have a `Makefile` with the following rules: `all`, `clean`, `fclean`. The binary will be called `ft_display_file`.
- The `malloc` function is forbidden. You can only do this exercise by declaring fixed-sized array.
- All files given as arguments will be valid.
- Error messages have to be displayed on their reserved output.

  ```
    $> ./ft_display_file
    File name missing.
    
    $> ./ft_display_file Makefile
    *contenu du Makefile*
    
    $> ./ft_display_file Makefile display_file.c
    Too many arguments.
    $>
  ```

- Allowed functions: close, open, read, write


## Function Open()

  ```c
    // Prototype
    int open(const char *pathname, int flags);
  ```

  The open function is used to open a file. This function returns a file descriptor to the file. The fd can be passed to other function to perform  
  some actions on that file.
  
  This function receives 2 arguments:

  - First: The pathname of the file to open.
  - Second: A Flag that indicates the actions that can be performed on that file.

## Function Close()

  ```c
    // Prototype
    int close(int fd);
  ```

  The close function is used to close a file. This function closes the file descriptor. It just receives the file descriptor to close.

## Function Read()

  ```c
    // Prototype
    ssize_t read(int fd, void *buf, size_t count);
  ```

The read functions basically can read a fd until its end. It receives 3 arguments:

 - First: The file descriptor to read.
 - Second: The buffer where the read data will be stored.
 - Third: The number of bytes to read.

The read function returns 0 when no data was read.

```c
  // Simple example that shows how to read a file 100 bytes at a time.
  char buffer[100];

  int fd = open("test.txt", O_RDONLY);
  while (read(fd, buffer, 100) > 0) 
    printf("%s", buffer);
  close(fd);
```
