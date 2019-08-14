//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacBuddyManager-Protocol.h"

@class CountryManager, NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSString, SAKeyboard;

@interface KeyboardManager : NSObject <MacBuddyManager>
{
    CountryManager *countryManager;
    NSDictionary *inputDictionary;
    NSArray *keyboardsForCurrentLanguage;
    NSArray *allKnownKeyboards;
    NSMutableArray *keyboardsShownToTheUser;
    NSString *defaultKeyboardName;
    NSIndexSet *userSelectedTypingStyle;
    SAKeyboard *userSelectedKeyboard;
    BOOL userSelectedAltInputMethod;
}

+ (id)prunedKeyboardsFromArray:(id)arg1;
+ (id)MBLocaleGetAppropriateKeyboardsForLocaleIdentifier:(id)arg1;
+ (id)_defaultInputSourceIdentifierForLocaleIdentifier:(id)arg1;
+ (id)_defaultInputSourceIdentifierForLocaleIdentifier:(id)arg1 intendedLang:(id *)arg2;
+ (id)_inputSourcesForLocalePart:(id)arg1;
+ (id)_inputSourcesForLocaleIdentifier:(id)arg1;
+ (id)_inputSourcesForLanguageIdentifier:(id)arg1;
+ (BOOL)_inputSourceIdentifierIsABCLayout:(id)arg1;
+ (id)_insertDefaultIDIdeallyInto:(id)arg1 inputIdentifier:(id)arg2 language:(id)arg3;
+ (id)_preferredKeyboardSourceIDsForLocaleIdentifier:(id)arg1 currentISOLanguageCode:(id)arg2;
@property BOOL userSelectedAltInputMethod; // @synthesize userSelectedAltInputMethod;
@property(retain) NSString *defaultKeyboardName; // @synthesize defaultKeyboardName;
@property(retain) NSIndexSet *userSelectedTypingStyle; // @synthesize userSelectedTypingStyle;
@property(retain) SAKeyboard *userSelectedKeyboard; // @synthesize userSelectedKeyboard;
@property(retain) CountryManager *countryManager; // @synthesize countryManager;
@property(retain) NSArray *allKnownKeyboards; // @synthesize allKnownKeyboards;
@property(retain) NSArray *keyboardsForCurrentLanguage; // @synthesize keyboardsForCurrentLanguage;
@property(retain) NSMutableArray *keyboardsShownToTheUser; // @synthesize keyboardsShownToTheUser;
- (void).cxx_destruct;
- (id)defaultTypingStyleForKeyboard:(id)arg1;
- (BOOL)keyboardHasAltMethod:(id)arg1;
- (id)typingStylesForKeyboard:(id)arg1;
- (id)_inputDictionaryForKeyboard:(id)arg1;
@property(readonly, copy) NSDictionary *_inputDictionary;
- (BOOL)applySettings:(id *)arg1;
- (id)initWithCountryManager:(id)arg1;
- (id)init;
- (void)showAllKeyboards:(BOOL)arg1;
- (void)refreshKeyboardDatabase:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
