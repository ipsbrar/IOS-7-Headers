/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class CIImage, NSArray, _UIDecompressionInfo;

@interface UIImage : NSObject <NSSecureCoding, NSCoding>
{
    void *_imageRef;
    float _scale;
    struct {
        unsigned int named:1;
        unsigned int imageOrientation:3;
        unsigned int cached:1;
        unsigned int hasPattern:1;
        unsigned int isCIImage:1;
        unsigned int imageSetIdentifer:16;
        unsigned int renderingMode:2;
    } _imageFlags;
    _UIDecompressionInfo *_decompressionInfo;
    struct UIEdgeInsets _alignmentRectInsets;
}

+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 resizingMode:(int)arg3 duration:(double)arg4;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets)arg2 duration:(double)arg3;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (struct UIEdgeInsets)_edgeInsetsForStylePresetName:(id)arg1 scale:(float)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)imageWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (void)initialize;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(BOOL)arg5;
+ (id)_defaultBackgroundGradient;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)kitImageNamed:(id)arg1;
+ (id)applicationImageNamed:(id)arg1;
+ (void)setPreferredSharedImageScale:(float)arg1;
+ (id)imageAtPath:(id)arg1;
+ (void)_flushCache:(id)arg1;
+ (void)_flushSharedImageCache;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(float)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(float)arg3;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(float *)arg2;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets)arg6;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_tintedImageForSize:(struct CGSize)arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (struct CGSize)_legibilityImageSizeForSize:(struct CGSize)arg1 style:(int)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSArray *images;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (id)_imageWithLetterpressEffectWithForegroundColor:(id)arg1;
@property(readonly, nonatomic) int renderingMode;
- (id)imageWithRenderingMode:(int)arg1;
@property(readonly, nonatomic) int resizingMode;
@property(readonly, nonatomic) struct UIEdgeInsets capInsets;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(int)arg2;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (BOOL)_isResizable;
- (struct CGRect)_contentStretchInPixels;
@property(readonly, nonatomic) float scale;
@property(readonly, nonatomic) int imageOrientation;
- (struct CGSize)_sizeInPixels;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) CIImage *CIImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (BOOL)_canEncodeWithName:(id)arg1;
- (id)_initWithOtherImage:(id)arg1;
- (id)initWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(float)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_saveDecompressedImage:(struct CGImage *)arg1;
- (void)_decompressionFallbackImageCreation;
- (void)_decompressionComplete;
- (id)_flatImageWithColor:(id)arg1;
- (CDStruct_ffb0d7a1)_calculateStatistics;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (BOOL)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (struct __IOSurface *)ioSurface;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 imageOrientation:(int)arg2;
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 imageOrientation:(int)arg2;
- (id)_initWithData:(id)arg1 scale:(float)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2 cache:(BOOL)arg3;
- (id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2;
@property(readonly, nonatomic) int topCapHeight;
@property(readonly, nonatomic) int leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (struct CGColor *)_tiledPatternColor;
- (id)patternColor;
- (struct CGColor *)_patternColor;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)draw1PartImageInRect:(struct CGRect)arg1 fraction:(float)arg2;
- (void)draw1PartImageInRect:(struct CGRect)arg1;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2 fraction:(float)arg3;
- (void)draw3PartImageWithSliceRects:(CDStruct_75b8db5d)arg1 inRect:(struct CGRect)arg2;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2 fraction:(float)arg3;
- (void)draw9PartImageWithSliceRects:(CDStruct_c8cd2c5d)arg1 inRect:(struct CGRect)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(int)arg2 fraction:(float)arg3;
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(int)arg3 fraction:(float)arg4;
- (struct CGImage *)imageRef;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
- (id)_serializedData;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (id)_flatImageWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)_isInvisibleAndGetIsTranslucent:(char *)arg1;
- (int)_imageSetIdentifier;
- (void)_setImageSetIdentifier:(int)arg1;
- (BOOL)_isNamed;
- (void)_setNamed:(BOOL)arg1;
- (BOOL)_isCached;
- (void)_setCached:(BOOL)arg1;
- (id)_resizableImageWithCapMask:(int)arg1;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2 scale:(float)arg3;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2;
- (void)_preheatBitmapData;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_subimageInRect:(struct CGRect)arg1;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3;
- (void)_drawImageForLegibilityStyle:(int)arg1 size:(struct CGSize)arg2;
- (id)_imageForLegibilitySettings:(id)arg1;
- (id)_imageForLegibilityStyle:(int)arg1;

@end
