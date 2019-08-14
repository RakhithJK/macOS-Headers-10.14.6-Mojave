//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@class NSString;

@interface TFileSizeFormatter : NSNumberFormatter
{
    NSString *_invalidSizeStr;
    unsigned long long _options;
}

+ (id)fileSizeFormatter;
@property(retain) NSString *invalidSizeStr; // @synthesize invalidSizeStr=_invalidSizeStr;
- (id)numberFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
@property _Bool specialZeroHandling; // @dynamic specialZeroHandling;
@property _Bool sizeInBytes; // @dynamic sizeInBytes;
@property _Bool stableWidth; // @dynamic stableWidth;
- (void)dealloc;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

