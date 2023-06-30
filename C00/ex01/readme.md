## EXERCISE 01

* Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter 'a'.
* Here's how it should be prototyped:

```C
    void	ft_print_alphabet(void);
```


## How a While Loop Works

A while loop is a repetition structure on C. It works by repeating a block of code as long as a condition is true.

```C
    int i = 0; // Initialization    
    
    while (i < 10 ) // The expression inside the parenthesis will be evaluated every time the loop is executed. When "i" reach 10, the loop will stop
    {
		printf("%d", i); // print i
		i++; // increment i by 1 until reach the 10. We always have to have a way to make our condition reach a time when it will be evaluated to false.
    }
```


## How C print Chars

Chars in C are printing taking as reference the **ASCII Table**. There are no letter in reality in this case, what we pass are numbers that C evaluate to
his corresponding character on ASCII Table and print for us. With that said just to work with alphabetical letters we just have to know where its representations starts
on the ascii.

a = 97, b = 98, c = 99 and so on...


## Integer Variables

C has several types to handle integers, the difference between each one is the size of bytes it can handle at a time.

| Type  |  Size   |
|:-----:|:-------:|
| Char  | 1 byte  |
| Short | 2 bytes |
|  Int  | 4 bytes |
| Long  | 8 bytes |

We can represent characters with any of this types, but char is the most appropriate. When we do something like that:

```c
    char c;

    c = 'a'; // The value inside the variable is really 97 the int on the ascii used to represent the char 'a'
```

## References

- [ASCII TABLE](https://www.ascii-code.com/)
- [ft_print_alphabet](https://www.youtube.com/watch?v=cm9SQ8Ffj3I)
- [C data types](https://www.youtube.com/watch?v=jSfjCSBdhRY)
