//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SignpostSupportObjectFilter : NSObject
{
    CDUnknownBlockType _filterBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (BOOL)passesObject:(id)arg1;
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1;

@end

