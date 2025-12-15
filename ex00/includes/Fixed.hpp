/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:37:49 by tlize             #+#    #+#             */
/*   Updated: 2025/12/15 13:48:31 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &old_fixed);
	Fixed &operator=(const Fixed &old_fixed);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
private:
	int					fixed_point_number_value;
	static const int	fractional_bits = 8;
};

#endif