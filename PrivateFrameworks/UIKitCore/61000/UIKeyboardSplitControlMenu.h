//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardMenuView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
    struct CGSize m_preferredSize;
    NSArray *_items;
    CDUnknownBlockType _finishSplitTransitionBlock;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType finishSplitTransitionBlock; // @synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock;
- (void)didFinishSplitTransition;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)setSplitAndUndocked:(BOOL)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (int)visibleItemForIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSelectedIndex;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (void)actionForItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

