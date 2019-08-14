//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NanoRegistry/NRPBSwitchRecordCollection.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (void)truncateSwitchRecords;
- (id)initWithHistoryEntries:(id)arg1;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (void)addSwitchRecordWithHistoryEntry:(id)arg1;

@end

