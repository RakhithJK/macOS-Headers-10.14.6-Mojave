//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@class NURegion;

@protocol NUSurfaceStorage <NUImageStorage>
- (long long)writeTextureInRegion:(NURegion *)arg1 block:(BOOL (^)(NUGLTexture *))arg2;
- (long long)readTextureInRegion:(NURegion *)arg1 block:(BOOL (^)(NUGLTexture *))arg2;
- (long long)writeSurfaceInRegion:(NURegion *)arg1 block:(BOOL (^)(NUIOSurface *))arg2;
- (long long)readSurfaceInRegion:(NURegion *)arg1 block:(BOOL (^)(NUIOSurface *))arg2;
@end

