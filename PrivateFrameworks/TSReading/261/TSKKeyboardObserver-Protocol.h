//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSNotification;

@protocol TSKKeyboardObserver <NSObject>

@optional
- (void)keyboardDidChangeFrame:(NSNotification *)arg1;
- (void)keyboardWillChangeFrame:(NSNotification *)arg1;
- (void)keyboardHideCanceled;
- (void)keyboardDidHideOrUndock:(NSNotification *)arg1;
- (void)keyboardWillHideOrUndock:(NSNotification *)arg1;
- (void)keyboardShowCanceled;
- (void)keyboardDidShowOrDock:(NSNotification *)arg1;
- (void)keyboardWillShowOrDock:(NSNotification *)arg1;
@end

