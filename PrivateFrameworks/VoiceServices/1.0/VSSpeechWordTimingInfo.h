//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding>
{
    double _startTime;
    struct _NSRange _textRange;
}

+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
