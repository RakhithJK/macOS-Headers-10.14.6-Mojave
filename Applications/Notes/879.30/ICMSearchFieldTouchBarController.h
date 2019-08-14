//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMAppTouchBarController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class ICMSearchField, NSCustomTouchBarItem, NSSegmentedControl, NSString, NSTouchBar;

@interface ICMSearchFieldTouchBarController : ICMAppTouchBarController <NSTouchBarDelegate>
{
    BOOL _accountSelectionVisible;
    ICMSearchField *_searchField;
    NSTouchBar *_internalTouchBar;
    NSSegmentedControl *_accountsSegmentedControl;
    NSCustomTouchBarItem *_accountsBarItem;
    NSCustomTouchBarItem *_addNoteBarItem;
}

@property(retain, nonatomic) NSCustomTouchBarItem *addNoteBarItem; // @synthesize addNoteBarItem=_addNoteBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *accountsBarItem; // @synthesize accountsBarItem=_accountsBarItem;
@property(retain, nonatomic) NSSegmentedControl *accountsSegmentedControl; // @synthesize accountsSegmentedControl=_accountsSegmentedControl;
@property(retain, nonatomic) NSTouchBar *internalTouchBar; // @synthesize internalTouchBar=_internalTouchBar;
@property(nonatomic) __weak ICMSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) BOOL accountSelectionVisible; // @synthesize accountSelectionVisible=_accountSelectionVisible;
- (void).cxx_destruct;
- (void)ensureEqualWidthsForSegmentedControl:(id)arg1;
- (void)accountsSegmentedControlDidChange:(id)arg1;
- (void)updateSearchScope;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSearchField:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
