/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:01:38 by moduwole          #+#    #+#             */
/*   Updated: 2022/02/22 20:40:08 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	j = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (!((str[j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= '0' && str[j] <= '9')))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}
