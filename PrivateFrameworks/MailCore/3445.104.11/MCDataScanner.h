//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MCDataScanner : NSObject
{
    unsigned long long _scanLocation;
    NSData *_data;
}

+ (id)scannerWithData:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)scanUpToBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)_scanUpToBytes:(const void *)arg1 length:(unsigned long long)arg2 intoData:(id *)arg3;
- (BOOL)scanUpToCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanUpToData:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanBytesFromSet:(id)arg1 intoData:(id *)arg2;
- (BOOL)_scanBytes:(const void *)arg1 length:(unsigned long long)arg2 intoData:(id *)arg3;
- (BOOL)scanCString:(const char *)arg1 intoData:(id *)arg2;
- (BOOL)scanData:(id)arg1 intoData:(id *)arg2;
- (BOOL)scanInteger:(long long *)arg1;
- (BOOL)scanByte:(char *)arg1;
@property(readonly, nonatomic) BOOL isAtEnd;
@property(nonatomic) unsigned long long scanLocation;
- (id)init;
- (id)initWithData:(id)arg1;

@end

