//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AssistantCallbackController, NSArray, NSDictionary, NSString;

@protocol AssistantCallbackUIDelegate
- (void)callbackAskCancel;

@optional
- (int)callbackAskUserAQuestion:(int)arg1 paramDict:(NSDictionary *)arg2 forController:(AssistantCallbackController *)arg3;
- (int)callbackAskUserToChooseFromStringList:(NSArray *)arg1 context:(int)arg2 forController:(AssistantCallbackController *)arg3;
- (int)callbackAskUserForPassword:(int)arg1 param:(NSString *)arg2 forController:(AssistantCallbackController *)arg3;
@end

