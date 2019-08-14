//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WebView.h>

#import "ITAccessibleLinking-Protocol.h"
#import "ITViewLinking-Protocol.h"

@class ITWebKit1ViewMacOSWebViewDOMEventListener, ITWebKit1ViewMacOSWebViewDelegate;

@interface ITWebKit1ViewMacOSPrivateWebView : WebView <ITViewLinking, ITAccessibleLinking>
{
    struct weak_ptr<ITWebKit1ViewMacOS> _owningITWebKitView;
    ITWebKit1ViewMacOSWebViewDelegate *_delegate;
    ITWebKit1ViewMacOSWebViewDOMEventListener *_domEventListener;
    int _cachedDocumentHeight;
    int _cachedDocumentWidth;
}

@property int cachedDocumentHeight; // @synthesize cachedDocumentHeight=_cachedDocumentHeight;
@property int cachedDocumentWidth; // @synthesize cachedDocumentWidth=_cachedDocumentWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) int mainFrameDocumentHeight; // @dynamic mainFrameDocumentHeight;
@property(readonly) int mainFrameDocumentWidth; // @dynamic mainFrameDocumentWidth;
- (BOOL)untrackDocumentHeightChanges;
- (BOOL)trackDocumentHeightChanges;
- (void)releaseCachedDelegate;
- (id)cachedDelegate;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (shared_ptr_2ce19749)owningITWebKitView;
- (shared_ptr_d213862f)frontingView;
- (shared_ptr_18c9bb0b)accessibleObject;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(const struct ITWebKit1ViewMacOSPrivateWebViewConfiguration *)arg2 owningITWebKitView:(shared_ptr_2ce19749)arg3;
- (BOOL)enableLinenBackground;
- (struct CGPoint)getScrollOffset;
- (void)setScrollOffset:(struct CGPoint)arg1;
- (id)_childWebScrollView;
- (id)_childWebClipView;
- (void)scrollWheel:(id)arg1;
- (void)trackSwipeWithEvent:(id)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
