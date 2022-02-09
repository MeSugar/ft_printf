## About

The goal of this project is to recode printf(). The output can differ depending on conversions and flags used

The prototype of is:
```C
int ft_printf(const char *, ...);
```
### Conversions
```
%c Prints a single char.
%s Prints a string (as defined by the common C convention).
%p void * pointer argument has to be printed in hexadecimal format.
%d Prints a decimal (base 10) number.
%i Prints an integer in base 10.
%u Prints an unsigned decimal (base 10) number.
%x Prints a number in hexadecimal (base 16) lowercase format.
%X Prints a number in hexadecimal (base 16) uppercase format.
%% Prints a percent sign.
```

### Flags
```
0               The value should be zero padded.
-               The converted value is to be left adjusted.
Precision('.')  Gives the minimum number of digits or chars to apear depending on given conversions.
                Can be used with '*' to specify that the precision is given in the next argument
Field width     An optional digit string (with nonzero first digit) specifying a minimum field width
```
