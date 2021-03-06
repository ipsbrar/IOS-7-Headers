/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface EKUISingleDayTimelineLayoutPartition : NSObject
{
    NSMutableArray *_stackOfOccurrences;
    float _initialLeftBoundary;
    float _rightBoundary;
    double _topBoundaryTime;
}

@property(nonatomic) float rightBoundary; // @synthesize rightBoundary=_rightBoundary;
@property(nonatomic) float initialLeftBoundary; // @synthesize initialLeftBoundary=_initialLeftBoundary;
@property(nonatomic) double topBoundaryTime; // @synthesize topBoundaryTime=_topBoundaryTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) float freeSpaceWidth;
@property(readonly, nonatomic) float freeSpaceLeftBoundary;
- (void)popOccurrence;
- (void)pushOccurrence:(id)arg1;
- (id)peekOccurrence;
@property(readonly, nonatomic) NSArray *stackedOccurrences;
- (id)description;
- (id)init;

@end

