//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/_NUAbstractBufferStorage.h>

#import <NeutrinoCore/NUPurgeableStorage-Protocol.h>
#import <NeutrinoCore/NUSurfaceStorage-Protocol.h>

@class NSString, NUGLTexture, NUIOSurface, NUPixelFormat, NURegion;

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage>
{
    long long _purgeLevel;
    BOOL _purgeable;
    NUIOSurface *_surface;
    NUGLTexture *_texture;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)writeTextureInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readTextureInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeSurfaceInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readSurfaceInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)isPurged;
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)purgeLevel;
- (BOOL)isPurgeable;
- (id)_texture;
- (void)_allocateSurface;
@property(readonly) long long sizeInBytes;
- (long long)rowBytes;
- (id)initWithSurface:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NUPixelFormat *format;
@property(readonly) unsigned long long hash;
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) Class superclass;
@property(readonly) NURegion *validRegion;

@end

