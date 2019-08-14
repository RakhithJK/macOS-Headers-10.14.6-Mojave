//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFNoRemoteAccessStatusDetailsItem, HFProgrammableSwitchItemProvider, HFResidentDeviceStatusDetailsItemProvider, HFStaticItem, HUFirmwareUpdateItemProvider, HUSoftwareUpdateActionAndProgressItem, HUSoftwareUpdateInfoItemProvider, NSArray, NSMutableSet;

@interface HOHomeStatusDetailsItemManager : HFItemManager
{
    HFStaticItem *_learnMoreItem;
    HFResidentDeviceStatusDetailsItemProvider *_residentDeviceStatusItemProvider;
    HUFirmwareUpdateItemProvider *_firmwareUpdateItemProvider;
    HUSoftwareUpdateInfoItemProvider *_softwareUpdateItemProvider;
    HFProgrammableSwitchItemProvider *_programmableSwitchItemProvider;
    HFNoRemoteAccessStatusDetailsItem *_noRemoteAccessItem;
    HUSoftwareUpdateActionAndProgressItem *_softwareUpdateActionAndProgressItem;
    NSArray *_cachedSectionIdentifiers;
    NSMutableSet *_minimumPriorityItemTuples;
}

+ (id)_sectionIdentifierForPriority:(long long)arg1;
@property(retain, nonatomic) NSMutableSet *minimumPriorityItemTuples; // @synthesize minimumPriorityItemTuples=_minimumPriorityItemTuples;
@property(retain, nonatomic) NSArray *cachedSectionIdentifiers; // @synthesize cachedSectionIdentifiers=_cachedSectionIdentifiers;
@property(retain, nonatomic) HUSoftwareUpdateActionAndProgressItem *softwareUpdateActionAndProgressItem; // @synthesize softwareUpdateActionAndProgressItem=_softwareUpdateActionAndProgressItem;
@property(retain, nonatomic) HFNoRemoteAccessStatusDetailsItem *noRemoteAccessItem; // @synthesize noRemoteAccessItem=_noRemoteAccessItem;
@property(retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider; // @synthesize programmableSwitchItemProvider=_programmableSwitchItemProvider;
@property(retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateItemProvider; // @synthesize softwareUpdateItemProvider=_softwareUpdateItemProvider;
@property(retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider; // @synthesize firmwareUpdateItemProvider=_firmwareUpdateItemProvider;
@property(retain, nonatomic) HFResidentDeviceStatusDetailsItemProvider *residentDeviceStatusItemProvider; // @synthesize residentDeviceStatusItemProvider=_residentDeviceStatusItemProvider;
@property(retain, nonatomic) HFStaticItem *learnMoreItem; // @synthesize learnMoreItem=_learnMoreItem;
- (void).cxx_destruct;
- (id)_minimumPriorityNumberForItem:(id)arg1;
- (long long)_effectivePriorityForItem:(id)arg1;
- (BOOL)shouldHideItem:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_separateSectionIdentifierForItem:(id)arg1;
- (BOOL)_shouldUseSeparateSectionForItem:(id)arg1;
- (BOOL)_shouldUseSoftwareUpdateSectionForItem:(id)arg1;
- (BOOL)_shouldUseLowBatterySectionForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)resetItemPrioritiesToDefaults;
- (void)maintainMinimumPriorityForItem:(id)arg1;
- (BOOL)shouldUseTitleDescriptionStyleForItem:(id)arg1;

@end

