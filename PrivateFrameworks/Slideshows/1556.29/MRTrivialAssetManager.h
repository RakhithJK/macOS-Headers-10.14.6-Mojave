//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MZMediaManagement-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MRTrivialAssetManager : NSObject <MZMediaManagement>
{
    NSMutableDictionary *mCache;
}

+ (id)sharedManager;
+ (void)initialize;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2;
- (BOOL)isSupportedMovieForAssetAtPath:(id)arg1;
- (struct CGImage *)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)CGImageForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct __IOSurface *)IOSurfaceForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetAtPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)infoForAssetAtPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

