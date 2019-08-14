//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXTouchBarProvider-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class IPXEditToolContentController, NSArray, NSString;

@interface IPXEditToolController : IPXViewController <NSPopoverDelegate, IPXTouchBarProvider>
{
    BOOL _preventMouseEventsOnToolbar;
    IPXEditToolContentController *_contentViewController;
    NSString *_actionName;
}

+ (id)separatorView;
@property(nonatomic) BOOL preventMouseEventsOnToolbar; // @synthesize preventMouseEventsOnToolbar=_preventMouseEventsOnToolbar;
@property(readonly) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) IPXEditToolContentController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBarIdentifiers;
- (void)updateResetButton;
- (void)layoutChangedAnimated:(BOOL)arg1;
- (void)didDeselectItemController:(id)arg1;
- (void)willDeselectItemController:(id)arg1;
- (void)didSelectItemController:(id)arg1;
- (void)willSelectItemController:(id)arg1;
- (void)setupNewItemController:(id)arg1;
- (BOOL)preventsZoom;
- (BOOL)wantsVisualEffectBackground;
- (void)willCloseEditingSession;
- (void)prepareForEndEditing;
- (void)prepareForRevertToOriginal;
- (void)prepareForBeginEditingFullScreen:(BOOL)arg1;
- (long long)viewerMode;
- (void)versionDidBecomeAvailable;
- (void)versionDidChangeOperationAtIndex:(long long)arg1;
- (void)versionDidChangeOrientation;
- (void)versionDidChangeOperations;
- (void)versionDidChangeMetadata;
- (BOOL)isValidForVersion:(id)arg1;
- (double)contentWidth;
@property(readonly, nonatomic) NSArray *toolOverlayControllers;
- (double)toolWidth;
- (void)didBecomeInactive;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)loadView;
- (id)initWithAction:(id)arg1 contentViewController:(id)arg2 undoRedoDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
