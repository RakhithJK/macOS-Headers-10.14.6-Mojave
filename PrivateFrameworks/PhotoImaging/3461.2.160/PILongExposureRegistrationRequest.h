//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NSDictionary;

@interface PILongExposureRegistrationRequest : NURenderRequest
{
    NSDictionary *_recipe;
    CDStruct_996ac03c _cleanAperture;
}

@property(nonatomic) CDStruct_996ac03c cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(copy, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

