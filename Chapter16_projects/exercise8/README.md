### Exercise 8
Let `color` be the following structur:
```
struct color{
    int red;
    int green;
    int blue;
};
```

(a) Write a declarationn for a `const` variable named `MAGENTA` of type `struct color` whose members have the values 255, 0, and 255, respectively.

(b) (C99) Repeat (a), but use a designated initializer that doesn't specify the value of `green`, allowing it to default to 0.