/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject
{
    BOOL _wasDeleted;
    NSString *_GUID;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_URLString;
    MSASInvitation *_invitation;
    NSString *_name;
}

@property(nonatomic) BOOL wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MSASInvitation *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(copy, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(copy, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(copy, nonatomic) NSString *ownerFullName; // @synthesize ownerFullName=_ownerFullName;
@property(copy, nonatomic) NSString *ownerPersonID; // @synthesize ownerPersonID=_ownerPersonID;
@property(copy, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)description;

@end
