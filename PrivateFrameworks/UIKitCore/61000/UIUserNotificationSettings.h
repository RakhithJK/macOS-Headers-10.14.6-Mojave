//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _types;
    NSSet *_categories;
}

+ (BOOL)supportsSecureCoding;
+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;
+ (id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)userNotificationActionSettings;
- (unsigned long long)allowedUserNotificationTypes;
- (id)validatedSettings;
- (id)description;
- (BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2;
- (id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;

@end

