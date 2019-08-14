//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSRelation : NSObject
{
    BOOL _faultable;
    Class _fromEntity;
    NSString *_fromKey;
    Class _toEntity;
    NSString *_toKey;
}

@property(readonly, nonatomic, getter=isFaultable) BOOL faultable; // @synthesize faultable=_faultable;
@property(readonly, nonatomic) NSString *toKey; // @synthesize toKey=_toKey;
@property(readonly, nonatomic) Class toEntity; // @synthesize toEntity=_toEntity;
@property(readonly, nonatomic) NSString *fromKey; // @synthesize fromKey=_fromKey;
@property(readonly, nonatomic) Class fromEntity; // @synthesize fromEntity=_fromEntity;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEquivalentToRelation:(id)arg1;
- (BOOL)isInverseOfRelation:(id)arg1;
- (id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5;

@end

