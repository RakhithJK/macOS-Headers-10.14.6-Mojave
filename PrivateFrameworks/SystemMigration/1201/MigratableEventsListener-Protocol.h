//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary;

@protocol MigratableEventsListener
- (void)requestUIFocusOnSystem:(id)arg1;
- (void)systemChanged:(NSDictionary *)arg1;
- (void)systemDisappeared:(NSDictionary *)arg1;
- (void)systemAppeared:(NSDictionary *)arg1;
@end
