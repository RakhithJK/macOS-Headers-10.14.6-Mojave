//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUCISourceNode.h>

@class NSArray, NSString;
@protocol NUBufferImage, NUMutableBufferImage;

@interface PIRetouchSourceNode : NUCISourceNode
{
    id <NUMutableBufferImage> _retouchImage;
    id <NUBufferImage> _renderedImage;
    NSArray *_strokes;
    NSString *_cacheKey;
}

+ (id)intermediateCache;
- (void).cxx_destruct;
- (void)applyRetouchStrokes:(id)arg1 toImage:(id)arg2;
- (void)_performRetouchIfNeeded;
- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (id)initWithInputImage:(id)arg1 retouchStrokes:(id)arg2 cacheKey:(id)arg3;
- (id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3;

@end

