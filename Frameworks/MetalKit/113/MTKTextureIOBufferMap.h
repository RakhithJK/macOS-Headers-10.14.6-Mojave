//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalKit/TXRBufferMap-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap>
{
    void *_bytes;
}

@property(readonly, nonatomic) void *bytes;
- (id)initWithContents:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

