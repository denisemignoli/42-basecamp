/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjunior- < hjunior-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:36:25 by hjunior-          #+#    #+#             */
/*   Updated: 2022/02/07 01:06:50 by hjunior-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
		return (1);
	rush(x, y);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result);
}
