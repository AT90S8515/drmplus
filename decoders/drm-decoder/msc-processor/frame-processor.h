#
/*
 *    Copyright (C) 2020
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of the DRM+ decoder
 *
 *    DRM+ decoder is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    DRM+ decoder is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with DRM+ decoder; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __FRAME_PROCESSOR__
#define __FRAME_PROCESSOR__

#include        <QObject>
#include	"basics.h"

class	drmDecoder;

class	frameProcessor: public QObject {
Q_OBJECT
public:
		frameProcessor     ();
virtual		~frameProcessor    ();
virtual	void	process  (uint8_t *buf_1,
                                 uint8_t *buf_2, int shortId);
signals:
	void	show_audioMode		(QString);
};

#endif

