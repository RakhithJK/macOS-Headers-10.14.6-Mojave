//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

__attribute__((visibility("hidden")))
@interface FI_TInlineProgressView : FI_TUpdateLayerView
{
    _Bool _dimmed;
    struct TNSRef<FI_TPieChartProgressLayer, void> _pieChartLayer;
    struct TNSRef<NSView, void> _templateImageView;
}

@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isProgressAnimationCompleted;
- (void)setProgressDidCompleteHandler:(const function_b1fce659 *)arg1;
@property(nonatomic) double progress; // @dynamic progress;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)initCommon;

@end

