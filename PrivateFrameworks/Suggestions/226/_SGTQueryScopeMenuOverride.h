//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Suggestions/NSTableViewDataSource-Protocol.h>
#import <Suggestions/NSTableViewDelegate-Protocol.h>

@class NSString;

@interface _SGTQueryScopeMenuOverride : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    SEL _action;
    id _target;
    NSString *_item;
    NSString *_title;
    NSString *_spinnerMessage;
    BOOL _spin;
}

@property BOOL spin; // @synthesize spin=_spin;
- (void).cxx_destruct;
- (BOOL)searchFieldCell:(id)arg1 shouldChangeCancelButtonVisibility:(BOOL)arg2;
- (void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)completionTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)performAction;
- (id)initWithAction:(SEL)arg1 target:(id)arg2 item:(id)arg3 title:(id)arg4 spinnerMessage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

