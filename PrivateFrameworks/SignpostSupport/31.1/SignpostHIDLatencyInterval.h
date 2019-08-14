//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SignpostSupport/SignpostAnimationSubInterval.h>

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>
{
    unsigned int _swapId;
    unsigned int _frameSeed;
}

@property(readonly, nonatomic) unsigned int frameSeed; // @synthesize frameSeed=_frameSeed;
@property(readonly, nonatomic) unsigned int swapId; // @synthesize swapId=_swapId;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned int)arg4 frameSeed:(unsigned int)arg5;
- (id)initWithHIDLatencyInterval:(id)arg1;

@end

