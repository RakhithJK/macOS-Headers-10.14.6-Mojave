//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMStopwatch : NSObject
{
    NSString *_label;
    NSString *_comment;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

+ (id)illegalLabelCharacterSet;
+ (void)dumpBuffer:(id)arg1;
+ (void)eventWithLabel:(id)arg1;
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;
+ (id)stopwatchWithLabel:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)descriptionAsData;
- (id)description;
- (void)stop;
- (void)stopWithComment:(id)arg1;
- (id)initWithLabel:(id)arg1;

@end

