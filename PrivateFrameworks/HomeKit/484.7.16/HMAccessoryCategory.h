//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFDumpState-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState>
{
    NSString *_categoryType;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)dumpState;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
@property(readonly, copy) NSString *description;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

