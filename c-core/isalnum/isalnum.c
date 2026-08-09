int	isalnum(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	return 0;
}
