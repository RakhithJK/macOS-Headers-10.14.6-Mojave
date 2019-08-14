//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFaceCrop, PHPhotoLibrary, RDFaceCrop;

@interface PHFaceCropChangeRequest : NSObject
{
    PHFaceCrop *_faceCrop;
    RDFaceCrop *_model;
    RDFaceCrop *_mutableModel;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (id)creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personId:(long long)arg3 faceCropType:(short)arg4;
+ (id)changeRequestForFaceCrop:(id)arg1;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) RDFaceCrop *mutableModel; // @synthesize mutableModel=_mutableModel;
@property(readonly, nonatomic) RDFaceCrop *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setFace:(id)arg1;
@property(nonatomic) short state;
- (id)placeholderForCreatedObject;
- (id)initWithFaceCrop:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end
