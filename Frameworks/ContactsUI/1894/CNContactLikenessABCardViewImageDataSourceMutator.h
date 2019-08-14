//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactLikenessMutator-Protocol.h>

@class NSString;
@protocol ABCardViewImageDataSource, CNScheduler;

@interface CNContactLikenessABCardViewImageDataSourceMutator : NSObject <CNContactLikenessMutator>
{
    id <ABCardViewImageDataSource> _dataSource;
    id <CNScheduler> _scheduler;
}

+ (id)imageFromLikeness:(id)arg1;
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <ABCardViewImageDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithImageDataSource:(id)arg1 scheduler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

