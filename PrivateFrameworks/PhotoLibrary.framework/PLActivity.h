/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIActivity.h"

@class NSArray;

@interface PLActivity : UIActivity
{
    BOOL _needsActivityViewControllerDismissed;
    int _status;
    int _mode;
    int _interfaceIdiom;
    NSArray *_assetsToShare;
}

@property(nonatomic) BOOL needsActivityViewControllerDismissed; // @synthesize needsActivityViewControllerDismissed=_needsActivityViewControllerDismissed;
@property(retain, nonatomic) NSArray *assetsToShare; // @synthesize assetsToShare=_assetsToShare;
@property(nonatomic) int interfaceIdiom; // @synthesize interfaceIdiom=_interfaceIdiom;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) int status; // @synthesize status=_status;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (void)dealloc;
- (id)initForMode:(int)arg1 interfaceIdiom:(int)arg2;

@end

