#include <stdio.h>

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] =
    {{"Argentina",            54}, {"Bangladesh",     889},
     {"Brazil",               55}, {"Burma (Myanmar)", 95},
     {"China",                86}, {"Colombia",        57},
     {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
     {"Ethiopia",            251}, {"France",          33},
     {"Germany",              49}, {"India",           91},
     {"Indonesia",            62}, {"Iran",            98},
     {"Italy",                39}, {"Japan",           81},
     {"Mexico",               52}, {"Nigeria",        234},
     {"Pakistan",             92}, {"Philippines",     63},
     {"Poland",               48}, {"Russia",           7},
     {"South Africa",         27}, {"South Korea",     82},
     {"Spain",                34}, {"Sudan",          249},
     {"Thailand",             66}, {"Turkey",          90},
     {"Ukraine",             380}, {"United Kingdom",  44},
     {"United States",         1}, {"Vietnam",         84}};

# define SIZE (sizeof(country_codes)/sizeof(country_codes[0]))

int main()
{
    // printf("size of array: %d\n", SIZE);
    printf("Enter dialing code\n");
    int user_code;

    scanf("%d", &user_code);

    // find the size of the array - done
    // loop through the country codes, that each contains a pointer and country code.
    // if the code == user_code, return the pointer and then break

    for (int i; i < SIZE; i++)
    {
        if (country_codes[i].code == user_code)
        {
            printf("%s\n", country_codes[i].country);
            break;
        }
        
    }
}