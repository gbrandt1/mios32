// $Id$
/*
 * Header file for Timestamp
 *
 * ==========================================================================
 *
 *  Copyright (C) 2013 Thorsten Klose (tk@midibox.org)
 *  Licensed for personal non-commercial use only.
 *  All other rights reserved.
 * 
 * ==========================================================================
 */

#ifndef _MIOS32_TIMESTAMP_H
#define _MIOS32_TIMESTAMP_H

/////////////////////////////////////////////////////////////////////////////
// Global definitions
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Global Types
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

extern s32 MIOS32_TIMESTAMP_Init(u32 mode);

extern s32 MIOS32_TIMESTAMP_Inc(void);
extern s32 MIOS32_TIMESTAMP_Get(void);
extern s32 MIOS32_TIMESTAMP_GetDelay(u32 captured_timestamp);


/////////////////////////////////////////////////////////////////////////////
// Export global variables
/////////////////////////////////////////////////////////////////////////////


#endif /* _MIOS32_TIMESTAMP_H */
