//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContainerScopedGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDGroupsInContainerPredicate : CNPredicate <CNCDContainerScopedGroupPredicate>
{
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)cn_coreDataExchangePredicate;
- (id)cn_coreDataPredicate;
- (id)containerIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

