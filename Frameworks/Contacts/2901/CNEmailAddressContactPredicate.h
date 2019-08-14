//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContactPredicate-Protocol.h>
#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNEmailAddressContactPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate>
{
    BOOL _returnsMultipleResults;
    NSString *_emailAddress;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)shortDebugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithEmailAddress:(id)arg1 returnMultipleResults:(BOOL)arg2;
- (id)cn_coreDataPredicate;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

