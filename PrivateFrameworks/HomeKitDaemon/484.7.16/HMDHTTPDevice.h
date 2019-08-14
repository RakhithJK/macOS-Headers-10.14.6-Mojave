//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString, NSUUID;

@interface HMDHTTPDevice : HMFObject <HMFLogging>
{
    NSUUID *_identifier;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

