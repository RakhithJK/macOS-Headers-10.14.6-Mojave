//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl
{
    UIButton *_infoButton;
    UIImageView *_disclosureView;
}

- (void).cxx_destruct;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 shouldReverseLayoutDirection:(BOOL)arg4;

@end

