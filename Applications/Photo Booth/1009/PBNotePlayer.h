//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBNotePlayer : NSObject
{
    struct ComponentInstanceRecord *_musicDeviceAU;
    struct ComponentInstanceRecord *_systemOutputAU;
    unsigned int _instrumentID;
    float _pitch;
    float _velocity;
    unsigned int _noteInstanceID;
}

+ (id)countdownNotePlayer;
- (void)startNote;
- (void)stopNote;
- (void)cleanupFromPlaying;
- (void)prepareForPlaying;
- (void)dealloc;
- (id)initWithInstrument:(unsigned int)arg1 pitch:(float)arg2 velocity:(float)arg3;

@end

