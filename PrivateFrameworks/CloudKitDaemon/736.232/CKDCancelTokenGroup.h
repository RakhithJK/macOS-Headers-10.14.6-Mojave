//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDCancelTokenGroup : NSObject <CKDCancelling>
{
    NSMutableArray *_cancelTokens;
}

@property(retain, nonatomic) NSMutableArray *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
- (void).cxx_destruct;
- (void)cancel;
- (void)removeAllCancelTokens;
- (void)removeCancelToken:(id)arg1;
- (void)addCancelToken:(id)arg1 withOperation:(id)arg2;
- (id)init;

@end

