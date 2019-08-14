//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "HPDQueryDelegate-Protocol.h"

@class HVWebDelegate, NSMutableArray, NSString;

@interface HVHelpTopicsURLProtocol : NSURLProtocol <HPDQueryDelegate>
{
    HVWebDelegate *_webDelegate;
    NSMutableArray *_results;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)registerProtocol;
+ (id)userInfoKey;
+ (id)scheme;
- (void).cxx_destruct;
- (void)helpQueryDidFinishSearching:(id)arg1;
- (void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnResults:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

