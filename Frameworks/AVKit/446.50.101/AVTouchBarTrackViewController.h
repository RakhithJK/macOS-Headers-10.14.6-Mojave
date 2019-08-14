//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AVTouchBarTrackView;
@protocol AVTouchBarTrackControlling><AVTimeControlling;

@interface AVTouchBarTrackViewController : NSViewController
{
    BOOL _hasRoundedCorners;
    id <AVTouchBarTrackControlling><AVTimeControlling> _playerController;
}

+ (id)keyPathsForValuesAffectingTouchBarTrackView;
@property(retain) id <AVTouchBarTrackControlling><AVTimeControlling> playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (Class)_trackViewClass;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (id)thumbnailForTime:(double)arg1;
@property BOOL hasRoundedCorners;
@property(readonly) AVTouchBarTrackView *touchBarTrackView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

