//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIEvent, UIIndexBarDisplayEntry, UIIndexBarEntry, UIIndexBarView, UITouch, UITraitCollection;

@protocol UIIndexBarVisualStyle <NSObject>
@property(readonly, nonatomic) double minLineHeight;
@property(readonly, nonatomic) BOOL overlay;
@property(readonly, nonatomic) BOOL canBecomeFocused;
@property(nonatomic) __weak UIIndexBarView *indexBarView;
- (UIIndexBarDisplayEntry *)displayEntryFromEntry:(UIIndexBarEntry *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithView:(UIIndexBarView *)arg1;

@optional
@property(nonatomic) BOOL expanded;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
- (BOOL)updateSectionForTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)deflectionReset:(BOOL)arg1;
- (void)deflectionUpdated;
- (void)highlightedIndexUpdated;
- (void)highlightStyleUpdated;
- (void)indexColorUpdated;
- (void)sizeUpdated;
- (void)displayEntriesUpdated;
- (void)entriesUpdated;
@end

