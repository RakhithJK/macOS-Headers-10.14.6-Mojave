//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class FBADetailViewController, NSString;
@protocol FBADetailWindowDelegate, FBAMailboxContent;

@interface FBADetailWindowController : NSWindowController <NSWindowDelegate>
{
    id <FBADetailWindowDelegate> _delegate;
    FBADetailViewController *_detailViewController;
    NSString *_representedItemKey;
}

@property(retain) NSString *representedItemKey; // @synthesize representedItemKey=_representedItemKey;
@property(retain) FBADetailViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property __weak id <FBADetailWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tryToCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)canCloseImmediately;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)updateWindowTitle;
@property(retain, nonatomic) id <FBAMailboxContent> representedItem;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

