//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, SCRCUserDefaults;

__attribute__((visibility("hidden")))
@interface SCROutputUserSubstitutionsManager : NSObject
{
    SCRCUserDefaults *_userDefaults;
    NSLock *_cachedUserSubstitutionsLock;
    NSArray *_cachedUserSubstitutions;
    struct URegularExpression **_smartRegularExpressions;
    struct URegularExpression **_dumbRegularExpressions;
    struct URegularExpression **_untouchableRegularExpressions;
}

+ (id)findAndReplaceSingleDoubleQuoteSymbolsInString:(id)arg1;
+ (id)defaultManager;
- (void)loadUserSubstitutionsFromPrefs;
- (void)_handleUserDefaultsTransactionNotification:(id)arg1;
- (id)createUserSubstitutionsWithStorageArray:(id)arg1;
- (BOOL)_replaceTextInString:(id)arg1 withSubstitution:(id)arg2 withPunctuationTable:(id)arg3;
- (BOOL)makeSubstitutionInString:(id)arg1 componentName:(id)arg2 component:(id)arg3 domainIdentifier:(id)arg4 usePunctuationSettings:(BOOL)arg5 ignoreSinglePunctuation:(BOOL)arg6;
- (BOOL)makeSubstitutionsInAction:(id)arg1 componentName:(id)arg2 component:(id)arg3 usePunctuationSettings:(BOOL)arg4;
- (BOOL)makeRegexSubstitutionsInAction:(id)arg1 componentName:(id)arg2 component:(id)arg3;
- (void)_compileRegularExpressions:(int)arg1;
- (struct URegularExpression *)_createRegexFromString:(id)arg1;
- (id)substituteComposedCharacter:(id)arg1 inAction:(id)arg2 component:(id)arg3;
- (void)dealloc;
- (id)init;

@end

