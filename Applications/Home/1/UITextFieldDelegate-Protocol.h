//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITextField;

@protocol UITextFieldDelegate <NSObject>

@optional
- (BOOL)textFieldShouldReturn:(UITextField *)arg1;
- (BOOL)textFieldShouldClear:(UITextField *)arg1;
- (BOOL)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (BOOL)textFieldShouldEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (BOOL)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

