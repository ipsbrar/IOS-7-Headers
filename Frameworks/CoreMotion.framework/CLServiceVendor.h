/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface CLServiceVendor : NSObject
{
}

+ (id)getSiloForService:(id)arg1;
+ (id)proxyForService:(id)arg1;
+ (BOOL)ensureServiceIsRunning:(id)arg1;
+ (BOOL)isServiceRunning:(id)arg1;
+ (BOOL)isServiceEnabled:(id)arg1;
+ (void)retireServiceWithName:(id)arg1;
+ (id)getServiceWithName:(id)arg1;
+ (BOOL)getKeyClass:(Class *)arg1 andSilo:(id *)arg2 forServiceWithName:(id)arg3;
+ (void)rereadConfiguration;
+ (void)initialize;

@end
