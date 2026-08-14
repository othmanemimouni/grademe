// The range is half-open: add the integers from first up to last, last excluded.
// first equal to last means an empty range, whose sum is 0.
int	sum_range(const int *first, const int *last)
{
	long long total = 0;
	const int *p = first;

	while(p < last)
	{
		total += *p;
		p++;
	}
	return total;
}
