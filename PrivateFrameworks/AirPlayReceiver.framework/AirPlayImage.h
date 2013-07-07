/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AirPlayImage : NSObject
{
    struct CGSize _unadjustedSize;
    struct CGImage *_image;
    void *_ioSurface;
    int _imageOrientation;
    struct CGSize _scale;
}

- (struct CGSize)_unadjustedContentSize;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)_setCGImage:(struct CGImage *)arg1;
@property(readonly, nonatomic) void *ioSurface;
- (void)_setIOSurface:(void *)arg1;
@property(nonatomic) struct CGSize scale;
@property(readonly, nonatomic) int imageOrientation;
- (void)_setImageOrientation:(int)arg1;
- (struct CGAffineTransform)contentsTransformForLayer:(id)arg1;
@property(readonly, nonatomic) id layerContents;
- (void)dealloc;
- (id)initWithData:(id)arg1 decode:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1;

@end
