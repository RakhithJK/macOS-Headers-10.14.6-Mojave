//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface SignpostStackFrame : NSObject
{
    NSUUID *_symbolOwnerUUID;
    unsigned long long _offset;
}

@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSUUID *symbolOwnerUUID; // @synthesize symbolOwnerUUID=_symbolOwnerUUID;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)_serializableArrayRepresentation;

@end

