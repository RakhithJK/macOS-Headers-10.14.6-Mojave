//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRReusableCellVisibilityContext, FRReusableCellVisibilityMonitor, NSDate, NSIndexPath, UIView;

@protocol FRReusableCellVisibilityMonitorDelegate <NSObject>
- (void)reusableCellVisibilityMonitor:(FRReusableCellVisibilityMonitor *)arg1 eventsForContext:(FRReusableCellVisibilityContext *)arg2 becameVisibileAt:(NSDate *)arg3 becameInvisibleAt:(NSDate *)arg4;
- (FRReusableCellVisibilityContext *)reusableCellVisibilityMonitor:(FRReusableCellVisibilityMonitor *)arg1 contextForCell:(UIView *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

