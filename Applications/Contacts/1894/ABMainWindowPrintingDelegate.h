//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABPrintingDelegate-Protocol.h"

@class ABMainWindowViewModel, NSString, NSWindow;

@interface ABMainWindowPrintingDelegate : NSObject <ABPrintingDelegate>
{
    ABMainWindowViewModel *_mainWindowViewModel;
    NSWindow *_window;
}

- (id)photoStoreForPrinting;
- (void)printPanelDidEnd;
- (id)window;
- (unsigned long long)countOfPeopleInFocusedSelection;
- (id)nameOfFocusedGroupOrPeople;
- (id)peopleInFocusedSelection;
- (id)selectedGroups;
- (id)selectedGroup;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 window:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

