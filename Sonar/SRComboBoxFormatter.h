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
//  SRComboBoxFormatter.h
//  Sonar
//
//  Created by Matt on 7/13/12.
//  Copyright (c) 2012 Matt Zanchelli. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SRComboBoxFormatter : NSFormatter

- (NSString *)stringForObjectValue:(id)anObject;
- (BOOL)getObjectValue:(id *)anObject forString:(NSString *)string errorDescription:(NSString **)error;
- (BOOL)isPartialStringValid:(NSString *)partialString newEditingString:(NSString **)newString errorDescription:(NSString **)error;

@end
