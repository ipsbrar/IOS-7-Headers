/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable.h"

__attribute__((visibility("hidden")))
@interface GQDTDurationFormat : NSObject <GQDNameMappable>
{
    struct __CFString *mFormatString;
}

+ (const struct StateSpec *)stateForReading;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (struct __CFString *)formatString;
- (void)dealloc;
- (id)initWithFormatString:(struct __CFString *)arg1;

@end

