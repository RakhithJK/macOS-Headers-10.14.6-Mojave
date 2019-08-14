//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class NSArray;

@protocol AVFunctionBarTrackControlling <NSObject>
@property(readonly) BOOL hasEnabledVideo;
@property(readonly) BOOL hasEnabledAudio;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1;
- (void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)generateFunctionBarThumbnailsForTimes:(NSArray *)arg1 size:(struct CGSize)arg2 requestType:(long long)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

