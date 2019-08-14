//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoDecoder : NSObject
{
    long long _streamToken;
    struct tagHANDLE *_videoPlayerHandle;
    int _clientCount;
}

+ (void)releaseVideoDecoderForStreamToken:(long long)arg1;
+ (id)decoderForStreamToken:(long long)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
+ (id)streamTokenDecoderMap;
@property(readonly) struct tagHANDLE *videoPlayerHandle;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;

@end

