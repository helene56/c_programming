### Exercise 5
Write the following functions, assuming that the `date` structure contains three members: `month`, `day` and `year` (all type `int`).

(a)
    int day_of_year(struct date d);
    Returns the day of the year (an integer between 1 and 366) that corresponds to the date d.

(b)
    int compare_dates(struct date d1, struct date d2);
    Returns a negative number if `d1` is earlier than `d2`, 0 if they're the same date, and a positive number if `d1` is later than `d2`.
