//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCDPViewControllerBase.h"

#import "AKiCSCEntryViewDelegate-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class AKiCSCEntryView, NSString, NSView;

@interface iCDPEnrollmentiCSCEntryViewController : iCDPViewControllerBase <AKiCSCEntryViewDelegate, NSTableViewDelegate>
{
    BOOL _showError;
    BOOL _showSpinner;
    NSView *_passcodePlaceholderView;
    AKiCSCEntryView *_icscEntryView;
}

@property(retain) AKiCSCEntryView *icscEntryView; // @synthesize icscEntryView=_icscEntryView;
@property BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property BOOL showError; // @synthesize showError=_showError;
@property NSView *passcodePlaceholderView; // @synthesize passcodePlaceholderView=_passcodePlaceholderView;
- (void).cxx_destruct;
- (void)didEnterCode:(id)arg1;
- (void)codeDidChange;
- (id)alternateViewIdentifier;
- (void)approveFromOtherDevicePressed:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
