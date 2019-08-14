//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSDictionary, NSString;

@interface CXHandoffContext : NSObject <NSSecureCoding>
{
    BOOL _outgoing;
    NSString *_handoffIdentifier;
    CXHandle *_remoteHandle;
    NSDictionary *_context;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
@property(nonatomic, getter=isOutgoing) BOOL outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, copy, nonatomic) NSString *handoffIdentifier; // @synthesize handoffIdentifier=_handoffIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToHandoffContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandoffIdentifier:(id)arg1;

@end

