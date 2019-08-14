//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_displayName;
    unsigned long long _options;
}

+ (BOOL)supportsSecureCoding;
+ (id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3;

@end

