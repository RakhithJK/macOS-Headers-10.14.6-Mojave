//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter
{
    BOOL _didReachThreshold;
    double _offset;
    double _hysteresis;
}

@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(readonly, nonatomic) double outputDerivative;
- (double)updatedOutput;

@end

