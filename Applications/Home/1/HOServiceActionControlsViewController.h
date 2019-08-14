//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HOServiceActionControlsItemManagerDelegate-Protocol.h"
#import "HUControlPanelControllerDelegate-Protocol.h"
#import "HUDetailsPresentationDelegateHost-Protocol.h"

@class HFServiceActionItem, HUControlPanelController, NSString;
@protocol HOServiceActionControlsViewControllerDelegate, HUPresentationDelegate;

@interface HOServiceActionControlsViewController : HUItemTableViewController <HOServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost>
{
    BOOL _requiresPresentingViewControllerDismissal;
    id <HUPresentationDelegate> _presentationDelegate;
    HFServiceActionItem *_serviceActionItem;
    unsigned long long _mode;
    id <HOServiceActionControlsViewControllerDelegate> _serviceActionControlsDelegate;
    HUControlPanelController *_controlPanelController;
}

@property(retain, nonatomic) HUControlPanelController *controlPanelController; // @synthesize controlPanelController=_controlPanelController;
@property(nonatomic) __weak id <HOServiceActionControlsViewControllerDelegate> serviceActionControlsDelegate; // @synthesize serviceActionControlsDelegate=_serviceActionControlsDelegate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) HFServiceActionItem *serviceActionItem; // @synthesize serviceActionItem=_serviceActionItem;
@property(nonatomic) BOOL requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (BOOL)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (BOOL)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_done:(id)arg1;
- (void)viewDidLoad;
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

