//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPFontKerning : NSObject <CPDisposable>
{
    struct __CFData *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (struct __CFDictionary *)createKernTable;
- (void)doTable;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doSubtableFormat3;
- (void)doSubtableFormat2;
- (void)doSubtableFormat1;
- (void)doSubtableFormat0;
- (void)doKerningPair;
- (unsigned int)readUnsignedLong;
- (short)readShort;
- (unsigned short)readUnsignedShort;
- (unsigned char)readByte;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithCGFont:(struct CGFont *)arg1;
- (id)initWithKernData:(struct __CFData *)arg1;

@end

