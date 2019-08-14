//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IMKKeyboardService, NSMenu, NSString;
@protocol IMKInputMethod, IMKKeyboard;

@protocol IMKKeyboardServiceDelegate
- (NSMenu *)menu;
- (void)keyboardService:(IMKKeyboardService *)arg1 didChangeFromInputMode:(NSString *)arg2 toInputMode:(NSString *)arg3 forKeyboard:(id <IMKKeyboard>)arg4;
- (id <IMKInputMethod>)keyboardService:(IMKKeyboardService *)arg1 requiresInputMethodFor:(id <IMKKeyboard>)arg2;
@end

