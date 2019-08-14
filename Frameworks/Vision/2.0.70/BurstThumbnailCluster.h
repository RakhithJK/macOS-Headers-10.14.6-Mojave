//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstThumbnailCluster : NSObject
{
    struct __CVBuffer *_imagePixelBuffer;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_burstImages;
    NSMutableDictionary *_imageProps;
}

@property(retain) NSMutableDictionary *imageProps; // @synthesize imageProps=_imageProps;
@property(retain) NSMutableArray *burstImages; // @synthesize burstImages=_burstImages;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property struct __CVBuffer *imagePixelBuffer; // @synthesize imagePixelBuffer=_imagePixelBuffer;
- (void).cxx_destruct;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;
- (void)addItemsFromCluster:(id)arg1;
- (void)dealloc;
- (id)initWithImageData:(struct __CVBuffer *)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

