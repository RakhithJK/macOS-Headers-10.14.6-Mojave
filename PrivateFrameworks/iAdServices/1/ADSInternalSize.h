//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying>
{
    float _width;
    float _height;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)initWithCoder:(id)arg1;

@end

