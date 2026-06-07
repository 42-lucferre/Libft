# _This project has been created as part of the 42 curriculum by lucferre_

## Description

This projects intends to teach the fundamentals of basics functions and libraries, and build an usable library for myself as well.

Functions added to the library (descriptions from "man" and from Subject):

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

* __ft_calloc( nmemb, size)__ - allocates memory for an array of _nmemb_ elements of _size_ bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If _nmemb_ or _size_ is 0, then it returns a unique pointer value that can later be successfully passed to free().

* __ft_strdup(*s)__ - returns a pointer to a new string which is a duplicate of the string _s_. Memory for the new string is obtained with malloc(), and can be freed with free(). On success, the function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

* __ft_substr(*s, start, len)__ - allocates memory (using malloc()) and returns a substring from the string _’s’_. The substring starts at index _'start’_ and has a maximum length of _’len’_.

* __ft_strjoin__:
  * char *ft_strjoin(char const \*s1, char const \*s2) - allocates memory (using malloc()) and returns a new string, which is the result of concatenating _’s1’_  and _’s2’_.

* __ft_strtrim__:
  * char *ft_strtrim(char const \*s1, char const \*set) - allocates memory (using malloc()) and returns a copy of _’s1’_ with characters from _’set’_ removed from the beginning and the end.
  
* __ft_split__:
  * char **ft_split(char const *s, char c) - allocates memory (using malloc()) and returns an array of strings obtained by splitting _’s’_ using the character _’c’_ as a delimiter. The array must end with a NULL pointer.

* __ft_itoa__:
  * char *ft_itoa(int n) - allocates memory (using malloc()) and returns a string representing the integer received as an argument. Negative numbers must be handled.

* __ft_strmapi__:
  * char \*ft_strmapi(char const \*s, char (*f)(unsigned int, char)) - Applies the function _f_ to each character of the string _s_, passing its index as the first argument and the character itself as the second. A new string is created (using malloc()) to store the results from the successive applications of _f_.

* __ft_striteri__:
  * void ft_striteri(char *s, void (\*f)(unsigned int, char\*)) - applies the function _’f’_ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to _’f’_ so it can be modified if necessary.

* __ft_putchar_fd__:
  * void ft_putchar_fd(char c, int fd) - outputs the character _’c’_ to the specified file descriptor.
  
## Instructions

Command lines:

>_make all_

## Resources

"man" was the primary source of information, used on Linux terminal

AI was used as a secondary learning tool
