char *ft_strdup(const char *s)
{
	int total;
	char *bloco;

	total = ft_strlen(s);
	if(!total)
	{
		return (0);
	}
	bloco = malloc(total);
	ft_memcpy(bloco, s, total);
	if (bloco)
	{
		return bloco;
	}
	return (0);
}
