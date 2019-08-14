//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace;
@protocol NUScalePolicy;

@interface NULivePhotoRenderRequest : NURenderRequest
{
    id <NUScalePolicy> _scalePolicy;
    NUColorSpace *_colorSpace;
}

@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (void).cxx_destruct;
- (id)livePhotoRenderResultFromPhotoResponse:(id)arg1 videoResponse:(id)arg2 propertiesResponse:(id)arg3 error:(out id *)arg4;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end

