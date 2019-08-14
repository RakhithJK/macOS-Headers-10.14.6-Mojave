//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlPanelItem : HFItem <NAIdentifiable>
{
    NSString *_uniqueIdentifier;
    NSSet *_controlItems;
    NSDictionary *_displayResults;
    NSDictionary *_controlItemsByUUID;
    NSDictionary *_UUIDsByControlItemPointer;
}

+ (id)na_identity;
+ (id)standardControlPanelItemsForControlItems:(id)arg1;
+ (id)_controlPanelItemRules;
@property(readonly, nonatomic) NSDictionary *UUIDsByControlItemPointer; // @synthesize UUIDsByControlItemPointer=_UUIDsByControlItemPointer;
@property(readonly, nonatomic) NSDictionary *controlItemsByUUID; // @synthesize controlItemsByUUID=_controlItemsByUUID;
@property(readonly, nonatomic) NSDictionary *displayResults; // @synthesize displayResults=_displayResults;
@property(readonly, copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (long long)sortPriority;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)controlItemForIdentifier:(id)arg1;
- (id)identifierForControlItem:(id)arg1;
- (id)init;
- (id)initWithControlItems:(id)arg1 displayResults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

