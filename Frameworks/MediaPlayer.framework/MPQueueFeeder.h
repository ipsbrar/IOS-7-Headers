/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPAVPlaylistFeeder.h"

@class MPAVController, NSDictionary, RadioStation;

@interface MPQueueFeeder : NSObject <MPAVPlaylistFeeder>
{
    MPAVController *_avController;
    struct __CFSet *_itemsWithReferencesToClear;
    unsigned int _repeatType;
    unsigned int _shuffleType;
    struct __CFDictionary *_nextStartTimes;
    id _representedObject;
    BOOL _fullScreenPlaybackQueue;
    BOOL _isSourceChangeInProgress;
    BOOL _deallocating;
    unsigned int _activeShuffleType;
}

+ (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 feederClass:(Class)arg3;
@property(nonatomic) BOOL isSourceChangeInProgress; // @synthesize isSourceChangeInProgress=_isSourceChangeInProgress;
@property(nonatomic) BOOL fullScreenPlaybackQueue; // @synthesize fullScreenPlaybackQueue=_fullScreenPlaybackQueue;
@property(retain, nonatomic) id <NSObject> representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) unsigned int activeShuffleType; // @synthesize activeShuffleType=_activeShuffleType;
@property(nonatomic) unsigned int shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) unsigned int repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) __weak MPAVController *AVController; // @synthesize AVController=_avController;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int nonRepeatingItemCount;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (BOOL)_canPurgeNextStartTimes;
- (void)contentInvalidated;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange)arg1;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (id)itemForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int itemCount;
@property(readonly, nonatomic) unsigned int initialPlaybackQueueDepth;
- (BOOL)hasItemForIndex:(unsigned int)arg1;
- (void)assumeOwnershipOfItems:(id)arg1;
- (void)controller:(id)arg1 willChangePlaybackIndexBy:(int)arg2 deltaType:(int)arg3 ignoreElapsedTime:(BOOL)arg4 allowSkippingAds:(BOOL)arg5;
@property(readonly, nonatomic) unsigned int realShuffleType;
@property(readonly, nonatomic) unsigned int realRepeatType;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)clearReferencesToItem:(id)arg1;
- (void)addReferenceToItem:(id)arg1;
@property(readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;
@property(readonly, nonatomic) BOOL trackChangesCanEndPlayback;
@property(readonly, nonatomic) NSDictionary *preferredLanguages;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) Class itemClass;
- (BOOL)canSkipToPreviousItem;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSeek;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id *)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)commitSourceChangeWithStartQueueIndex:(unsigned int)arg1;
- (void)beginSourceChange;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (BOOL)reloadWithDataSource:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int *)arg1;
- (void)setSubsequenceFocused:(BOOL)arg1 currentItemIndex:(unsigned int)arg2;
- (void)invalidateQueueCaches;
- (void)setNextStartTime:(double)arg1 forIndex:(unsigned int)arg2;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange)arg1;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange)arg1;
- (void)dealloc;
@property(readonly, nonatomic) RadioStation *station;

@end
