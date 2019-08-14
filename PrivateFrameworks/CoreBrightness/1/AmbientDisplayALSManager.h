//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreBrightness/DisplayALSManager.h>

__attribute__((visibility("hidden")))
@interface AmbientDisplayALSManager : DisplayALSManager
{
    float _userOffset;
}

- (void)updateALSParameters;
- (void)stopFade;
- (void)setBrightnessWithFade:(float)arg1 changeLength:(float)arg2;
- (void)handleALSUpdate:(float)arg1;
- (float)luxToAmbient:(float)arg1;
- (void)setMagsafeBrightnessLevel:(int)arg1;
- (void)setInitialMagsafeState;
- (void)savePreferences;
- (_Bool)loadPreferences;
- (void)dealloc;
- (id)init;

@end

