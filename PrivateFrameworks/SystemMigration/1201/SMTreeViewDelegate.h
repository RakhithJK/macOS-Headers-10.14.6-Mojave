//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemMigration/NSOutlineViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SMTreeViewDelegate : NSObject <NSOutlineViewDelegate>
{
    NSMutableDictionary *prototypeCellViews;
}

@property(retain) NSMutableDictionary *prototypeCellViews; // @synthesize prototypeCellViews;
- (void).cxx_destruct;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)prototypeViewForIdentifier:(id)arg1 inOutlineView:(id)arg2;
- (id)viewIdentiferAppropriateToItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

