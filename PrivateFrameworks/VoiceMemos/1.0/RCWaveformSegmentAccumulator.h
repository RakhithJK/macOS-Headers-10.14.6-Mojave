//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCWaveformGeneratorSegmentOutputObserver-Protocol.h>

@class NSMutableArray, NSString, RCWaveformGenerator;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver>
{
    BOOL _finishedSuccessfully;
    RCWaveformGenerator *_generator;
    NSMutableArray *_segments;
}

@property(readonly, nonatomic) BOOL finishedSuccessfully; // @synthesize finishedSuccessfully=_finishedSuccessfully;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) RCWaveformGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (BOOL)waitUntilFinished;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)dealloc;
- (id)initWithWaveformGenerator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

