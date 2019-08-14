//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol IDSLinkDelegate;

@protocol IDSLink <NSObject>
@property __weak id <IDSLinkDelegate> alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate;
@property(readonly) unsigned long long headerOverhead;
@property(readonly) unsigned long long state;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(retain) NSString *deviceUniqueID;
@property(retain) NSString *cbuuid;
- (NSDictionary *)copyLinkStatsDict;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_18fdc6f4 *)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;

@optional
- (void)start;
@end

