//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (ServerCompatibilityAdditions)
- (id)svc_select:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *svc_reversedArray;
- (id)svc_reject:(CDUnknownBlockType)arg1;
- (id)svc_map:(CDUnknownBlockType)arg1;
- (id)svc_fold:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *svc_flattenedArray;
- (void)svc_each:(CDUnknownBlockType)arg1;
- (id)svc_arrayByRemovingObject:(id)arg1;
@end

