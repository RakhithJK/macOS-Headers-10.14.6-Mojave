//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUMutableBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableTextureImage-Protocol.h>
#import <NeutrinoCore/NUSurfaceImage-Protocol.h>

@class NURegion;

@protocol NUMutableSurfaceImage <NUSurfaceImage, NUMutableBufferImage, NUMutableTextureImage>
- (void)writeSurfaceRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUSurfaceTile>, char *))arg2;
@end
