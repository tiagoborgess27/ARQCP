int get_ascii_code(char c)
{
	return (int)c;
}

int string_to_int(char str[])
{
	int result = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		result = result * 10 + get_ascii_code(str[i]) - '0';
	}
	return result;
}
