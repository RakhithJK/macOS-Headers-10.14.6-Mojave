//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NFCallbackScope : NSObject
{
    unsigned long long _scope;
    NSArray *_names;
}

@property(readonly, nonatomic) NSArray *names; // @synthesize names=_names;
@property(readonly, nonatomic) unsigned long long scope; // @synthesize scope=_scope;
- (void).cxx_destruct;
- (id)initWithScope:(unsigned long long)arg1 names:(id)arg2;

@end

