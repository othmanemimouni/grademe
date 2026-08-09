int	isprint(int c)
{
	(void)c;
	if((c >= 32 && c <= 126))
	{
		return 1;
	}
	return (0);
}
