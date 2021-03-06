/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStylePack : PBCodable
{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property(retain, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;
@property(retain, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)genericShieldAtIndex:(unsigned int)arg1;
- (unsigned int)genericShieldsCount;
- (void)addGenericShield:(id)arg1;
- (void)clearGenericShields;
- (id)textureAtlasAtIndex:(unsigned int)arg1;
- (unsigned int)textureAtlasCount;
- (void)addTextureAtlas:(id)arg1;
- (void)clearTextureAtlas;
- (void)dealloc;

@end

