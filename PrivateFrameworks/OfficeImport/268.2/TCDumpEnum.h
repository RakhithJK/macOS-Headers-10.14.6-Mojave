//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TCDumpEnum : NSObject
{
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (void).cxx_destruct;
- (id)nameForValue:(int)arg1;
- (id)valueForName:(id)arg1;
- (id)typeName;
- (id)initWithTypeName:(id)arg1 pairs:(struct TCDumpEnumPair *)arg2;

@end
