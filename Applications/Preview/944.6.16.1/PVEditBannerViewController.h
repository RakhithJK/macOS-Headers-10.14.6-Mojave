//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVBannerViewController.h"

@class AKController, NSView, PVSubToolbarItemView, PVWindowController;

@interface PVEditBannerViewController : PVBannerViewController
{
    PVSubToolbarItemView *_itemView;
    long long _contentViewKind;
    AKController *_annotationController;
    NSView *_akToolbarHolderView;
}

+ (long long)bannerSortOrder;
@property(nonatomic) __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
@property(readonly) PVSubToolbarItemView *subToolbarItemView; // @synthesize subToolbarItemView=_itemView;
- (void).cxx_destruct;
- (void)setContentViewKind:(long long)arg1;
- (BOOL)validateSubToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)controlHit:(id)arg1;
- (void)updateToolsNotification:(id)arg1;
- (void)_validateToolbarItemsWithSelector:(SEL)arg1 afterDelay:(double)arg2;
- (void)_validateSubToolbarCropItem:(id)arg1;
- (void)_validateSubToolbarItems:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didUninstallBannerView;
- (void)didInstallBannerView;
- (void)installWithAnimation:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
@property(readonly) PVWindowController *windowController;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

