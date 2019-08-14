//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVPlayer;
@protocol NUAVPlayerViewDelegate;

@interface NUAVPlayerView : NSView
{
    // Error parsing type: Ai, name: _updateReadyForDisplayID
    BOOL _readyForDisplay;
    AVPlayer *_player;
    id <NUAVPlayerViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <NUAVPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isReadyForDisplay, setter=_setReadyForDisplay:) BOOL readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updateReadyForDisplayWithID: /* Error: Ran out of types for this method. */;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

