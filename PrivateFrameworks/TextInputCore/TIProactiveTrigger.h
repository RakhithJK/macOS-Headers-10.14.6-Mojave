//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>
{
    unsigned char _triggerSourceType;
    NSDictionary *_attributes;
}

@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2;

@end

