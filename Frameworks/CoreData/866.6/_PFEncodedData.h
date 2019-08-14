//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData
{
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForKeyedUnarchiver;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToData:(id)arg1;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (const void *)bytes;
- (unsigned long long)length;
- (id)privateCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

