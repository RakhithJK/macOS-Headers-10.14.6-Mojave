//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject
{
    CATRemoteConnection *mConnection;
    // Error parsing type: AB, name: mHasResponded
    id _trust;
}

@property(readonly) id trust; // @synthesize trust=_trust;
- (void).cxx_destruct;
- (void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg1;
- (id)initWithConnection:(id)arg1 trust:(struct __SecTrust *)arg2;
- (void)dealloc;

@end

