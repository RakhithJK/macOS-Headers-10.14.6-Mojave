//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTNetwork : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_plmn;
    NSString *_rat;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *rat; // @synthesize rat=_rat;
@property(retain, nonatomic) NSString *plmn; // @synthesize plmn=_plmn;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

