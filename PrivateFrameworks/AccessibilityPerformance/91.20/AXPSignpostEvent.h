//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityPerformance/NSCopying-Protocol.h>
#import <AccessibilityPerformance/NSSecureCoding-Protocol.h>

@class NSString;

@interface AXPSignpostEvent : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_subsystem;
    NSString *_category;
    NSString *_name;
    long long _type;
    unsigned long long _machtime;
    NSString *_metadata;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned long long machtime; // @synthesize machtime=_machtime;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;
- (id)_typeToString:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

