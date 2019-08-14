//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TListTextField.h>

@class FI_TListViewController;

__attribute__((visibility("hidden")))
@interface FI_TListNameField : FI_TListTextField
{
    FI_TListViewController *_controller;
    _Bool _becomingFirstResponder;
    _Bool _shouldEdit;
    double _maxWidthAvailable;
}

+ (Class)cellClass;
@property(nonatomic) double maxWidthAvailable; // @synthesize maxWidthAvailable=_maxWidthAvailable;
@property(nonatomic) _Bool shouldEdit; // @synthesize shouldEdit=_shouldEdit;
@property(nonatomic) _Bool becomingFirstResponder; // @synthesize becomingFirstResponder=_becomingFirstResponder;
@property(nonatomic) FI_TListViewController *controller; // @synthesize controller=_controller;
- (struct CGSize)intrinsicContentSize;
- (_Bool)isLTRLocalization;
- (struct CGRect)editorViewMaxFrame;
- (void)updateTextColor;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)initCommon;

@end

