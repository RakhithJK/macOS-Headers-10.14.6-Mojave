//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, SiriCoreConnectionType;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject
{
    BOOL _wwanPreferred;
    int _interfaceIndex;
    NSURL *_connectionURL;
    NSNumber *_sendBufferSize;
    SiriCoreConnectionType *_connectionType;
    NSString *_policyId;
}

@property(copy, nonatomic) NSString *policyId; // @synthesize policyId=_policyId;
@property(readonly, nonatomic) SiriCoreConnectionType *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) BOOL wwanPreferred; // @synthesize wwanPreferred=_wwanPreferred;
@property(readonly, copy, nonatomic) NSNumber *sendBufferSize; // @synthesize sendBufferSize=_sendBufferSize;
@property(readonly, nonatomic) int interfaceIndex; // @synthesize interfaceIndex=_interfaceIndex;
@property(readonly, nonatomic) NSURL *connectionURL; // @synthesize connectionURL=_connectionURL;
- (void).cxx_destruct;
- (id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 connectionType:(id)arg5 policyId:(id)arg6;

@end

