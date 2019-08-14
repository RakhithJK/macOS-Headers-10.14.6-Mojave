//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecentProxyInfo : NSObject
{
    NSString *_processName;
    NSMutableSet *_containerIdentifiers;
    NSDate *_lastSeen;
    unsigned long long _connectionCount;
    NSMutableDictionary *_operationStatisticsByClassName;
}

@property(readonly, nonatomic) NSMutableDictionary *operationStatisticsByClassName; // @synthesize operationStatisticsByClassName=_operationStatisticsByClassName;
@property(readonly) unsigned long long connectionCount; // @synthesize connectionCount=_connectionCount;
@property(readonly, nonatomic) NSDate *lastSeen; // @synthesize lastSeen=_lastSeen;
@property(readonly, nonatomic) NSMutableSet *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)mergeProxy:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end
