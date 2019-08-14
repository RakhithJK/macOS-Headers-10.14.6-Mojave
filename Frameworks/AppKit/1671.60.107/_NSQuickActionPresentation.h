//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSQuickActionPresentation : NSObject
{
    NSString *_mode;
    NSDictionary *_matchingExtensionAttributes;
    NSString *_titleExtensionAttributeKey;
    NSString *_iconNameExtensionAttributeKey;
    NSString *_colorNameExtensionAttributeKey;
    NSString *_legacyServicePresentationMode;
}

+ (id)presentationForMode:(id)arg1;
@property(readonly, copy) NSString *legacyServicePresentationMode; // @synthesize legacyServicePresentationMode=_legacyServicePresentationMode;
@property(readonly, copy) NSString *colorNameExtensionAttributeKey; // @synthesize colorNameExtensionAttributeKey=_colorNameExtensionAttributeKey;
@property(readonly, copy) NSString *iconNameExtensionAttributeKey; // @synthesize iconNameExtensionAttributeKey=_iconNameExtensionAttributeKey;
@property(readonly, copy) NSString *titleExtensionAttributeKey; // @synthesize titleExtensionAttributeKey=_titleExtensionAttributeKey;
@property(readonly, copy) NSDictionary *matchingExtensionAttributes; // @synthesize matchingExtensionAttributes=_matchingExtensionAttributes;
@property(readonly, copy) NSString *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
@property(readonly, copy) NSString *preferencesNotificationName;
@property(readonly, copy) NSString *activePreferencesKey;
@property(readonly, copy) NSString *orderingPreferencesKey;
@property(readonly, copy) NSString *preferencesDomain;
- (id)init;
- (id)initWithMode:(id)arg1 matchingExtensionAttributes:(id)arg2 titleExtensionAttributeKey:(id)arg3 iconNameExtensionAttributeKey:(id)arg4 colorNameExtensionAttributeKey:(id)arg5 legacyServicePresentationMode:(id)arg6;

@end

