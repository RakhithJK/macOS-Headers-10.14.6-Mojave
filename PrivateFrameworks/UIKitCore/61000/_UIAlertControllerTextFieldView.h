//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UITextField, _UIAlertControllerTextField;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldView : UIView
{
    UIView *_containerView;
    _UIAlertControllerTextField *_textField;
    NSArray *_containerViewConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView;
@property(readonly) UITextField *textField;
- (id)_textFieldFont;
- (double)_borderWidth;
- (void)_loadConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

