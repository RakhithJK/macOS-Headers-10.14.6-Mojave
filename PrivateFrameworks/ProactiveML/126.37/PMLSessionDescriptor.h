//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString;

@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol>
{
    NSString *_name;
    NSString *_version;
    NSString *_locale;
}

+ (id)descriptorForName:(id)arg1 version:(id)arg2 locale:(id)arg3;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)subSessionLabel;
- (BOOL)isSubSessionDescriptor;
- (id)baseSessionDescriptor;
- (id)subSessionDescriptorForLabel:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
