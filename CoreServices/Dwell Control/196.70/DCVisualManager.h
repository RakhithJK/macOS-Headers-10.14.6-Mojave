//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXVViewMouseEventDelegate-Protocol.h"

@class AXVProgressIndicatorView, AXVStyledMenu, DCZoomManager, NSMutableArray, NSString;

@interface DCVisualManager : NSObject <AXVViewMouseEventDelegate>
{
    DCZoomManager *_zoomManager;
    NSMutableArray *__highlightViews;
    AXVProgressIndicatorView *__progressIndicatorView;
    AXVProgressIndicatorView *__dragProgressIndicatorView;
    AXVStyledMenu *__optionsMenu;
}

@property(retain, nonatomic) AXVStyledMenu *_optionsMenu; // @synthesize _optionsMenu=__optionsMenu;
@property(retain, nonatomic) AXVProgressIndicatorView *_dragProgressIndicatorView; // @synthesize _dragProgressIndicatorView=__dragProgressIndicatorView;
@property(retain, nonatomic) AXVProgressIndicatorView *_progressIndicatorView; // @synthesize _progressIndicatorView=__progressIndicatorView;
@property(retain, nonatomic) NSMutableArray *_highlightViews; // @synthesize _highlightViews=__highlightViews;
@property(retain, nonatomic) DCZoomManager *zoomManager; // @synthesize zoomManager=_zoomManager;
- (void).cxx_destruct;
- (void)mouseDidExitView:(id)arg1 event:(id)arg2;
- (void)mouseDidEnterView:(id)arg1 event:(id)arg2;
- (void)_addViewToOverlayWindowSpace:(id)arg1;
- (void)_populateDataForMenuItem:(id)arg1 withAction:(unsigned long long)arg2;
- (struct CGRect)_screenFrameForLocalFrame:(struct CGRect)arg1;
- (struct CGRect)_localFrameForScreenFrame:(struct CGRect)arg1;
- (void)_showMenuDwellProgressForFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)_activateForMenuItemDictionary:(id)arg1;
- (id)_menuImageNameForAction:(unsigned long long)arg1;
- (id)_optionsMenuItems;
- (void)dismissOptionsMenu;
- (void)showOptionsMenuAroundFrame:(struct CGRect)arg1;
- (id)_activeScrollRegionsForFrame:(struct CGRect)arg1 vertical:(BOOL)arg2 horizontal:(BOOL)arg3;
- (void)showScrollMenuForFrame:(struct CGRect)arg1 vertical:(BOOL)arg2 horizontal:(BOOL)arg3;
- (void)hideDragCursor;
- (void)showDragCursorForFrame:(struct CGRect)arg1 duration:(double)arg2 style:(long long)arg3;
- (void)hideActiveCursor;
- (void)hideProgressCursor;
- (void)showProgressCursorForFrame:(struct CGRect)arg1 duration:(double)arg2 style:(long long)arg3;
- (void)zoomOut;
- (void)zoomIn;
- (void)_zoomIn;
- (void)_unhighlightViews:(id)arg1;
- (void)_unhighlightAllViews;
- (void)reset;
- (void)setDwellZoomEnabled:(BOOL)arg1;
- (void)cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
