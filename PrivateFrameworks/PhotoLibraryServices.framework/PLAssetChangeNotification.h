/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification
{
    NSSet *_updatedAssets;
}

+ (id)notificationWithChangedAssets:(id)arg1;
@property(copy, nonatomic) NSSet *updatedAssets; // @synthesize updatedAssets=_updatedAssets;
- (id)description;
- (id)userInfo;
- (id)object;
- (id)name;
- (void)dealloc;
- (id)_initWithChangedObjects:(id)arg1;
- (id)_init;

@end

