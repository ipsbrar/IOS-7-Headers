/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "RTFrameworkProtocol.h"

@class RTRoutineManager;

__attribute__((visibility("hidden")))
@interface _RTRoutineManagerProxy : NSObject <RTFrameworkProtocol>
{
    RTRoutineManager *_routineManager;
}

@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoutineManager:(id)arg1;

@end

