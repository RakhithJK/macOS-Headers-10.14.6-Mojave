//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SyncServices/ISDDataObject.h>

#import <SyncServices/NSCoding-Protocol.h>
#import <SyncServices/NSCopying-Protocol.h>

@class NSArray, NSCalendarDate, NSString;

@interface ISDSyncState : ISDDataObject <NSCopying, NSCoding>
{
    NSString *_entityName;
    NSArray *_propertyNames;
    NSCalendarDate *_lastSyncDate;
    int _lastSyncStatus;
    unsigned int _lastSyncGeneration;
    int _syncMode;
    int _requestedMode;
    BOOL _clientCanPullOnly;
    BOOL _clientCanPushOnly;
    BOOL _enabled;
    BOOL _clientWantsToPullTruth;
    BOOL _shouldRefilter;
}

+ (void)initialize;
- (void)setRequestedSyncMode:(int)arg1;
- (int)requestedSyncMode;
- (void)setShouldRefilter:(BOOL)arg1;
- (BOOL)shouldRefilter;
- (void)setClientWantsToPullTruth:(BOOL)arg1;
- (BOOL)clientWantsToPullTruth;
- (void)setClientCanPushOnly:(BOOL)arg1;
- (BOOL)clientCanPushOnly;
- (void)setClientCanPullOnly:(BOOL)arg1;
- (BOOL)clientCanPullOnly;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (BOOL)_isSupportedEntity;
- (void)setSyncMode:(int)arg1;
- (int)syncMode;
- (void)setLastSyncGeneration:(unsigned int)arg1;
- (unsigned int)lastSyncGeneration;
- (void)setLastSyncStatus:(int)arg1;
- (int)lastSyncStatus;
- (void)setLastSyncDate:(id)arg1;
- (id)lastSyncDate;
- (void)setPropertyNames:(id)arg1;
- (id)propertyNames;
- (id)entityName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityName:(id)arg1 propertyNames:(id)arg2;
- (id)fastPropertyNames;
- (id)fastEntityName;

@end

