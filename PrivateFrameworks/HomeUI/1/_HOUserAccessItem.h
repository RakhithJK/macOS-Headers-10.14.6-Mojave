//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMUser;

@interface _HOUserAccessItem : HFItem
{
    HMUser *_user;
    CDUnknownBlockType _resultsBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultsBlock; // @synthesize resultsBlock=_resultsBlock;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end

