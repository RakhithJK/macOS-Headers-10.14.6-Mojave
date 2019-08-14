//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>
#import <HomeKit/_HMLocationHandlerDelegate-Protocol.h>

@class CLRegion;

@interface HMLocationEvent : HMEvent <_HMLocationHandlerDelegate, NSSecureCoding, NSCopying, NSMutableCopying>
{
    int _locationAuthorization;
    CLRegion *_region;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
@property(nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)didUpdateAuthorization:(int)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_retrieveLocationEvent;
- (void)_updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) CLRegion *region; // @synthesize region=_region;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (id)initWithDict:(id)arg1 region:(id)arg2;
- (id)initWithRegion:(id)arg1;

@end

