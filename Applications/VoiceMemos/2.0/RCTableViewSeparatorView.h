//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface RCTableViewSeparatorView : UIView
{
    CALayer *_upperSeparatorLayer;
    CALayer *_lowerSeparatorLayer;
}

+ (void)initialize;
@property(retain, nonatomic) CALayer *lowerSeparatorLayer; // @synthesize lowerSeparatorLayer=_lowerSeparatorLayer;
@property(retain, nonatomic) CALayer *upperSeparatorLayer; // @synthesize upperSeparatorLayer=_upperSeparatorLayer;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)init;

@end

