//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSLocale, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSTimeZone, OITSUDateParserLibrary;

@interface OITSULocale : NSObject
{
    NSLocale *_locale;
    NSLocale *_gregorianCalendarLocale;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_documentLanguageIdentifier;
    BOOL _isAutoUpdating;
    NSString *_currencyCode;
    NSString *_decimalSeparator;
    NSString *_currencyDecimalSeparator;
    NSString *_groupingSeparator;
    NSString *_currencyGroupingSeparator;
    NSString *_listSeparator;
    NSString *_percentSymbol;
    long long _dateComponentOrdering;
    NSArray *_monthSymbols;
    NSArray *_standaloneMonthSymbols;
    NSArray *_weekdaySymbols;
    NSArray *_standaloneWeekdaySymbols;
    NSArray *_shortMonthSymbols;
    NSArray *_shortStandaloneMonthSymbols;
    NSArray *_shortWeekdaySymbols;
    NSArray *_shortStandaloneWeekdaySymbols;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    OITSUDateParserLibrary *_dateParserLibrary;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    struct __CFNumberFormatter *_plainFormatter;
    struct __CFNumberFormatter *_noMinusSignPlainFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFNumberFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    unsigned long long _groupingSize;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
    NSString *_trueString;
    NSString *_falseString;
    NSString *_amString;
    NSString *_pmString;
}

+ (void)saveLocaleForReuse:(id)arg1;
+ (id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2;
+ (BOOL)localeIsAutoUpdating:(id)arg1;
+ (id)allSupportedTemplatePickerLanguages;
+ (id)allSupportedTier3Languages;
+ (id)allSupportedTier1Languages;
+ (id)displayNameForCode:(id)arg1 ofType:(id)arg2 displayStandalone:(BOOL)arg3;
+ (id)simplifiedDisplayNameForLocaleID:(id)arg1 displayStandalone:(BOOL)arg2;
+ (id)localeIDWithoutDefaultRegionCode:(id)arg1 avoidAmbiguousCases:(BOOL)arg2;
+ (id)localeIDWithDefaultRegionCode:(id)arg1;
+ (id)deducedScriptForLocale:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifier:(id)arg1;
+ (id)applicationLocale;
+ (id)preferredLocale;
+ (id)currentLocale;
+ (id)preferredLanguages;
+ (id)cacheKeyForLocale:(id)arg1;
+ (unsigned long long)autoupdatingCurrentLocaleChangeCount;
+ (void)setLocalizedStringBundle:(struct __CFBundle *)arg1;
+ (void)initialize;
@property(readonly) NSString *pmString; // @synthesize pmString=_pmString;
@property(readonly) NSString *amString; // @synthesize amString=_amString;
@property(readonly) OITSUDateParserLibrary *dateParserLibrary; // @synthesize dateParserLibrary=_dateParserLibrary;
@property(readonly) NSString *falseString; // @synthesize falseString=_falseString;
@property(readonly) NSString *trueString; // @synthesize trueString=_trueString;
@property(readonly) NSArray *shortStandaloneWeekdaySymbols; // @synthesize shortStandaloneWeekdaySymbols=_shortStandaloneWeekdaySymbols;
@property(readonly) NSArray *shortWeekdaySymbols; // @synthesize shortWeekdaySymbols=_shortWeekdaySymbols;
@property(readonly) NSArray *shortStandaloneMonthSymbols; // @synthesize shortStandaloneMonthSymbols=_shortStandaloneMonthSymbols;
@property(readonly) NSArray *shortMonthSymbols; // @synthesize shortMonthSymbols=_shortMonthSymbols;
@property(readonly) NSArray *standaloneWeekdaySymbols; // @synthesize standaloneWeekdaySymbols=_standaloneWeekdaySymbols;
@property(readonly) NSArray *weekdaySymbols; // @synthesize weekdaySymbols=_weekdaySymbols;
@property(readonly) NSArray *standaloneMonthSymbols; // @synthesize standaloneMonthSymbols=_standaloneMonthSymbols;
@property(readonly) NSArray *monthSymbols; // @synthesize monthSymbols=_monthSymbols;
@property(readonly) long long dateComponentOrdering; // @synthesize dateComponentOrdering=_dateComponentOrdering;
@property(readonly) NSLocale *gregorianCalendarLocale; // @synthesize gregorianCalendarLocale=_gregorianCalendarLocale;
@property(readonly) NSString *percentSymbol; // @synthesize percentSymbol=_percentSymbol;
@property(readonly) unsigned long long groupingSize; // @synthesize groupingSize=_groupingSize;
@property(readonly) NSString *listSeparator; // @synthesize listSeparator=_listSeparator;
@property(readonly) NSString *currencyGroupingSeparator; // @synthesize currencyGroupingSeparator=_currencyGroupingSeparator;
@property(readonly) NSString *groupingSeparator; // @synthesize groupingSeparator=_groupingSeparator;
@property(readonly) NSString *currencyDecimalSeparator; // @synthesize currencyDecimalSeparator=_currencyDecimalSeparator;
@property(readonly) NSString *decimalSeparator; // @synthesize decimalSeparator=_decimalSeparator;
@property(readonly) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly) BOOL isAutoUpdating; // @synthesize isAutoUpdating=_isAutoUpdating;
@property(readonly) NSString *documentLanguageIdentifier; // @synthesize documentLanguageIdentifier=_documentLanguageIdentifier;
@property(readonly) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly) NSLocale *locale; // @synthesize locale=_locale;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(struct __CFBundle *)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
@property(readonly) NSTimeZone *timeZone;
- (BOOL)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2;
- (long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2;
- (long long)localizedCompare:(id)arg1 toString:(id)arg2;
- (id)localizedStringWithFormat:(id)arg1;
- (void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2;
- (id)localeSpecificStorageForKey:(id)arg1;
- (id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(BOOL)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(BOOL)arg6 currencyCode:(id)arg7 suppressMinusSign:(BOOL)arg8;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (void)returnScientificNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutScientificNumberFormatter;
- (void)returnNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutNumberFormatter;
@property(readonly) NSString *arrayRowSeparator;
@property(readonly) struct __CFLocale *cfGregorianCalendarLocale;
@property(readonly) struct __CFLocale *cfLocale;
- (id)displayLanguageNameWithStandalone:(BOOL)arg1;
- (id)simplifiedDisplayNameWithStandalone:(BOOL)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithDocumentLanguageIdentifier:(id)arg1;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(BOOL)arg3;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2;

@end

