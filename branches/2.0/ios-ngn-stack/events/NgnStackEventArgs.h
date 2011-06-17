/* Copyright (C) 2010-2011, Mamadou Diop.
 * Copyright (c) 2011, Doubango Telecom. All rights reserved.
 *
 * Contact: Mamadou Diop <diopmamadou(at)doubango(dot)org>
 *       
 * This file is part of iDoubs Project ( http://code.google.com/p/idoubs )
 *
 * idoubs is free software: you can redistribute it and/or modify it under the terms of 
 * the GNU General Public License as published by the Free Software Foundation, either version 3 
 * of the License, or (at your option) any later version.
 *       
 * idoubs is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *       
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#import <Foundation/Foundation.h>

#import "events/NgnEventArgs.h"

#define kNgnStackEventArgs_Name @"NgnStackEventArgs_Name"

typedef enum NgnStackEventTypes_e {
	STACK_EVENT_NONE,
	
	STACK_START_OK,
    STACK_START_NOK,
    STACK_STOP_OK,
    STACK_STOP_NOK
}
NgnStackEventTypes_t;

@interface NgnStackEventArgs : NgnEventArgs {
	NgnStackEventTypes_t eventType;
	NSString* phrase;
}

@property(readonly) NgnStackEventTypes_t eventType;
@property(readonly,retain) NSString* phrase;


-(NgnStackEventArgs*)initWithEventType: (NgnStackEventTypes_t)_eventType andPhrase: (NSString*)_phrase;

@end
