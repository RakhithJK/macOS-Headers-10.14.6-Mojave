//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInsertionCacheValidator-Protocol.h>

@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator>
{
    CDUnknownBlockType _block;
}

+ (id)validatorWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (BOOL)validateCache:(id)arg1 DOMObjectProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

