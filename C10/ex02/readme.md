## Exercise 02: tail

- Create a program called ft_tail which does the same thing as the system command
tail.

- The only option you have to handle is -c, but you don’t need to handle ’+’ or ’-’
signs.

- all the test will be done with the -c option.

- The submission directory should have a `Makefile` with the following rules: `all`, `clean`, `fclean`

- You may use the variable `errno`

- **Allowed functions** : close, open, read, write, malloc, free, strerror,
basename


### Cases

1. `tail -c 10 file1 file2`
```
==> Makefile <==
rm $(BIN)

==> README.md <==
e `errno`
```
2. `tail -c 10 file1 -c 10 file2`
```
==> Makefile <==
rm $(BIN)
tail: -c: No such file or directory
tail: 10: No such file or directory

==> README.md <==
e `errno`
```
3. `tail file1 file2`
```
==> file1 <==
* file1 content *

==> file2 <==
* file2 content *
```
4. `tail file1 file2_noexist`
```
==> file1 <==
* file1 content *
tail: file2_noexist: No such file or directory
```
5. `tail -c`
```
tail: option requires an argument -- c
usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]
```



# Notes

 - The **tail** command has memory leaks in the original implementation.