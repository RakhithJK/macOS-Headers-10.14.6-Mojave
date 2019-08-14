//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MultiPaneController.h"

@class AlbumView, ColorWashView, NSView;
@protocol MultiPanePaneProtocol;

@interface MWController : MultiPaneController
{
    NSView<MultiPanePaneProtocol> *_sourceListSidebarView;
    BOOL _ignoreSwitchToViewForAlbum;
    AlbumView *_sourceListView;
    BOOL _contentViewActsModal;
    ColorWashView *_modalCover;
}

@property(readonly) AlbumView *sourceListView; // @synthesize sourceListView=_sourceListView;
@property BOOL ignoreSwitchToViewForAlbum; // @synthesize ignoreSwitchToViewForAlbum=_ignoreSwitchToViewForAlbum;
@property(readonly) NSView<MultiPanePaneProtocol> *sourceListSidebarView; // @synthesize sourceListSidebarView=_sourceListSidebarView;
- (void)switchToView:(int)arg1 rightSidebarType:(int)arg2 state:(id)arg3;
- (void)switchToView:(int)arg1 state:(id)arg2;
- (void)restoreViewStack:(id)arg1;
- (void)validateArchivedViewStack:(id)arg1;
- (id)emailViewController;
- (id)printProjectViewController;
- (id)albumDetailViewController;
- (id)eventDetailViewController;
- (id)editViewController;
- (id)oneUpViewController;
- (id)keepsakeViewController;
- (id)albumViewController;
- (id)placeView;
- (id)placeViewController;
- (id)peopleViewController;
- (id)eventViewController;
- (void)setContentViewActsModal:(BOOL)arg1;
- (BOOL)contentViewActsModal;
- (BOOL)wantsFooterForController:(id)arg1;
- (id)firstResponderSafeView;
- (void)installNone;
- (void)deactivate;
- (void)activate;
- (void)switchToViewForItem:(id)arg1;
- (void)show;
- (void)awakeFromNib;
- (id)init;

@end

