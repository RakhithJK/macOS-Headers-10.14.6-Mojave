//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SASyncAppMetaData;

@interface SASyncAnchor : AceObject <SAAceSerializable>
{
}

+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)anchor;
@property(copy, nonatomic) NSString *validity;
@property(copy, nonatomic) NSString *suspendReason;
@property(copy, nonatomic) NSNumber *suspendDurationInSeconds;
@property(copy, nonatomic) NSString *key;
@property(copy, nonatomic) NSString *intentSlotName;
@property(copy, nonatomic) NSString *generation;
@property(nonatomic) long long count;
@property(retain, nonatomic) SASyncAppMetaData *appMetaData;
@property(copy, nonatomic) NSString *appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

