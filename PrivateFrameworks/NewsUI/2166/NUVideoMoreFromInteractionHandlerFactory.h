//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVMoreFromInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol NUURLHandling, NUVideoCallToActionURLProviding, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUVideoMoreFromInteractionHandlerFactory : NSObject <SVMoreFromInteractionHandlerFactory>
{
    id <NUURLHandling> _urlHandler;
    id <NUVideoCallToActionURLProviding> _callToActionURLProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <NUVideoCallToActionURLProviding> callToActionURLProvider; // @synthesize callToActionURLProvider=_callToActionURLProvider;
@property(readonly, nonatomic) id <NUURLHandling> urlHandler; // @synthesize urlHandler=_urlHandler;
- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 urlHandler:(id)arg2 callToActionURLProvider:(id)arg3 videoViewControllerProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

