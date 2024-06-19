### Exercise 2

Write a function named `duplicate` that uses dynamic storage allocation to create a copy of a string. For example, the call

`p = duplicate(str);`

would allocate space for a string of the same lenght as `str`, copy the contents of `str` into the new string, and return a pointer to it. 

Have `duplicate` return a null pointer if the memory allocation fails.