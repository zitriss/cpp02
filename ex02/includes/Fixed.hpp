/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:37:49 by tlize             #+#    #+#             */
/*   Updated: 2026/01/06 09:32:38 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &old_fixed);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed &old_fixed);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void)	const;
	int		toInt(void)		const;
private:
	int					fixed_point_number_value;
	static const int	fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif