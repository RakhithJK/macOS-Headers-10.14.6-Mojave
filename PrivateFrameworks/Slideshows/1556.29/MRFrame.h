//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MRLoadable-Protocol.h>
#import <Slideshows/MRRenderable-Protocol.h>

@class MRImage, MRSlideProvider, NSDictionary, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary *mDescription;
    MRSlideProvider *mSlideProvider;
    MRImage *mInputImage;
    MRImage *mOutputImage;
    NSString *mFrameID;
    NSDictionary *mAttributes;
    NSDictionary *mFlattenedAttributes;
    struct CGSize mPixelSize;
}

+ (id)retainedFrameWithFrameID:(id)arg1 forSlideProvider:(id)arg2;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property(readonly) NSString *frameID; // @synthesize frameID=mFrameID;
@property(retain, nonatomic) MRImage *inputImage; // @synthesize inputImage=mInputImage;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
@property(readonly, nonatomic) BOOL isInfinite;
@property(readonly, nonatomic) BOOL isAlphaFriendly;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) BOOL isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)isRetainedBySlideProvider;
- (void)releaseBySlideProvider:(id)arg1;
- (void)retainBySlideProvider:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithFrameID:(id)arg1;

@end

