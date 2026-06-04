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

* __ft_toupper(c)__ - if _c_ is a lowercase letter, returns its uppercase equivalent, if an uppercase representation exists in the current locale. Otherwise, it returns _c_.

* __ft_tolower(c)__ - if _c_ is an uppercase letter, returns its lowercase equivalent, if a lowercase representation exists in the current locale. Otherwise, it returns _c_.

* __ft_strchr(*s, c)__ - returns  a pointer to the first occurrence of the character _c_ in the string _s_, or NULL if the character is not found. The terminating null byte is considered part of the string, so that if _c_ is specified as '\0', this function return a pointer to the terminator.

* __ft_strrchr(*s, c)__ - returns  a pointer to the last occurrence of the character _c_ in the string _s_, or NULL if the character is not found. The terminating null byte is considered part of the string, so that if _c_ is specified as '\0', this function return a pointer to the terminator.

* __ft_strncmp(*s1, *s2, n)__ - compares the two strings _s1_ and _s2_. It compares only the first (at most) _n_ bytes, using unsigned characters. Returns an integer indicating the result of the comparison, as follows:
  
       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2.

* __ft_memchr(*s, c, n)__ - scans the initial _n_ bytes of the memory area pointed to by _s_ for the first instance of _c_. Both _c_ and the bytes of the memory area pointed to by _s_ are interpreted as unsigned char.

* __ft_memcmp(*s1, *s2, n)__ - compares the first _n_ bytes (each interpreted as unsigned char) of the memory areas _s1_ and _s2_. Returns an integer less than, equal to, or greater than zero if the first _n_ bytes of _s1_ is found, respectively, to be less than, to match, or be greater than the first _n_ bytes of _s2_. For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in _s1_ and _s2_. If _n_ is zero, the return value is zero.

* __ft_strnstr(*haystack, *needle, len)__ - scans the first _len_ bytes for the  first occurrence of the substring _needle_ in the string _haystack_. The terminating null bytes ('\0') are not compared.

* __ft_atoi( *nptr)__ - converts the initial portion of the string pointed to by _nptr_ to int. The string may begin with an arbitrary amount of white space ('\f', '\n', '\r', '\t', '\v' or space) followed by a single optional '+' or '-' sign.

## Instructions

Command lines:

>_make all_

## Resources

"man" was the primary source of information, used on Linux terminal

AI was used as a secondary learning tool
