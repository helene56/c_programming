### Exercise 1

Having to check the return value of `malloc` each time we call it can be an annoyance. 
Write a function named `my_malloc` that serves as a "wrapper" for `malloc`.

When we call `my_malloc` and ask it to allocate `n` bytes, it in turn calls `malloc`, tests to make sure that `malloc` doesn't return a null pointer, and then returns the pointer from `malloc`.

Have `my_malloc` print an error message and terminate the program if `malloc` returns a null pointer.
