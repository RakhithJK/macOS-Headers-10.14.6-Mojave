//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/UIScrollViewDelegate-Protocol.h>

@class SXItemizedScrollView;

@protocol SXItemizedScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didHideViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 willShowViewWithIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(SXItemizedScrollView *)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
@end
