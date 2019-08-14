//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADCanonicalRequest : NSObject
{
    BOOL _didLeaveGroup;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSObject<OS_dispatch_group> *_signingGroup;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL didLeaveGroup; // @synthesize didLeaveGroup=_didLeaveGroup;
@property(nonatomic) NSObject<OS_dispatch_group> *signingGroup; // @synthesize signingGroup=_signingGroup;
@property(nonatomic) NSObject<OS_dispatch_queue> *signingQueue; // @synthesize signingQueue=_signingQueue;
- (id)canonicalRequestForRequest:(id)arg1;
- (id)init;

@end

