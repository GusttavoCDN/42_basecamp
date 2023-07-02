## Exercise 01: cat

- Create a "program" called `ft_cat` which does the same thing as the system's `cat` command-line.
- You don't have to handle options.
- The submission directory should have a `Makefile` with the following rules: `all`, `clean`, `fclean`
- You may use the variable `errno` (check `man errno`)
- You can only do this exercise by declaring a fixed-sized array. This array will have a size limited to a little less than `30kb`. In order to test that size-limit, use the `limit` command-line in your `Shell`

    ```
        $> limit stacksize 32
        $> limit stacksize
        stacksize 32 kbytes
        $>
    ```

- **Allowed functions** : close, open, read, write, strerror, basename

- Read the fucking manual


### "LIMIT" OR "ULIMIT" COMMAND

This commands are used to show the current resource limits for the current shell and its child processes.

```shell
    $> ulimit -a
    $> limit
```


### CAT

The cat command concatenates files and show his content on the standard output.

If we call cat without arguments, the program will read from the standard input and imediately show it on the standard output.

```shell
    $> cat
    Hello World
    # shows Hello World
```

If we call if one or more files, the program will concatenate them and show them on the standard output.

```shell
    $> cat file1.txt file2.txt
    # shows the content for both files concatenated.
```

# Refencecs

[Bits Conversion Table](https://www.dataunitconverter.com/tables/byte/1/1/10)