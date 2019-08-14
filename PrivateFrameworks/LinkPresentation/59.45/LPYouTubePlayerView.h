//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class LPYouTubePlayerScriptMessageHandler, NSMutableArray, NSString, WKWebView;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : NSView
{
    WKWebView *_webView;
    NSString *_videoID;
    long long _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    BOOL _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
    BOOL _startsPlayingAutomatically;
    BOOL _showsControls;
    BOOL _muted;
    id <LPYouTubePlayerDelegate> _delegate;
    double _startTime;
    double _endTime;
}

@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) BOOL showsControls; // @synthesize showsControls=_showsControls;
@property(nonatomic) BOOL startsPlayingAutomatically; // @synthesize startsPlayingAutomatically=_startsPlayingAutomatically;
@property(nonatomic) __weak id <LPYouTubePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveScriptMessage:(id)arg1;
- (void)layout;
- (void)createVideoPlayerView;
- (id)_parameterScript;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)seekTo:(double)arg1;
- (void)pause;
- (void)play;
- (void)evaluatePlayerCommand:(id)arg1;
- (void)dealloc;
- (void)loadVideoWithID:(id)arg1;
- (void)loadVideoWithEmbedURL:(id)arg1;
- (void)loadVideoWithURL:(id)arg1;
- (void)dispatchErrorForInvalidURL;
- (id)initWithFrame:(struct CGRect)arg1;

@end

