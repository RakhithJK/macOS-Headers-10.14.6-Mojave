//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_bars;
    NSNumber *_displayBars;
    NSNumber *_maxDisplayBars;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *maxDisplayBars; // @synthesize maxDisplayBars=_maxDisplayBars;
@property(retain, nonatomic) NSNumber *displayBars; // @synthesize displayBars=_displayBars;
@property(retain, nonatomic) NSNumber *bars; // @synthesize bars=_bars;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

