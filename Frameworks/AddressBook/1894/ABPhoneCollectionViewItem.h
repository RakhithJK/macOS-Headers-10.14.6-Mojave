//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

#import <AddressBook/ABCollectionItemMessagingAvailabilityHelperDelegate-Protocol.h>

@class ABCollectionItemMessagingAvailabilityHelper, ABRTTServices;

@interface ABPhoneCollectionViewItem : ABCollectionViewItem <ABCollectionItemMessagingAvailabilityHelperDelegate>
{
    ABCollectionItemMessagingAvailabilityHelper *_messagingHelper;
    ABRTTServices *_ttyServices;
}

@property(retain, nonatomic) ABRTTServices *ttyServices; // @synthesize ttyServices=_ttyServices;
@property(retain, nonatomic) ABCollectionItemMessagingAvailabilityHelper *messagingHelper; // @synthesize messagingHelper=_messagingHelper;
- (void).cxx_destruct;
- (void)messagingAvailabilityDidChangeHelper:(id)arg1;
- (BOOL)shouldShowGlyphButton:(id)arg1;
- (void)didRemoveFromCollection:(id)arg1;
- (void)startPhoneNumberAvailabilityLookup;
- (void)didInsertIntoCollectionView:(id)arg1;
- (id)init;

@end

