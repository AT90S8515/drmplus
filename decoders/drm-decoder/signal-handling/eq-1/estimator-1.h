#
/*
 *    Copyright (C) 2013
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Programming
 *
 *    This file is part of the SDR-J (JSDR).
 *    SDR-J is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    SDR-J is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with SDR-J; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#
#
#ifndef	__ESTIMATOR_1__
#define	__ESTIMATOR_1__

#include	"radio-constants.h"
#include	"referenceframe.h"
#include	<QString>
#include	"estimator-base.h"

//	The processor for estimating the channel(s) of a single
//	symbol
class	estimator_1: public estimatorBase {
public:
		estimator_1	(std::complex<float> **, int16_t);
		~estimator_1	(void);
	void	estimate	(std::complex<float> *,
	                                   std::complex<float> *);
private:
};

#endif

