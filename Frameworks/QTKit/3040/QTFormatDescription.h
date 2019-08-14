//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QTFormatDescriptionInternal;

@interface QTFormatDescription : NSObject
{
    QTFormatDescriptionInternal *_internal;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)formatDescriptionWithFigFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (BOOL)isEqualToFormatDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize)_scaledVideoSizeUsingCleanAperture:(BOOL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)formatDescriptionAttributes;
- (id)quickTimeSampleDescription;
- (id)localizedFormatSummary;
- (unsigned int)formatType;
- (id)mediaType;
- (struct opaqueCMFormatDescription *)figFormatDescription;
- (void)finalize;
- (void)dealloc;
- (id)initEmptyFormatDescriptionWithMediaType:(id)arg1;
- (id)initWithFigFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (id)init;

@end

