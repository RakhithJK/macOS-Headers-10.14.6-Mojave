//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlViewController;

@interface HUQuickControlViewControllerGroup : NSObject
{
    HUQuickControlViewController *_primaryViewController;
    HUQuickControlViewController *_alternateViewController;
}

@property(readonly, nonatomic) HUQuickControlViewController *alternateViewController; // @synthesize alternateViewController=_alternateViewController;
@property(readonly, nonatomic) HUQuickControlViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)arg1 alternateViewController:(id)arg2;

@end

