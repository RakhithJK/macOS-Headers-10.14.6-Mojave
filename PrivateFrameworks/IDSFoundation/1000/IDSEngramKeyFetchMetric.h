//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface IDSEngramKeyFetchMetric : NSObject <CUTCoreAnalyticsMetric>
{
    NSError *_keyFetchError;
}

@property(readonly, nonatomic) NSError *keyFetchError; // @synthesize keyFetchError=_keyFetchError;
- (void).cxx_destruct;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithKeyFetchError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

