//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_entries;
    NSMutableArray *_pendingEntries;
    NSSet *_recipientIdentifiers;
    NSSet *_senderIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *pendingEntries; // @synthesize pendingEntries=_pendingEntries;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) NSSet *senderIdentifiers; // @synthesize senderIdentifiers=_senderIdentifiers;
@property(readonly, nonatomic) NSSet *recipientIdentifiers; // @synthesize recipientIdentifiers=_recipientIdentifiers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *senderIdentifier; // @dynamic senderIdentifier;
@property(readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property(readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property(readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property(readonly, nonatomic) NSString *aggregateText;
- (BOOL)hasPendingEntries;
- (void)appendPendingEntriesFromInputContextHistory:(id)arg1;
- (void)enumeratePendingEntries:(CDUnknownBlockType)arg1;
- (void)enumerateAllEntries:(CDUnknownBlockType)arg1;
- (void)_enumerateAllEntriesAsInputContextEntries:(CDUnknownBlockType)arg1;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assertCheckpointForCoding;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;

@end

