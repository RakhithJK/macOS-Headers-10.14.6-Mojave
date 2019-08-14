//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKUtilities : NSObject
{
}

+ (BOOL)isDeviceSupportedForPhotoSharingIntentDetection:(id)arg1;
+ (BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1;
+ (id)getDeviceModel;
+ (BOOL)suffixInArray:(id)arg1 withArray:(id)arg2;
+ (BOOL)prefixInArray:(id)arg1 withArray:(id)arg2;
+ (BOOL)tokenInArray:(id)arg1 withArray:(id)arg2;
+ (id)removeEmoji:(id)arg1;
+ (BOOL)isLanguageSupportedBySmartPunctuation:(id)arg1;
+ (BOOL)isLanguageSupportedForPartOfSpeech:(id)arg1;
+ (BOOL)isLanguageSupportedForLemmatization:(id)arg1;
+ (BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;
+ (id)stripDiacritics:(id)arg1;
+ (id)normalizeForPersonalization:(id)arg1;
+ (id)stripEmojiSkinTones:(id)arg1;
+ (id)removeMultipleWhitespaces:(id)arg1;
+ (id)stripPunctuations:(id)arg1;

@end
