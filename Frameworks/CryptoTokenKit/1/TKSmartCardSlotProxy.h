//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSlotNotification-Protocol.h>

@class NSHashTable, TKSmartCardSlot;

__attribute__((visibility("hidden")))
@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification>
{
    TKSmartCardSlot *_slot;
    NSHashTable *_cards;
}

@property(readonly) NSHashTable *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (id)initWithSlot:(id)arg1;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)arg1;

@end

