//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutBlueprint, SXLayoutOptions, SXLayoutParameters;
@protocol SXLayoutCoordinator;

@protocol SXLayoutCoordinatorDelegate <NSObject>

@optional
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willLayoutWithParameters:(SXLayoutParameters *)arg2;
@end

