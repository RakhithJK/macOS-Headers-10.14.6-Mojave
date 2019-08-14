//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NanoRegistry/NRPBSwitchRecord.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>
{
}

+ (id)switchRecordWithHistoryEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *activeDeviceID;
@property(retain, nonatomic) NSDate *date;
- (id)initWithDeviceID:(id)arg1 date:(id)arg2 switchIndex:(unsigned int)arg3;

@end

