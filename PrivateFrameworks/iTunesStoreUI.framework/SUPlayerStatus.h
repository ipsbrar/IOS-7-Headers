/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying>
{
    double _currentTime;
    double _duration;
    NSError *_error;
    int _state;
}

@property(nonatomic) int playerState; // @synthesize playerState=_state;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

