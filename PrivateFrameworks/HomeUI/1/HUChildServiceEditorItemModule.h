//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HFServiceItemProvider, HMAccessory, HMHome, NSSet;
@protocol HFServiceLikeItem;

@interface HUChildServiceEditorItemModule : HFItemModule
{
    NSSet *_itemProviders;
    HFItem<HFServiceLikeItem> *_sourceItem;
    HFServiceItemProvider *_childServiceItemProvider;
    unsigned long long _editingMode;
    HMHome *_home;
}

+ (CDUnknownBlockType)childItemComparator;
+ (id)supportedServiceTypes;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property(retain, nonatomic) HFServiceItemProvider *childServiceItemProvider; // @synthesize childServiceItemProvider=_childServiceItemProvider;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // @synthesize sourceItem=_sourceItem;
- (void).cxx_destruct;
- (id)toggleConfigurationStateForItem:(id)arg1;
- (BOOL)canToggleConfigurationStateForItem:(id)arg1;
- (long long)configurationStateForItem:(id)arg1;
- (id)_isConfiguredControlItemForItem:(id)arg1;
- (id)_createItemProviders;
- (id)itemProviders;
@property(readonly, nonatomic) HMAccessory *accessory;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4;

@end

