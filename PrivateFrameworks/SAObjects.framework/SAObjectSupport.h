/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAObjectSupport : AceObject <SAAceSerializable>
{
}

+ (id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectSupport;
@property(copy, nonatomic) NSArray *supportedProperties;
@property(copy, nonatomic) NSString *groupId;
@property(copy, nonatomic) NSString *classId;
@property(copy, nonatomic) NSString *aceVersion;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

