//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo;

__attribute__((visibility("hidden")))
@interface _MNTrackedAlternateRoute : NSObject
{
    MNActiveRouteInfo *_alternateRoute;
    MNActiveRouteInfo *_mainRoute;
    CDStruct_3f2a7a20 _divergenceCoordinate;
}

@property(nonatomic) CDStruct_3f2a7a20 divergenceCoordinate; // @synthesize divergenceCoordinate=_divergenceCoordinate;
@property(retain, nonatomic) MNActiveRouteInfo *mainRoute; // @synthesize mainRoute=_mainRoute;
@property(retain, nonatomic) MNActiveRouteInfo *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
- (void).cxx_destruct;

@end

