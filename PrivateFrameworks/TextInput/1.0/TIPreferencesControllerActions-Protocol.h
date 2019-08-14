//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInput/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol TIPreferencesControllerActions <NSObject>
@property(nonatomic) struct CGPoint keyboardPosition;
@property(nonatomic) BOOL keyboardShownByTouch;
@property(nonatomic) BOOL automaticMinimizationEnabled;
@property(nonatomic) BOOL predictionEnabled;
@property(copy, nonatomic) NSArray *inputModeSelectionSequence;
- (void)updateLastUsedDictationLanguages:(NSDictionary *)arg1;
- (void)updateEnabledDictationLanguages:(NSDictionary *)arg1;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateKeyboardHandBias:(NSString *)arg1;
- (void)updateKeyboardIsFloating:(BOOL)arg1;
- (void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
- (void)updateLastUsedKeyboards:(NSDictionary *)arg1;
- (void)updateLastUsedLayout:(NSString *)arg1;
- (void)updateLastUsedInputMode:(NSString *)arg1;
- (void)didTriggerOneTimeAction:(NSString *)arg1;
- (BOOL)oneTimeActionCompleted:(NSString *)arg1;
@end
