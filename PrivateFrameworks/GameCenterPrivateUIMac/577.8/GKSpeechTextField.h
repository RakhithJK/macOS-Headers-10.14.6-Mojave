//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class GKPlayerWithSpeechBalloonView;

@interface GKSpeechTextField : NSTextField
{
    GKPlayerWithSpeechBalloonView *_balloonView;
}

@property GKPlayerWithSpeechBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (struct CGSize)_gkDesiredSize;
- (void)textDidChange:(id)arg1;
- (void)selectText:(id)arg1;
- (BOOL)becomeFirstResponder;

@end

