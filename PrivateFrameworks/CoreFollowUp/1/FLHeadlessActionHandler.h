//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpItem;

@interface FLHeadlessActionHandler : NSObject
{
    FLFollowUpItem *_item;
}

+ (id)handlerWithItem:(id)arg1;
@property(retain, nonatomic) FLFollowUpItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1;

@end

