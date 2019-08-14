//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, NSError, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordFetchInfo : NSObject
{
    BOOL _ignoreErrors;
    double _startDate;
    unsigned long long _fetchOrder;
    CKRecordID *_recordID;
    NSString *_etag;
    unsigned long long _state;
    CKRecord *_record;
    NSError *_error;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_source> *_recordReadySource;
}

@property(nonatomic) BOOL ignoreErrors; // @synthesize ignoreErrors=_ignoreErrors;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // @synthesize recordReadySource=_recordReadySource;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) unsigned long long fetchOrder; // @synthesize fetchOrder=_fetchOrder;
@property(readonly, nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (void)performCallback;
- (id)initWithAggregator:(id)arg1;

@end

