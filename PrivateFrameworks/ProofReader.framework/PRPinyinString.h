/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPinyinString.h"

@interface PRPinyinString : NSPinyinString
{
    unsigned int _originalLength;
    unsigned int _originalCheckedLength;
    unsigned int _modificationCount;
    unsigned int *_modificationTypes;
    struct _NSRange *_originalRanges;
    struct _NSRange *_finalRanges;
    struct _NSRange *_originalSyllableRanges;
    struct _NSRange *_originalAdditionalSyllableRanges;
}

+ (id)correctionsForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;
+ (id)alternativesForInputString:(id)arg1;
- (id)nonPinyinIndexSet;
- (struct _NSRange)nonPinyinRangeAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfDeletions;
- (unsigned int)numberOfInsertions;
- (unsigned int)numberOfTranspositions;
- (unsigned int)numberOfReplacements;
- (unsigned int)numberOfNonPinyinRanges;
- (unsigned int)indexOfFirstModification;
- (struct _NSRange)originalAdditionalSyllableRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange)originalSyllableRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange)finalRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange)originalRangeForModificationAtIndex:(unsigned int)arg1;
- (unsigned int)typeOfModificationAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfModifications;
- (unsigned int)finalCheckedLength;
- (unsigned int)originalCheckedLength;
- (unsigned int)originalLength;
- (unsigned int)score;
- (BOOL)lastSyllableIsPartial;
- (unsigned int)syllableCount;
- (id)string;
- (id)description;
- (id)annotatedString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 originalCheckedLength:(unsigned int)arg6 numberOfModifications:(unsigned int)arg7 modificationTypes:(unsigned int *)arg8 originalModificationRanges:(struct _NSRange *)arg9 finalModificationRanges:(struct _NSRange *)arg10 originalSyllableRanges:(struct _NSRange *)arg11 originalAdditionalSyllableRanges:(struct _NSRange *)arg12;
- (id)initWithUncheckedString:(id)arg1 score:(unsigned int)arg2 originalLength:(unsigned int)arg3;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8 originalSyllableRange:(struct _NSRange)arg9 originalAdditionalSyllableRange:(struct _NSRange)arg10;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8 originalSyllableRange:(struct _NSRange)arg9;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange)arg7 finalModificationRange:(struct _NSRange)arg8;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;

@end

