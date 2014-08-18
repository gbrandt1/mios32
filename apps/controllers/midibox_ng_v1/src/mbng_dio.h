// $Id$
/*
 * Digital IO access functions for MIDIbox NG
 *
 * ==========================================================================
 *
 *  Copyright (C) 2012 Thorsten Klose (tk@midibox.org)
 *  Licensed for personal non-commercial use only.
 *  All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _MBNG_DIO_H
#define _MBNG_DIO_H

/////////////////////////////////////////////////////////////////////////////
// global definitions
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Type definitions
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern s32 MBNG_DIO_Init(u32 mode);
extern const char *MBNG_DIO_PortNameGet(u8 port);
extern s32 MBNG_DIO_PortInit(u8 port, mios32_board_pin_mode_t mode);
extern u8 MBNG_DIO_PortGet(u8 port);
extern s32 MBNG_DIO_PortSet(u8 port, u8 value);


/////////////////////////////////////////////////////////////////////////////
// Exported variables
/////////////////////////////////////////////////////////////////////////////


#endif /* _MBNG_DIO_H */
