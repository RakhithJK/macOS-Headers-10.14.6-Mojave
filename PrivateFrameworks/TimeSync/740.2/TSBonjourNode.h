//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TSBonjourNode : NSObject
{
    NSString *_name;
    NSString *_type;
    NSString *_domain;
    NSDictionary *_interfaces;
}

@property(copy, nonatomic) NSDictionary *interfaces; // @synthesize interfaces=_interfaces;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)removedFromInterface:(unsigned int)arg1 named:(id)arg2;
- (void)addedOnInterface:(unsigned int)arg1 named:(id)arg2;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3;
- (id)init;

@end
