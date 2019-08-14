//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUQuickControlContentCharacteristicWritingDelegate-Protocol.h>

@class HFItemManager, NSString, _HUQuickControlContentCharacteristicWriteQueuedUpdate;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@interface HUQuickControlContentCharacteristicWritingUpdateAdapter : NSObject <HUQuickControlContentCharacteristicWritingDelegate>
{
    BOOL _shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
    id <HUQuickControlContentCharacteristicWritingDelegate> _forwardingCharacteristicWritingDelegate;
    HFItemManager *_itemManager;
    _HUQuickControlContentCharacteristicWriteQueuedUpdate *_queuedUpdate;
}

@property(retain, nonatomic) _HUQuickControlContentCharacteristicWriteQueuedUpdate *queuedUpdate; // @synthesize queuedUpdate=_queuedUpdate;
@property(readonly, nonatomic) HFItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(nonatomic) BOOL shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges; // @synthesize shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges=_shouldIssueItemUpdatesOnCharacteristicOverrideValueChanges;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> forwardingCharacteristicWritingDelegate; // @synthesize forwardingCharacteristicWritingDelegate=_forwardingCharacteristicWritingDelegate;
- (void).cxx_destruct;
- (id)_characteristicUpdateSuppressionReasonForContent:(id)arg1;
- (void)quickControlContent:(id)arg1 didEndPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContent:(id)arg1 willBeginPossibleWritesForCharacteristics:(id)arg2;
- (void)quickControlContentDidUpdateCharacteristicValueOverrides:(id)arg1;
- (void)_executeQueuedUpdate;
- (void)dealloc;
- (id)initWithItemManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

