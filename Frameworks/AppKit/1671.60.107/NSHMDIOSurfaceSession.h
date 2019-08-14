//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSColorSpace, NSHMDDevice, NSMutableDictionary, NSSLSHMD;

@interface NSHMDIOSurfaceSession : NSObject
{
    NSHMDDevice *_device;
    struct _opaque_pthread_mutex_t _mutex;
    NSSLSHMD *_hmd;
    NSMutableDictionary *_configuration;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (void)invalidate;
@property(readonly, getter=isValid) BOOL valid;
- (id)displayLinkWithHandler:(CDUnknownBlockType)arg1;
@property(readonly) unsigned int preferredAcceleratorPort;
@property(readonly) unsigned int preferredDrawablePixelFormat;
@property(readonly, copy) NSArray *supportedDrawablePixelFormats;
@property(readonly) struct CGSize maxDrawableSize;
@property(readonly) struct CGSize minDrawableSize;
@property(readonly) struct CGSize preferredDrawableSize;
- (id)nextDrawable;
- (void)setDrawableCount:(long long)arg1;
- (long long)drawableCount;
@property(retain) NSColorSpace *drawableColorSpace;
@property unsigned int drawablePixelFormat;
@property struct CGSize drawableSize;
@property(readonly) NSHMDDevice *device;

@end

