//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPropertyTransaction : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_property;
    id _value;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)mergeTransactionIntoTransactionArray:(id)arg1;
- (id)initWithType:(long long)arg1 forProperty:(id)arg2 withValue:(id)arg3;

@end

