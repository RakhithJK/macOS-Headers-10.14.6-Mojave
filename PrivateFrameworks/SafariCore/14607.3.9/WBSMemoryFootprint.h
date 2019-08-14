//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/NSSecureCoding-Protocol.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding>
{
    struct task_vm_info _vmInfo;
    NSArray *_zones;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(readonly, nonatomic) NSArray *zones; // @synthesize zones=_zones;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) WBSMemoryFootprintMallocZone *defaultMallocZone;
@property(readonly, nonatomic) unsigned long long dirtySize;
@property(readonly, nonatomic) unsigned long long residentSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id *)arg1;
- (id)init;

@end

