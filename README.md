# This project has been created as part of the 42 curriculum by lucferre

## Description

This projects intends to teach the fundamentals of basics functions and libraries, and build an usable library for myself as well.

Functions added to the library (descriptions from "man"):

* __ft_isalpha(c)__ - checks for an alphabetic character; in the standard "C" locale, it  is  equivalent  to (isupper(c)  ||  islower(c)).
  
* __ft_isdigit(c)__ - checks for a digit (0 through 9).

* __ft_isalnum(c)__ - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* __ft_isascii(c)__ - checks whether _c_ is a 7-bit unsigned char value that fits  into  the  ASCII  character set.

* __ft_isprint(c)__ - checks for any printable character including space.

* __ft_strlen(*s)__ - calculates the length of the string pointed to by _s_, excluding the terminating null byte ('\0').

* __ft_memset(*s, c, n)__ - fills the first _n_ bytes of the memory area pointed to by _s_ with the constant byte _c_, and returns a pointer to the memory area _s_.

* __ft_bzero(*s, n)__ - erases the data in the _n_ bytes of the memory starting at the location pointed to by _s_, by writing zeros (bytes containing '\0') to that area.

* __ft_memcpy(*dest, *src, n)__ - copies _n_ bytes from memory area _src_ to memory area _dest_. The memory areas must not overlap.

* __ft_memmove(*dest, *src, n)__ - copies _n_ bytes from memory area _src_ to memory area _dest_. The memory areas may overlap: copying takes place as though the bytes in _src_ are first copied into a temporary  array  that  does  not overlap _src_ or _dest_, and the bytes are then copied from the temporary array to _dest_.

* __ft_strlcpy(*dst, *src, dsize)__ - copy the input string into a destination  string. If the destination buffer, limited by its size, isn't large enough to hold the copy, the resulting string is  truncated (but it is guaranteed to be null-terminated). They return the length of the total string they tried to create.

* __ft_strlcat(*dst, *src, dsize)__ - catenate the input string into a destination  string. If the destination buffer, limited by its size, isn't large enough to hold the copy, the resulting string is  truncated (but it is guaranteed to be null-terminated). They return the length of the total string they tried to create. If _dsize_ isn't longer than the original _dst_ string, this function returns _dstsize_ + (size of _src_).

## Instructions

Command lines:

>_make all_

## Resources

"man" was the primary source of information, used on Linux terminal

AI was used as a secondary learning tool
