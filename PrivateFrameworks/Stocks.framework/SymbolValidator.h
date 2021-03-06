/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Stocks/XMLHTTPRequest.h>

@class NSMutableArray, SymbolParserData;

@interface SymbolValidator : XMLHTTPRequest
{
    id <SymbolValidatorDelegate> _delegate;
    NSMutableArray *_validatedSymbols;
    SymbolParserData *_symbolParserData;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (int)parseData:(id)arg1;
- (void)cancel;
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;
- (id)initWithDelegate:(id)arg1;

@end

