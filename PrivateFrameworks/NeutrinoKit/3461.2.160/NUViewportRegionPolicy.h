//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoKit/NURegionPolicy-Protocol.h>

@class NSString, NUViewport;

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy>
{
    NUViewport *_viewport;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)regionForGeometry:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

