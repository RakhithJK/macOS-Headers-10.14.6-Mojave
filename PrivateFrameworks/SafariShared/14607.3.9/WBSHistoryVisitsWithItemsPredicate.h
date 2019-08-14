//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsWithItemsPredicate : NSObject <WBSHistoryVisitPredicate>
{
    WBSSetInt64 *_itemIdentifiers;
    WBSSetInt64 *_ignoredVisitIdentifiers;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)evaluateServiceVisit:(id)arg1;
- (BOOL)evaluateVisit:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoryItems:(id)arg1 ignoreVisits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

