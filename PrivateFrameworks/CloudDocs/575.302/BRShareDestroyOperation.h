//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation
{
    CKShare *_share;
    CDUnknownBlockType _shareDestroyCompletionBlock;
}

@property(copy) CDUnknownBlockType shareDestroyCompletionBlock; // @synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1;

@end

