//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

@interface CKTimeLoggerLog : NSObject <NSSecureCoding>
{
    NSString *_type;
    double _beginTime;
    double _endTime;
    NSString *_beginningMessage;
    NSString *_endingMessage;
    NSMutableArray *_pauseRecords;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *pauseRecords; // @synthesize pauseRecords=_pauseRecords;
@property(retain, nonatomic) NSString *endingMessage; // @synthesize endingMessage=_endingMessage;
@property(retain, nonatomic) NSString *beginningMessage; // @synthesize beginningMessage=_beginningMessage;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(BOOL)arg3;
- (void)togglePauseWithTime:(double)arg1 message:(id)arg2;
- (id)description;
@property(readonly) double elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

