//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNKeyDescriptor-Protocol.h>
#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>
{
    NSMutableDictionary *_propertiesByIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *propertiesByIdentifier; // @synthesize propertiesByIdentifier=_propertiesByIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

