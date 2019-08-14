//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDMMCSItemReaderWriterProtocol-Protocol.h>

@class CKDMMCSItem, CKDMMCSItemGroupContext, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSItemFileWriter : NSObject <CKDMMCSItemReaderWriterProtocol>
{
    NSMutableData *_data;
    CKDMMCSItemGroupContext *_MMCSRequest;
    CKDMMCSItem *_MMCSItem;
}

@property(retain, nonatomic) CKDMMCSItem *MMCSItem; // @synthesize MMCSItem=_MMCSItem;
@property(retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest; // @synthesize MMCSRequest=_MMCSRequest;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long *)arg4 error:(id *)arg5;
- (id)getFileMetadataWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

