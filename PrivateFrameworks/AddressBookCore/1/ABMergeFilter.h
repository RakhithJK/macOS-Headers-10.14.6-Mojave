//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABMergeFilter : NSObject
{
    CDUnknownFunctionPointerType _equal;
    CDUnknownFunctionPointerType _hash;
    SEL _merge;
    NSMutableDictionary *_dict;
}

@property(retain) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property SEL merge; // @synthesize merge=_merge;
@property CDUnknownFunctionPointerType hash; // @synthesize hash=_hash;
@property CDUnknownFunctionPointerType equal; // @synthesize equal=_equal;
- (void)dealloc;

@end

