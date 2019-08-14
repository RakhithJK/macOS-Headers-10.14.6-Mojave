//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCCapabilities;

__attribute__((visibility("hidden")))
@interface AVConferenceCallState : NSObject
{
    BOOL _audioIsPaused;
    VCCapabilities *_capabilities;
    BOOL _isVideoPaused;
    BOOL _isAudioSending;
}

@property(retain, nonatomic) VCCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isAudioSending) BOOL isAudioSending; // @synthesize isAudioSending=_isAudioSending;
@property(nonatomic, getter=isVideoPaused) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic, getter=isAudioPaused) BOOL audioIsPaused; // @synthesize audioIsPaused=_audioIsPaused;
- (void)dealloc;

@end

