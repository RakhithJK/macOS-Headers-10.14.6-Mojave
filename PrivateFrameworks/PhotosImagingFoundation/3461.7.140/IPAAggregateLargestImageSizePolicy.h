//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy
{
    NSArray *_policies;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(struct CGSize)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (BOOL)isBestFitPolicy;
- (id)initWithPolicies:(id)arg1;

@end

