//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSUUID;

@interface BKSRequest : NSObject
{
    BOOL _isTextExecOffset;
    NSUUID *_symbolOwnerUUID;
    NSNumber *_offset;
}

@property(readonly, nonatomic) BOOL isTextExecOffset; // @synthesize isTextExecOffset=_isTextExecOffset;
@property(readonly, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSUUID *symbolOwnerUUID; // @synthesize symbolOwnerUUID=_symbolOwnerUUID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2 isTextExecSegment:(BOOL)arg3;

@end

