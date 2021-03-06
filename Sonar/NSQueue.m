/*
 
 Copyright (c) 2012 Matt Zanchelli.
 All rights reserved.
 
 Redistribution and use in source and binary forms are permitted
 provided that the above copyright notice and this paragraph are
 duplicated in all such forms and that any documentation,
 advertising materials, and other materials related to such
 distribution and use acknowledge that the software was developed
 by Matt Zanchelli.  The name of the University may not be used to
 endorse or promote products derived from this software without
 specific prior written permission.
 THIS SOFTWARE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 
 */

//
//  NSQueue.m
//  Sonar
//
//  Created by Matt on 9/1/12.
//  Copyright (c) 2012 Matt Zanchelli. All rights reserved.
//

#import "NSQueue.h"

@implementation NSQueue

- (id)pop
{
	//	if empty
	if ( [self count] == 0 ) {
		return nil;
	}
	
    id obj = self[0];
    if (obj != nil) {
        [self removeObjectAtIndex:0];
    }
    return obj;
}

- (void)push:(id)obj
{
    [self addObject:obj];
}

@end
