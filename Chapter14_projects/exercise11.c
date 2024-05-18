// write a macro named ERROR that generates the call of fprintf whown above when given a format string and the items to be displayed

#define ERROR(string, ...) fprintf(stderr, string, __VA_ARGS__)