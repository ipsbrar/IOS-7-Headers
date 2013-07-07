/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MCSessionDelegate <NSObject>
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveResourceAtURL:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;

@optional
- (BOOL)session:(id)arg1 shouldAcceptCertificate:(struct __SecCertificate *)arg2 forPeer:(id)arg3;
@end
