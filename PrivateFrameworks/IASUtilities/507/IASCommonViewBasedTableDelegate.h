//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IASUtilities/NSTableViewDelegate-Protocol.h>

@class NSArrayController, NSMutableDictionary, NSString;

@interface IASCommonViewBasedTableDelegate : NSObject <NSTableViewDelegate>
{
    NSMutableDictionary *prototypeCellViews;
    NSArrayController *backingData;
}

@property __weak NSArrayController *backingData; // @synthesize backingData;
@property(retain) NSMutableDictionary *prototypeCellViews; // @synthesize prototypeCellViews;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 widthOfRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (struct CGSize)tableView:(id)arg1 sizeOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)viewIdenfierForTableView:(id)arg1 andRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)prototypeViewForIdentifier:(id)arg1 inTableView:(id)arg2;
- (id)makeNewCellViewWithIdentifier:(id)arg1 forTableView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

