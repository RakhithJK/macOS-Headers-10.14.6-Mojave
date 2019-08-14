//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSImage, NSString;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _horizontallyFlipped;
    NSImage *_underlyingImage;
}

+ (BOOL)supportsSecureCoding;
+ (id)imageWithUnderlyingImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)templateImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)templateImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1;
@property(nonatomic, getter=isHorizontallyFlipped) BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property(retain, nonatomic) NSImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqualToImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)bitmapRep;
- (id)flippedUnderlyingImage;
- (BOOL)isLargerThanSize:(struct CGSize)arg1;
- (id)JPEGRepresentationWithCompressionFactor:(double)arg1;
- (id)imageByAspectFittingToBox:(struct CGSize)arg1;
- (id)imageByEnlargingCanvasToSize:(struct CGSize)arg1;
- (id)imageByResizingToSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *accessibilityDescription;
- (BOOL)layoutIsLeftToRight;
@property(readonly, nonatomic) CRKImage *localizedImage;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, copy, nonatomic) NSData *PNGRepresentation;
- (id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(BOOL)arg2;
- (id)initWithUnderlyingImage:(id)arg1;

@end

