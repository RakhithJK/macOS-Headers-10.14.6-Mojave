//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INImageServing-Protocol.h>

@class INImage, INPortableImageLoader;

@protocol INImageLoading <INImageServing>
- (void)loadDataImageFromImage:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 scaledSize:(CDStruct_8caa76fc)arg3 completion:(void (^)(INImage *, NSError *))arg4;
- (BOOL)canLoadImageDataForImage:(INImage *)arg1;
@end

