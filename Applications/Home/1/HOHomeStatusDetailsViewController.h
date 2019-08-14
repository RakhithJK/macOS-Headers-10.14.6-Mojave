//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import "HUAboutResidentDeviceViewControllerDelegate-Protocol.h"
#import "HUSoftwareUpdateUIPresentationDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class HOHomeStatusDetailsItemManager, HOStatusDetailsTitleDescriptionCell, NSMutableDictionary, NSString;
@protocol HOHomeStatusDetailsViewControllerDelegate;

@interface HOHomeStatusDetailsViewController : HUServiceGridViewController <HUAboutResidentDeviceViewControllerDelegate, UITextViewDelegate, HUSoftwareUpdateUIPresentationDelegate>
{
    HOStatusDetailsTitleDescriptionCell *_sizingTitleDescriptionCell;
    id <HOHomeStatusDetailsViewControllerDelegate> _delegate;
    NSMutableDictionary *_sizingCellForClassString;
}

@property(retain, nonatomic) NSMutableDictionary *sizingCellForClassString; // @synthesize sizingCellForClassString=_sizingCellForClassString;
@property(nonatomic) __weak id <HOHomeStatusDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (void)layoutOptionsDidChange;
- (void)doneButtonPressed:(id)arg1;
@property(readonly, nonatomic) HOStatusDetailsTitleDescriptionCell *sizingTitleDescriptionCell; // @synthesize sizingTitleDescriptionCell=_sizingTitleDescriptionCell;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HOHomeStatusDetailsItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

