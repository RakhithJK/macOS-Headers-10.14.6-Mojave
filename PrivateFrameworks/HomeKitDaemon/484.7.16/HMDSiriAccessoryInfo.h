//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDSiriAccessoryInfo : NSObject
{
    BOOL _supportsDragonSiri;
    id _targetsAccessory;
}

+ (id)infoWithTargetableAccessory:(id)arg1;
@property(nonatomic) BOOL supportsDragonSiri; // @synthesize supportsDragonSiri=_supportsDragonSiri;
@property(nonatomic) __weak id targetsAccessory; // @synthesize targetsAccessory=_targetsAccessory;
- (void).cxx_destruct;
- (BOOL)isActiveAndSupportsDragonSiri;

@end

