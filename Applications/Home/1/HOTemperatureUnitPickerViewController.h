//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "HFItemManagerDelegate-Protocol.h"

@class HFSimpleItemManager, NSString;

@interface HOTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate>
{
    HFSimpleItemManager *_itemManager;
}

@property(retain, nonatomic) HFSimpleItemManager *itemManager; // @synthesize itemManager=_itemManager;
- (void).cxx_destruct;
- (long long)_tableRowToTemperatureUnit:(unsigned long long)arg1;
- (id)_controlItem;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithUnitItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

