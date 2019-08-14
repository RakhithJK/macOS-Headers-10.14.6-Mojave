//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSPopUpButton;

@interface RichMessageListSortView : NSTableRowView
{
    id _target;
    SEL _clickAction;
    NSPopUpButton *_sortButton;
}

@property(nonatomic) __weak NSPopUpButton *sortButton; // @synthesize sortButton=_sortButton;
@property(nonatomic) SEL clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)awakeFromNib;
- (void)_richMessageListSortViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

