//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TSReading/TSKKeyboardObserver-Protocol.h>
#import <TSReading/UITableViewDataSource-Protocol.h>
#import <TSReading/UITableViewDelegate-Protocol.h>

@class NSString, TSWPHyperlinkField, UITableViewCell;

@interface TSWPHyperlinkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver>
{
    TSWPHyperlinkField *_hyperlink;
    UITableViewCell *_editingCell;
    BOOL _readOnly;
}

@property(retain, nonatomic) TSWPHyperlinkField *hyperlink; // @synthesize hyperlink=_hyperlink;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardDidShowOrDock:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 readOnly:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

