//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject
{
    BOOL _cancelled;
    NSArray *_scopeIdentifiers;
    NSString *_taskIdentifier;
}

@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy, nonatomic) NSArray *scopeIdentifiers; // @synthesize scopeIdentifiers=_scopeIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (void)cancelTask;
- (void)launch;
- (id)initWithScopeIdentifiers:(id)arg1;

@end

