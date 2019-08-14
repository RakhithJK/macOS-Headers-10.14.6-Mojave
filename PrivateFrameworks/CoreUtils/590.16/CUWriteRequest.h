//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface CUWriteRequest : NSObject
{
    NSError *_error;
    struct iovec _iov[16];
    struct iovec *_iop;
    int _ion;
    unsigned long long _offset;
    unsigned char _messageUUID[16];
    BOOL _endOfData;
    BOOL _hasMessageUUID;
    struct iovec *_bytesIOArray;
    unsigned long long _bytesIOCount;
    unsigned long long _bytesIOMaxCount;
    CDUnknownBlockType _completion;
    NSArray *_dataArray;
}

@property(nonatomic) BOOL hasMessageUUID; // @synthesize hasMessageUUID=_hasMessageUUID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL endOfData; // @synthesize endOfData=_endOfData;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) unsigned long long bytesIOMaxCount; // @synthesize bytesIOMaxCount=_bytesIOMaxCount;
@property(nonatomic) unsigned long long bytesIOCount; // @synthesize bytesIOCount=_bytesIOCount;
@property(readonly, nonatomic) struct iovec *bytesIOArray; // @synthesize bytesIOArray=_bytesIOArray;
- (void).cxx_destruct;
@property(readonly, nonatomic) char *messageUUID;
- (id)init;

@end

