//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVFigRoutingContextFactory-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVRemoteFigRoutingContextFactory : NSObject <AVFigRoutingContextFactory>
{
}

+ (void)initialize;
- (struct OpaqueFigRoutingContext *)createVideoContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)createControlChannelOnlyContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)createRemoteMusicControllerContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)createPerAppSecondDisplayContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)createAudioContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)copySystemMusicContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)copySystemMirroringContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)copySystemAudioContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)copyDisplayMenuVideoContextWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;
- (struct OpaqueFigRoutingContext *)copyContextForUUIDWithAllocator:(struct __CFAllocator *)arg1 options:(const struct __CFDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

