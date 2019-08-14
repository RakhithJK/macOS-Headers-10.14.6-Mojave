//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUQuickControlPanningContext : NSObject
{
    BOOL _requiresSomeMovementBeforeActivation;
    double _initialSliderValue;
    double _verticalDragCoefficient;
    struct CGRect _controlFrame;
}

@property(nonatomic) BOOL requiresSomeMovementBeforeActivation; // @synthesize requiresSomeMovementBeforeActivation=_requiresSomeMovementBeforeActivation;
@property(nonatomic) double verticalDragCoefficient; // @synthesize verticalDragCoefficient=_verticalDragCoefficient;
@property(nonatomic) double initialSliderValue; // @synthesize initialSliderValue=_initialSliderValue;
@property(nonatomic) struct CGRect controlFrame; // @synthesize controlFrame=_controlFrame;
- (void)assertConfigurationIsValid;
- (id)init;

@end

