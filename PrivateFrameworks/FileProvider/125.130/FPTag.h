//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>
{
    int _color;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (long long)localizedStandardCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 color:(int)arg2;

@end

