//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TXRDeferredElementInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    NSMutableArray *_faces;
}

@property(readonly, nonatomic) NSMutableArray *faces; // @synthesize faces=_faces;
- (void).cxx_destruct;
- (id)initAsCubemap:(BOOL)arg1;

@end

