//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EQEquation, NSArray;

@interface OPParamValues : NSObject <NSCoding>
{
    NSArray *mParams;
    NSArray *mValues;
    EQEquation *mEquation;
}

- (id)equation;
- (id)description;
- (BOOL)isSameAs:(id)arg1;
- (void)set;
- (void)dealloc;
- (id)initWithParams:(id)arg1 values:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

