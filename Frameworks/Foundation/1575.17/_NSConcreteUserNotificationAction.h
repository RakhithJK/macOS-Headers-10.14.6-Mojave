//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUserNotificationAction.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding>
{
    NSString *_title;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)title;
- (void)_setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

