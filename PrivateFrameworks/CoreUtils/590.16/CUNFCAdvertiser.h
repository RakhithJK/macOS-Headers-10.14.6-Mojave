//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CUNFCAdvertiser : NSObject
{
    BOOL _invalidateCalled;
    NSURL *_advertisementURI;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _tagStateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType tagStateChangedHandler; // @synthesize tagStateChangedHandler=_tagStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSURL *advertisementURI; // @synthesize advertisementURI=_advertisementURI;
- (void).cxx_destruct;
- (void)_invalidateWithError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

