//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CUReadRequest : NSObject
{
    char *_bufferPtr;
    NSError *_error;
    unsigned long long _length;
    unsigned char _messageUUID[16];
    BOOL _hasMessageUUID;
    unsigned int _statusFlags;
    void *_bufferBytes;
    NSMutableData *_bufferData;
    CDUnknownBlockType _completion;
    NSData *_data;
    unsigned long long _minLength;
    unsigned long long _maxLength;
}

@property(nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(nonatomic) BOOL hasMessageUUID; // @synthesize hasMessageUUID=_hasMessageUUID;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) void *bufferBytes; // @synthesize bufferBytes=_bufferBytes;
- (void).cxx_destruct;
@property(readonly, nonatomic) char *messageUUID;

@end

