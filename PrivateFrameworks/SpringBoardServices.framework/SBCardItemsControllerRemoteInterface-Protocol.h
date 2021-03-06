/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SBCardItemsControllerRemoteInterface <NSObject>
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)clearCardItemsForControllerWithIdentifier:(id)arg1;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2;
@end

