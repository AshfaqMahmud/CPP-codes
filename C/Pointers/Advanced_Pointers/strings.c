/* Exercise 5-3 */
/* strcat: concatenate t to end of s */
void strcat_ptr(char *s, const char *t)
{
    /* find end of s */
    while (*s)
        s++;
    /* copy t */
    while ((*s++ = *t++))
        ;
}

/* Exercise 5-4 */
/* strend: returns 1 if string t occurs at end of s, 0 otherwise */
int strend(char *s, char *t)
{
    char *s_end = s;
    char *t_start = t;

    /* find end of both strings */
    while (*s_end)
        s_end++;
    while (*t)
        t++;

    /* check if t is longer than s */
    if ((s_end - s) < (t - t_start))
        return 0;

    /* compare characters from end */
    while (t_start <= t)
    {
        if (*s_end != *t)
            return 0;
        s_end--;
        t--;
    }
    return 1;
}

/* Exercise 5-5 */
/* strncpy: copy at most n characters of t to s */
char *strncpy_ptr(char *s, const char *t, size_t n)
{
    char *s_start = s;

    while (n > 0 && *t)
    {
        *s++ = *t++;
        n--;
    }
    while (n > 0)
    {
        *s++ = '\0';
        n--;
    }
    return s_start;
}

/* strncat: concatenate at most n characters of t to s */
char *strncat_ptr(char *s, const char *t, size_t n)
{
    char *s_start = s;

    /* find end of s */
    while (*s)
        s++;

    /* copy at most n characters */
    while (n > 0 && *t)
    {
        *s++ = *t++;
        n--;
    }
    *s = '\0';
    return s_start;
}

/* strncmp: compare at most n characters of t with s */
int strncmp_ptr(const char *s, const char *t, size_t n)
{
    for (; n > 0 && *s == *t; s++, t++, n--)
        if (*s == '\0')
            return 0;
    if (n == 0)
        return 0;
    return *s - *t;
}

/* Exercise 5-6: Here are pointer versions of some key functions */

/* getline: read a line into s, return length */
int getline_ptr(char *s, int lim)
{
    char *start = s;
    char c;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        *s++ = c;
    if (c == '\n')
        *s++ = c;
    *s = '\0';
    return s - start;
}

/* atoi: convert string s to integer using pointers */
int atoi_ptr(const char *s)
{
    int n = 0;
    int sign;

    /* skip white space */
    while (*s == ' ' || *s == '\t')
        s++;

    sign = (*s == '-') ? -1 : 1;
    if (*s == '+' || *s == '-')
        s++;

    while (*s >= '0' && *s <= '9')
        n = 10 * n + (*s++ - '0');

    return sign * n;
}

/* reverse: reverse string s in place using pointers */
void reverse_ptr(char *s)
{
    char *end = s;
    char temp;

    /* find the end of string */
    while (*end)
        end++;
    end--; /* back off from '\0' */

    /* swap characters from ends toward middle */
    while (s < end)
    {
        temp = *s;
        *s++ = *end;
        *end-- = temp;
    }
}

/* strindex: return index of t in s, -1 if none */
int strindex_ptr(char *s, char *t)
{
    char *start = s;
    char *pattern, *p;

    for (; *s != '\0'; s++)
    {
        for (p = s, pattern = t; *pattern != '\0' && *p == *pattern; p++, pattern++)
            ;
        if (pattern > t && *pattern == '\0')
            return s - start;
    }
    return -1;
}

/* getop: get next operator or numeric operand */
int getop_ptr(char *s)
{
    int c;

    while ((*s = c = getch()) == ' ' || c == '\t')
        ;
    *(s + 1) = '\0';

    if (!isdigit(c) && c != '.')
        return c;

    if (isdigit(c))
        while (isdigit(*++s = c = getch()))
            ;

    if (c == '.')
        while (isdigit(*++s = c = getch()))
            ;

    *s = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}