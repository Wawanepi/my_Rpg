
char *my_strstr(char *str, char *to_find)
{
    if (str[0] == '\0')
        return 0;
    if (str[0] == to_find[0])
        return str;
    return (my_strstr(str + 1, to_find));
}
